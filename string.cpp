#include <iostream>
#include <string>
using namespace std;

int main   (){

    string name1;
    cout <<"enter your 1st name :- ";
    cin >> name1 ;
    string name2;
    cout << "enter your 2nd name :- ";
    cin >> name2;

    string fullname = name1 + " " +name2;
    cout << fullname;

    return 0;

}