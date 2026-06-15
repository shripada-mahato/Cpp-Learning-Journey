#include<iostream>
using namespace std;
int main(){
    enum trafficlight{
        RED ,
        GREEN,
        BLUE
    };
    string num;
    cout << "Enter the number (0,1,2):- ";
    cin >> num;
    enum trafficlight signal;

    switch(signal){
        case RED: 
        cout << "STOP";
            break;
        case GREEN: 
        cout << "READY";
            break;
        case BLUE: 
        cout << "GO";
            break;
        default:
        cout << "You Enter Invalid Number";
    };
}