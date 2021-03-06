// JUMANJI: A simple adventure game that follows the layout and style of "Lost Fortune"


#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const string GAME = "Jumanji";
	const int DETENTIONERS = 4;
	int killed, attackers, survivors;
	string player;

	//Receive the required inputs
	cout << "Welcome to " << GAME << "\n\n";
	cout << "Please enter the following for your personalized adventure\n";

	cout << "Enter a number: ";
	cin >> killed;

	cout << "Enter a number, larger than the first: ";
	cin >> attackers;

	survivors = attackers - killed;

	cout << "Enter your name: ";
	cin >> player;

	//Story
	cout << "\n\nOne Saturday afternoon, " << DETENTIONERS << " kids were scheduled to have detention at UAT High.";
	cout << "\nWhile cleaning out the school basement as their punishment, they kids stumbled upon an old game named, " << GAME << ".";
	cout << "\nAs the kids started the game, thery were sucked into the TV to play the very characters they had chosen.";
	cout << "\nThey had become, part of the game!";
	cout << "\nThe only way for the " << DETENTIONERS << " kids to get out of the game, is to finish playing it.";
	cout << "\nWhile there were, " << DETENTIONERS << " that were sucked into the game, there could only be one leader.";
	cout << "\nThe obvious choice for this role is " << player << ".";
	cout << "\nStuck in the jungle of " << GAME << ", the kids must take caution as each turn could possibly be their last!";
	cout << "\nBefore they could say another word, they were surrounded by " << attackers << " attackers!";
	cout << "\nThey fought and fought but were only able to slay " << killed << " of them.";
	cout << "\nThe remaining " << survivors << " took the kids back to camp for a celebration of their capture.";
	cout << "\nWill they make it out alive?";
	cout << "\nWatch " << GAME << "(2017) to find out!";

	return 0;
}