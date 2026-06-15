
#include <iostream>
#include <string>

using namespace std;

int main(){
    int time;
    cout << "Enter the Time: ";
    cin >> time;

    string message = (time < 9) ? "Good Mornings"
    : (time >=9) ? "Afternoon" 
    : "Evening";
    cout << message;

    return 0;
}