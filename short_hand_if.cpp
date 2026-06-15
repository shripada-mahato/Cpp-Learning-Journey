
#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string name;
    cout << "Enter your name: ";
    cin >> name;

    cout << ((name == "shripada") ? "Correct" : "Incorrect");

    return 0;
}