#include<iostream>
using namespace std;

struct student{
    int roll;
    string name;
};
void college(student bca){
    cout << "Roll:- "<< bca.roll <<"\n";
    cout << "Name:- "<< bca.name <<"\n";

}
int main(){
    student st1 = {55, "Shripada Mahato"};
    student st2 = {89, "Rohit Majumdar"};
    college(st1);
    college(st2);
    return 0;
}