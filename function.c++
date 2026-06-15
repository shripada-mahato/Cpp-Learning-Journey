
// function and calling

#include<iostream>
using namespace std;

void me(string name){
   cout<<"Congratulation...!" <<name;
}
int main(){
   me(" Shripada");

    return 0;
}

//Default function and calling

#include<iostream>
using namespace std;

void me(string name="shripada"){
   cout<<name <<"\n";
}
int main(){
   me();

    return 0;
}

// multiple function and calling

#include<iostream>
using namespace std;

void student(int Sl_No, string name, int Roll, string Dept, float Marks ){
   cout<<"Sl No:-"<<Sl_No<<"Name-"<<name<<"Roll No-"<< Roll <<"Dept-"<<Dept<<"Marks-"<<Marks<<"\n";
}
int main(){
   student(1, "Shripada Mahato ", 55, "BCA ", 89.78);
    student(2, "Kamal Mahato ", 85, "BBA ", 80.8);
    return 0;
}

//return keyword

#include<iostream>
using namespace std;

int me(int x, int y){
   return 10 + x +y;
}
int main(){
   cout << me(15, 45);

    return 0;
}

//pass by reference

#include<iostream>
using namespace std;

void mynum(int &num){
   num = 10;
}
int main(){
  int num1 = 50;
  mynum(num1);
  cout << num1;

   return 0;
}