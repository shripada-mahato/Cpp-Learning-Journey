#include<iostream>
using namespace std;

int main(){
    string name = "pizza";
    string &meal = name;
    
    meal = "ricee";
    meal = "roti";
    cout << &meal;

    return 0;
}