#include <iostream>
#include <string>
#include "Trophy.h"

using namespace std;

// Declare function prototypes
void DisplayMenu();
void DisplayWelcomeMessage();
void DisplayGoodbyeMessage();
void ExitApplication();
string GetString(string);
int GetShiftValue(string);
void AddNewTrophy();
void CopyTrophy();
void DeleteTrophy();
void RenameTrophy();
void ChangeLevelTrophy();
void ChangeColorTrophy();
void PrintTrophies();
void PrintMenu();
 
Trophy Trophies[];

// Entry point for the application
int main()
{
	
	int inputFromUser; // Initialize variable to hold user input
	DisplayWelcomeMessage(); // Show the welcome message

	// Main loop of the application
	do
	{
		inputFromUser = 0;
		PrintMenu();	// Display the menu

		cin >> inputFromUser; // Get input from the user

		switch (inputFromUser)
		{
		case 1:
			AddNewTrophy(); // User chooses to add a trophy
			break;
		case 2:
			CopyTrophy(); // User chooses to copy a trophy
			break;
		case 3:
			DeleteTrophy(); // User chooses to delete a trophy
			break;
		case 4:
			RenameTrophy(); // User chooses to rename a trophy
			break;
		case 5:
			ChangeLevelTrophy(); // User chooses to change the level of a trophy
			break;
		case 6:
			ChangeColorTrophy(); // User chooses to change the color of a trophy
			break;
		case 7:
			PrintTrophies(); // User chooses to print all of the trophies
			break;
		case 8:
			ExitApplication(); // User chooses to exit application
			break;
		}

	} while (inputFromUser != 8);

	return 0;
}
// This function displays the welcome message
void DisplayWelcomeMessage()
{
	cout << "Welcome to the Trophy application! With this application" << endl
		<< "you can manage Trophies! To do this" << endl
		<< "select one the options from the menu." << endl << endl;
}

// This function displays the main menu
void PrintMenu()
{
	cout << "********************************************************************************" << endl
		<< "* Please select an option:" << endl
		<< "* 1 - Add a new Trophy" << endl
		<< "* 2 - Copy a Trophey" << endl
		<< "* 3 - Delete a Trophy" << endl
		<< "* 3 - Rename a Trophy" << endl
		<< "* 3 - Change the level of a Trophy" << endl
		<< "* 3 - Change the color of a Trophy" << endl
		<< "* 3 - Print all the Trophies" << endl
		<< "* 4 - Exit the program" << endl
		<< "********************************************************************************" << endl;
}
// This function displays the goodbye message
void DisplayGoodbyeMessage()
{
	cout << "Thanks for using our application." << endl
		<< "Please hit ENTER to exit" << endl;
}
// This function exits the application
void ExitApplication()
{
	DisplayGoodbyeMessage();
	int userInput; // Variable to hold user input
	cin >> userInput; // Get input from user
	exit(0); // Exit application
}

// Get an integer value from the user
int GetShiftValue(string message)
{
	int userInput; // Declare variable to hold input from the user
	do
	{
		cout << endl << message << endl; // Display prompt to the user
		cin >> userInput; // Get input from user
	} while (userInput < 1 || userInput > 25); // Check to be sure the user enters valid integers

	return userInput;
}
// Gets a string of characters from the user
string GetString(string message)
{
	string userInput;
	cout << endl << message << endl; // Display prompt to the user
	cin.clear(); // clear cin buffer
	cin.ignore();// clear cin buffer
	getline(cin, userInput); // get input from user
	return userInput;
}
void AddNewTrophy()
{
	string trophyName = GetString("Please enter the trophy's name: ");
	int trophyLevel = GetShiftValue("Please enter the trophy's level: ");
	Color trophyColor;
	string tempColor = "";
	do 
	{
		string tempColor = GetString("Please enter the trophy's color (case sensitive): ");
	} 
	while (!CheckSuitableString(tempColor));
	if (tempColor == "GOLD") 
	{
		trophyColor = GOLD;
	}
	else if (tempColor == "BRONZE")
	{
		trophyColor = BRONZE;
	}
	else if (tempColor == "SILVER")
	{
		trophyColor = SILVER;
	}
	
	Trophy* newTrophy = new Trophy(trophyName, trophyLevel, trophyColor);

}
void CopyTrophy()
{

}
void DeleteTrophy()
{

}
void RenameTrophy()
{

}
void ChangeLevelTrophy()
{

}
void ChangeColorTrophy()
{

}
void PrintTrophies()
{
	
}
bool CheckSuitableString(string tempString)
{
	if (tempString != "GOLD" && tempString != "SILVER" && tempString != "BRONZE")
	{
		return false;
	}
	else 
	{
		return true;
	}
}














