#include<iostream>
using namespace std;

int main(){

    int num = 10;
   string name = "shripada";
   string* addressofname = &name;

   *addressofname = "shripada";

   cout <<"memory address:- " << addressofname << "\n";
   cout <<"value:- "<< *addressofname <<"\n";
   cout << sizeof(num);


    return 0;
}