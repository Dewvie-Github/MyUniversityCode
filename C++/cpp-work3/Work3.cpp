//Pass or Fail Program by using 3 Quizz(average = 10 pt), midterm (40 pt), Final (50pt)
#include<iostream>
using namespace std;
int main(){
    float Quiz1, Quiz2, Quiz3, QuizTotal,MidtermScore, FinalScore, TotalScore;
    cout << ("\n=================QUIZZES======================");
    cout << ("\nEnter first quizz (10) :");                         //input Quiz1
        cin >> (Quiz1);
    cout << ("Enter second quizz (10) :");                          //input Quiz2
        cin >> (Quiz2);
    cout << ("Enter third quizz (10) :");                           //input Quiz3
        cin >> (Quiz3);
    cout << ("\n==================MID-TERM=====================");
    cout << ("\nEnter mid-term (40):");
        cin >> (MidtermScore);                                      //input Midterm
    cout << ("\n==================FINAL=====================");
    cout << ("\nEnter final (50):");
        cin >> (FinalScore);      //input Final score
    QuizTotal = (Quiz1+Quiz2+Quiz3)/3;        //Calculate Quiz average to TotalScore

    //output
    cout << ("Quizz Total : ") << (QuizTotal);
    cout << ("\nMid Term : ") << (MidtermScore);
    cout << ("\nFinal : ") << (FinalScore);
        TotalScore = QuizTotal+MidtermScore+FinalScore;  //Calculate TotalScore;
    cout << ("\nTotal : ") << (TotalScore) << ("\n");
    cout << (TotalScore >= 50 ? Your score is PASS : Your score is FAIL);       //Tenary Operator(True : False)
    system ("pause");
    return 0;
}
