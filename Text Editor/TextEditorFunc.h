#pragma once
/*
This the Functions that we will work on it.
amr have the functions [1:5]
eladwy have the functions [6:10]
bdr have the functions [11:15]
*/
using namespace std;
//____________________________________________________________________________________________

string getAValidFileName(string turn = ""); // Done - Eladwy. Regex - by Yusuf
//____________________________________________________________________________________________

bool checkValidFile(string fileName); // Done - Eladwy.
//____________________________________________________________________________________________

void printMainMenu(); // Done - Eladwy.
//____________________________________________________________________________________________

bool checkUserChoice(string choice); // Done - Eladwy.
//____________________________________________________________________________________________

int getUserChoice(); // Done - Eladwy.
//____________________________________________________________________________________________

bool isEmptyFile(string fileName); // Done - Eladwy.
//____________________________________________________________________________________________

void executeUserChoice(int choice, string fileName, string originalFileName); // Done - Eladwy.
//____________________________________________________________________________________________

void addingContent(string fileName); //Done
//____________________________________________________________________________________________

void displayContent(string fileName); //Done
//____________________________________________________________________________________________

void emptyFileContent(string fileName); //Done
//____________________________________________________________________________________________

void encryptFileContent(string fileName); //Done
//____________________________________________________________________________________________

void decryptFileContent(string fileName); //Done
//____________________________________________________________________________________________

void mergeAnotherFile(string fileName); // Done - Eladwy.
//____________________________________________________________________________________________

void countNumberOfWords(string fileName); // Done - Eladwy.
//____________________________________________________________________________________________

void countNumberOfCharacters(string fileName); // Done - Eladwy.
//____________________________________________________________________________________________

void countNumberOfLines(string fileName); // Done - Eladwy.
//____________________________________________________________________________________________

string makeWordLowerCase(string word); // Done - Eladwy.
//____________________________________________________________________________________________

string getWordForSearching(); // Done - Eladwy.
//____________________________________________________________________________________________

void searchForWordInFile(string fileName); // Done - Eladwy.
//____________________________________________________________________________________________

void countWordOccurences(string filename); // DONE - Yusuf Badr
//____________________________________________________________________________________________

void allFileToUpperCase(string filename); // DONE - Yusuf Badr
//____________________________________________________________________________________________

void allFileToLowerCase(string filename); // DONE - Yusuf Badr
//____________________________________________________________________________________________

void allFileToFirstCaps(string filename); //DONE - Yusuf Badr
//____________________________________________________________________________________________

void saveFile(string originalFileName, string tempOriginalFileName); //DONE - Yusuf Badr
//____________________________________________________________________________________________

void createOriginalFile(string fileName); // Done.
//____________________________________________________________________________________________

void clearScreen(); //Done.
//____________________________________________________________________________________________

bool isClearScreen(); // Done - Mohamed Eladwy.
//____________________________________________________________________________________________

string createTempOfOriginalFile(string originalFileName); // returns name of temp filename
//____________________________________________________________________________________________