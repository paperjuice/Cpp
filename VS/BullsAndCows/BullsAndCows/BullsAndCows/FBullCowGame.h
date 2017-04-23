#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <map>
#include <fstream>
#include <vector>
#define TMap std::map
#define FString std::string
#define int32 int


struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

enum class EQuestionResult
{
	Play_Again,
	Stop_Playing,
	Bad_Answer
};


class FBullCowGame
{
public: 
	FBullCowGame(); //constructor

	void PrintStart();
	void ResetCurrentTries();
	void Reset();
	
	FBullCowCount CheckGuess(FString, FString);
	bool IsGameRunning(bool);
	bool IsGameWon(int32);
	bool IsIsogram(FString);
	bool IsCorrectLenght(FString);

	void TheWordToBeGuessed();
	EQuestionResult WannaPlayAgain();
	
	FString GetGuess() const;
	int32 GetMaxTries();
	int32 GetCurrentTry() const;
	FString GetHiddenWord() const;
	int32 GetHiddenWordLength();
	int32 SetCurrentTry();
	void GetTriesLeft(int32) const;


private:
	// see constructor for initialisation 
	int32 MyCurrentTry;
	int32 MyMaxTries;
	int32 SecretWordLength;
	FString MyHiddenWord;

};