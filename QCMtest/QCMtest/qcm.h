#include<iostream>
#include<string.h>
using namespace std;
class qcm
{
	int answers[10] = { 3,3,2,3 };
	int score = 0;
	int answers_user[3];
	string qust[5] = { "Que contient une classe en C++?" ,"Combien de spécificateurs d'accées existe?" ," ___ est utilisé pour définir un membre d'une classe extérieurement?","Quel opérateur, un objet pointeur d’une classe utilise pour accéder à ses membres de données et à ses fonctions membres?","Lequel est une déclaration de classe valide?" };
	string choix1[5] = { "Donnees","1","#"," ::","public classe A {}" };
	string choix2[5] = { "Fonctions","2","::",".","classe A {}" };
	string choix3[5] = { "Les données et les fonctions","3","!! $" ,"->","classe A {int x;};"};
	
public:
	void afficheQcm();
	int checkAnswers();
	void afficheScore();







};

