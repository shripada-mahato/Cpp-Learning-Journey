#include<iostream>
using namespace std;

int main(){
    int age;
    cout << " Enter your age:- ";
    cin >> age;
    if(age > 18){
        cout << "You are Eligible " <<"\n";
    }else{
        cout << "You are Not-Eligible" << "\n";
    }

    return 0;
}