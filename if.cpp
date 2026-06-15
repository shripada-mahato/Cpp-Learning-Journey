#include <iostream>
using namespace std;

int main(){

    int age;
    cout << "enter your age:- ";
    cin >> age;

    if(age >= 18){
        cout << "Eligible for Voting";
    }else{
        cout << "Not Eligible Voting";
    }

    return 0;
}