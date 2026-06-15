#include<iostream>
using namespace std;

int main(){
    int* ptr = new int;
    cout << "enter the number:- ";
    cin >> *ptr;
    cout <<"Now Ptr value is "<< *ptr <<"\n";

    delete ptr;

    cout << *ptr << "\n";

    return 0;
}