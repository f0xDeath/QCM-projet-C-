#include "loginManager.h"
#include<iostream>
#include<string.h>

using namespace std;
int Choice;
void loginManager::login()
{
	cout << "*****************************Login interface*****************************\n";

	do
	{
		cout << "\tusername:  ";
		cin >> usernameAttempt;


	} while (usernameAttempt != user);
	do
	{
		cout << "\tEntrez votre mot de passe:\t";
		cin >> paswordAttempt;

	} while (paswordAttempt != pass);


}

