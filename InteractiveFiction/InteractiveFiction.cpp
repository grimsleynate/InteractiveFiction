// InteractiveFiction.cpp
// Nathaniel Grimsley
// November 8, 2018

//we are including the required dependencies
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

string GetTextFromUser(string prompt);
int GetNumbersFromUser(string prompt);
void tellStory(string nounPlural1, string place, string noun1, string nounPlural2,
	string noun2, string adjective1, string verb1, int number, string adjective2,
	string bodyPart, string verb2);

int main()
{
	cout << "Welcome to Interactive Fiction\n\n";
	cout << "Please choose the following to write a story.\n";

	string nounPlural1 = GetTextFromUser("Please enter a plural noun: ");
	string place = GetTextFromUser("Please enter a place: ");
	string noun1 = GetTextFromUser("Please enter a noun: ");
	string nounPlural2 = GetTextFromUser("Please enter a plural noun: ");
	string noun2 = GetTextFromUser("Please enter a noun: ");
	string adjective1 = GetTextFromUser("Please enter an adjective: ");
	string verb1 = GetTextFromUser("Please enter a verb: ");
	int number = GetNumbersFromUser("Please enter a number: ");
	string adjective2 = GetTextFromUser("Please enter an adjective: ");
	string bodyPart = GetTextFromUser("Please enter a body part: ");
	string verb2 = GetTextFromUser("Please enter a verb: ");

	tellStory(nounPlural1, place, noun1, nounPlural2, noun2, adjective1, verb1, number, adjective2, bodyPart, verb2);

	return 0;
}

string GetTextFromUser(string prompt)
{
	string text;
	cout << prompt;
	cin >> text;
	return text;
}

int GetNumbersFromUser(string prompt)
{
	int num;
	cout << prompt;
	cin >> num;
	return num;
}

void tellStory(string nounPlural1, string place, string noun1, string nounPlural2,
	string noun2, string adjective1, string verb1, int number, string adjective2,
	string bodyPart, string verb2)
{
	cout << "\nHere's your story.\n";
	cout << "Two " << nounPlural1 << ", both alike in dignity,\n";
	cout << "In fair " << place << ", where we lay our scene,\n";
	cout << "From ancient " << noun1 << " break to new mutiny,\n";
	cout << "Where civil blood makes civil hands unclean.\n";
	cout << "From forth the fatal loins of these two foes\n";
	cout << "A pair of star-cross'd " << nounPlural2 << " take their life;\n";
	cout << "Whole misadventured piteous overthrows\n";
	cout << "Do with their " << noun2 << " bury their parents' strife.\n";
	cout << "The fearful passage of their " << adjective1 << "love,\n";
	cout << "And the continuance of their parents' rage, \n";
	cout << "Which, but their children's end, nought could " << verb1 << ",\n";
	cout << "Is now the " << number << " hours' traffic of our stage;\n";
	cout << "The which if you with " << adjective2 << " " << bodyPart << "attend,\n";
	cout << "What here shall " << verb2 << ", our toil shall strive to mend.\n";
}