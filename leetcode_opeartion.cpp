#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main(){

    string num1;
    cout << "enter the 1st number:- ";
    cin >> int(num1);

    string num2;
    cout << "enter the 2nd number:- ";
    cin >> int(num2);

    int multiply = num1 * num2;
    cout << "Multiplication is : " << multiply;

    return 0;
}