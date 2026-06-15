#include<iostream>
using namespace std;

int main(){
    const int serial_no = 1;
    const string st_name = "Rahul Mandal";
    const float marks = 75.50;
    const char grade = 'A';
    const bool status = true;

    cout <<"Sl No: "<< serial_no<<"\n";
    cout <<"student_name: "<< st_name <<"\n";
    cout <<"Marks: "<<marks <<"\n";
    cout <<"Grade: "<<grade <<"\n";
    cout <<"Passing Status: "<<status;

    return 0;
}