#include<iostream>
using namespace std;



int main(){
    enum student{
    a = 5,
    b,
    c = 10,
    d
};
    enum student me = a;
    enum student me1 = b;
    enum student me2 = c;
    enum student me3 = d;

    cout << me << " " << me2 << " " << me2 <<" " << " "
    << me3;

    return 0;
}