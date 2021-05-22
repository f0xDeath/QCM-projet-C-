#include "qcm.h"
#include<iostream>
#include<string.h>
using namespace std;

int qcm::checkAnswers()
{
	int i;
	for (i = 0;i < 10;i++)
	{
		if (answers_user[i] == answers[i])
			score++;
	}
	return score;
}
void qcm::afficheScore()
{
	cout << "Votre score est:\t" << score << endl;
	cout << "MADE BY hamza mourafi,rim ourrak,fatima zahra ouffkir et marwa maarouf ";
}
void qcm::afficheQcm()
{
	int i;
	for (i = 0;i < 3;i++)
	{
		cout <<qust[i]<<"\n";
		cout <<"1-"<< choix1[i] << "\n";
		cout <<"2-"<< choix2[i] << "\n";
		cout <<"3-"<<choix3[i] << "\n";
		cout << "Entrez le numéro de votre reponse:\n";
		cin >> answers_user[i];
	}
}