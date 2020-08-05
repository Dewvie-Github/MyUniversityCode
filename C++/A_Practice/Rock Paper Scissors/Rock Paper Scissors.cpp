#include<iostream>
#include<string>
using namespace std;
int rps(string , string);
int main(){
    string paper = "paper";
    string rock = "rock";
    string scissors = "scissors";
    string s1,s2;   //s1 = player1 s2 = player2
    cout << "enter player 1 : " << rps(s1,s2);

    int rps(string s1, string s2){
                    if (s1 == paper){
            if (s2 == paper){
                cout << "tie";
            }
            else if (s2 == rock){
                cout << "player 1 win";
            }
            else if (s2 == scissors){
                cout << "player 2 win";
            }
        }

        if (s1 == rock)
            if (s2 == paper){
                cout << "player 2 win";
            }
            else if (s2 == rock){
                cout << "tie";
            }
            else if (s2 == scissors){
                cout << "player 1 win";
            }
        if (s1 == scissors){
            if (s2 == paper){
                cout << "player 1 win";
            }
            else if (s2 == rock){
                cout << "player 2 win";
            }
            else if (s2 == scissors){
                cout << "tie";
            }
        }
}
}
