#include "FBullCowGame.h"


int main()
{
	FBullCowGame BCGame;
	FString MyGuess = "";
	FString WordToBeGuessed = "";
	int32 Bulls = 0;
	int32 Cows = 0;
	bool IsGameRunning = true;
	int Tries = BCGame.GetMaxTries();

	BCGame.PrintStart();

	//BCGame.TheWordToBeGuessed();
	WordToBeGuessed = BCGame.TheWordToBeGuessed();

	while (IsGameRunning && Tries != 0)
	{
		MyGuess = BCGame.GetGuess();
		Tries--;

		if (BCGame.IsIsogram(MyGuess) && BCGame.IsCorrectLenght(MyGuess))
		{
			Bulls = BCGame.CheckGuess(MyGuess, WordToBeGuessed).Bulls;
			Cows = BCGame.CheckGuess(MyGuess, WordToBeGuessed).Cows;

			if (BCGame.IsGameWon(Bulls))
			{
				std::cout << "Congratulations, you won the game!!\n\n";
			}
			else
			{
				std::cout << "You got " << Bulls << " bulls and " << Cows << " Cows.\n";
				BCGame.GetTriesLeft(Tries);
			}
		}
		else
		{
			BCGame.GetTriesLeft(Tries);
		}
		
		while (Tries == 0 || BCGame.IsGameWon(Bulls))
		{
			auto answer = BCGame.WannaPlayAgain();

			if(answer == EQuestionResult::Play_Again)
			{
				system("cls");
				BCGame.PrintStart();
				Tries = BCGame.GetMaxTries();
				Bulls = 0;
			}
			else if (answer == EQuestionResult::Stop_Playing)
			{
				IsGameRunning = false;
				break;
			}
		}
	}
	return 0;
}

