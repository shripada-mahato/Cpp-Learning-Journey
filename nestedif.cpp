#include <iostream>
#include <string>

using namespace std;

int main(){
    int age = 21;
    float weigth = 90.10;

    if(age >= 18){
        cout << "Aged is Approved" <<"\n";
    }else{
        cout << "Aged id Denied"<<"\n";
    }
    if(weigth > 60){
        cout << "weight is Approved"<<"\n";
    }else{
        cout << "weight is Denied"<<"\n";
    }
    return 0;
}