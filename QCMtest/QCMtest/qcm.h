#include<iostream>
#include<string.h>
using namespace std;
class qcm
{
	int answers[10] = { 3,3,2,3 };
	int score = 0;
	int answers_user[3];
	string qust[5] = { "Que contient une classe en C++?" ,"Combien de sp�cificateurs d'acc�es existe?" ," ___ est utilis� pour d�finir un membre d'une classe ext�rieurement?","Quel op�rateur, un objet pointeur d�une classe utilise pour acc�der � ses membres de donn�es et � ses fonctions membres?","Lequel est une d�claration de classe valide?" };
	string choix1[5] = { "Donnees","1","#"," ::","public classe A {}" };
	string choix2[5] = { "Fonctions","2","::",".","classe A {}" };
	string choix3[5] = { "Les donn�es et les fonctions","3","!! $" ,"->","classe A {int x;};"};
	
public:
	void afficheQcm();
	int checkAnswers();
	void afficheScore();







};

