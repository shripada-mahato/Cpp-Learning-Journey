#include<iostream>
using namespace std;

int main(){

    int num = 10;
   string name = "shripada";
   string* addressofname = &name;

   *addressofname = "haripada";

   cout << addressofname << "\n";
   cout << *addressofname<<"\n";
   cout << sizeof(num);


    return 0;
}