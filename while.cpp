#include<iostream>
using namespace std;

int main(){
    int no1;
    cout << "Enter the starting no:- ";
    cin >> no1;
    int no2;
    cout << "Enter the ending no:- ";
    cin >> no2;

    while(no1 < no2){
        cout << no1 << "\n";
        no1++;
    }

    return 0;

}