#include "FBullCowGame.h"


FBullCowGame::FBullCowGame()
{
	Reset();
	//word between 3 to 6 letters
	/*const FString HIDDEN_WORD = "";
	MyHiddenWord = HIDDEN_WORD;*/
}


int32 FBullCowGame::GetHiddenWordLength()
{
	return GetHiddenWord().length();
}

int32 FBullCowGame::GetMaxTries()
{
	TMap<int32, int32> MaxTries{ {3,6}, {4,9}, {5, 12}, {6,15} };

	return MaxTries[GetHiddenWordLength()];
}

int32 FBullCowGame::GetCurrentTry() const
{
	return MyCurrentTry;
}

FString FBullCowGame::GetGuess() const
{
	std::cout << "What is your guess? \n";
	FString GuessedWord;
	getline(std::cin, GuessedWord);
	return GuessedWord;
}

void FBullCowGame::GetTriesLeft(int32 tries) const 
{ 
	std::cout << "You have " << tries << " tries left.\n\n";
}


void FBullCowGame::PrintStart()
{
	
	//CurrentNumberOfChances = MaxNumberOfChances;
	
	std::cout << std::endl;
	std::cout << "       __n__n__            |\\__/|               \n";
	std::cout << ".--------\\00 /-            |O  O|_________              \n";
	std::cout << "/ ##  ## (oo)             <  00  >  +   + \\             \n";
	std::cout << "/ \\## __ ./                ( __ ) ++___+ +|\\            \n";
	std::cout << "|//YY \\|/                      \\ | /   \\| | |             \n";
	std::cout << "|||   |||                       |||     |||        \n\n";
	std::cout << "Welcome to the Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << GetHiddenWordLength() << " letters isogram I'm thinking of?\n\n";
	std::cout << "You have " << GetMaxTries() << " chances to guess the word.\n\n";

	return;
}

void FBullCowGame::Reset()
{
	constexpr int32 MAX_TRY = 5;
	MyMaxTries = MAX_TRY;
	MyCurrentTry = MAX_TRY;
}

int32 FBullCowGame::SetCurrentTry()
{
	return MyCurrentTry--;
}

bool FBullCowGame::IsGameWon(int32 bulls) 
{
	if (bulls == GetHiddenWordLength())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool FBullCowGame::IsCorrectLenght(FString GuessedWord)
{
	int32 WordLength = GuessedWord.length();
	if (WordLength != GetHiddenWordLength())
	{
		std::cout << "The word must be " << GetHiddenWordLength() << " characters long\n";
		return false;
	}

	return true;
}

bool FBullCowGame::IsIsogram(FString GuessedWord)
{
	TMap<int32, bool> WordMap;
	for (char c : GuessedWord)
	{
		c = tolower(c);
		if (WordMap[c])
		{
			std::cout << "An isogram should not contain the same letter more than once.\n";
			return false;
		}
		else
		{
			WordMap[c] = true;
		}
	}
	return true;
}

void FBullCowGame::TheWordToBeGuessed()
{
	std::ifstream file("words.txt");
	int32 RandomWordPostion = 0;
	FString Word = "";
	std::vector<FString> VectorOfWords = {};

	while (!file.eof())
	{
		std::getline(file, Word);
		VectorOfWords.push_back(Word);
	}

	RandomWordPostion = rand() % VectorOfWords.size() + 1;
	
	//std::cout << VectorOfWords.at(RandomWordPostion);

	MyHiddenWord =  VectorOfWords.at(RandomWordPostion);
}

FString FBullCowGame::GetHiddenWord() const
{
	return MyHiddenWord;
}

FBullCowCount FBullCowGame::CheckGuess(FString GuessedWord, FString WordToBeGuessed)
{
	FBullCowCount BullCowCount;
	int32 WordLength = GetHiddenWordLength();

	for (int32 i = 0; i < WordLength; i++)
	{
		for (int32 j = 0; j < WordLength; j++)
		{
			if (GuessedWord[i] == WordToBeGuessed[j] && i == j)
			{
				BullCowCount.Bulls++;
				break;
			}
			else if (GuessedWord[i] == WordToBeGuessed[j] && i != j)
			{
				BullCowCount.Cows++;
				break;
			}
		}
	}
	return BullCowCount;
}

bool FBullCowGame::IsGameRunning(bool IsRuning = true)
{

	return IsRuning;
}

void FBullCowGame::ResetCurrentTries()
{
	MyCurrentTry = MyMaxTries;
}

EQuestionResult FBullCowGame::WannaPlayAgain()
{
	FString Answer = "";

	std::cout << "Do you wanna play again? (y/n)\n";
	std::getline(std::cin, Answer);
	char ToLowerAnswer = tolower(Answer[0]);

	switch (ToLowerAnswer)
	{
		case 'y':
		{
			return EQuestionResult::Play_Again;
			break;
		}
		case 'n':
		{
			return EQuestionResult::Stop_Playing;
			break;
		}
		default:
		{
			return EQuestionResult::Bad_Answer;
			break;
		}
	}
}
