//Binary Calculator Copyright (C) 2019 David Badiei
#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

void inttobin();
void reverseStr(string& str);
void bintoint();
void useAgain();

int main()
{
	char userChoice;
	cout << "Welcome to Binary Calculator! Copyright (C) 2019 David Badiei \nPlease choose an option \n1.Integer to binary \n2.Binary to integer" << endl;
	cin >> userChoice;
	if (userChoice == '1')
	{
		inttobin();
	}
	else if (userChoice == '2')
	{
		bintoint();
	}
}

void inttobin()
{
	int userInput;
	int placeHolder = 0;
	string answer;
	cout << "Enter integer number: ";
	cin >> userInput;
	cout << endl;
	if (userInput == 0)
	{
		answer = "0";
		goto continueon;
	}
	while (userInput != 0)
	{	
		if (userInput % 2 == 0)
		{
			answer.push_back('0');
		}
		else if (userInput % 2 != 0)
		{
			answer.push_back('1');
		}
		userInput = userInput / 2;
	}
	continueon:
	cout << "Answer: ";
	reverseStr(answer);
	useAgain();
}

void reverseStr(string& str)
{
	for (int i = str.length() - 1; i >= 0; i--)
	{
		cout << str.at(i);
	}
}

void bintoint()
{
	string userInput;
	int answer = 0;
	int counter = 1;
	cout << "Enter binary number: ";
	cin >> userInput;
	cout << endl;
	for (int i = userInput.length() - 1; i >= 0; i--)
	{
		if (userInput.at(i) == '1')
		{
			answer = answer + counter;	
		}
		counter = counter + counter;
	}
	cout << "Answer: " << answer << endl;
	useAgain();
}

void useAgain()
{
	char userChoice = 0;
	cout << endl;
	cout << "Do you want to use this program again? 1.Yes 2.No";
	cin >> userChoice;
	if (userChoice == '1')
	{
		main();
	}
	else
	{
		exit(0);
	}
}
