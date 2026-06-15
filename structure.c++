#include<iostream>
using namespace std;

int main(){

    struct{
        int roll;
        string name;
        string dept;
        float marks;
        bool passing_status;
    }student;

    struct{
        string sub1 = "Computer networks";
        string sub2 = "Database";
        string sub3 = "Data Structure and Algorithm";
    } student_subject;

    student.roll = 1;
    student.name = "shripada mahato";
    student. dept = "CSE";
    student.marks = 98.5;
    student.passing_status = true;

    cout << "Detail of student " << "\n";

    cout << "Roll is - " << student.roll << "\n";
    cout << "Student Name - " << student.name << "\n";
    cout << "Department - " << student. dept << "\n";
    cout << "Student Marks is - " << student.marks << "\n";
    cout << "Result Status - " << student.passing_status <<"\n";

    cout << "Subject Choose by student " << "\n";

    cout << "Subject 1 - " << student_subject.sub1 << "\n";
    cout << "Subject 2 - " << student_subject.sub2 << "\n";
    cout << "Subject 3 - " << student_subject.sub3 << "\n";

    return 0;
}



#include<iostream>
using namespace std;

 int main(){
    struct{
        int roll;
        string name;
        
    }student;

    cout << "enter student roll:- " <<"\n";
    cin >> student.roll;
    cout << "enter student name:- " <<"\n";
    cin >> student.name;

    cout << "Name - " << student.name <<"\n";
    cout << "Name - " << student.name <<"\n";

    return 0;
}

#include<iostream>
using namespace std;

struct{
    int id;
    string role;
}employee;

void company(employee st){
    cout << "id" << employee.id<<"\n";
    cout << "role" << employee.role <<"\n"
}
int main(){
    employee me = {1,"DevOps"};
    company(me);
    return 0;
}