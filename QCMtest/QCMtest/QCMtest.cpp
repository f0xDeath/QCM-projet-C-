#include "loginManager.h"
#include<iostream>
#include<string.h>
#include "qcm.h"
using namespace std;




int main()
{
    loginManager attempt;
    attempt.login();
    qcm q;
    cout << "***************************QCM--C++***************************\n";
    q.afficheQcm();
    q.checkAnswers();
    q.afficheScore();


}