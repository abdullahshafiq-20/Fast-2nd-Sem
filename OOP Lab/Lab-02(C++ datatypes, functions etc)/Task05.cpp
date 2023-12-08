#include <iostream>
#include<string>
using namespace std;

struct Register
{
    int course_id;
    string cours_name;

};
struct Student
{
    string student_id;
    string first_name;
    string last_name;
    int cell_no;
    string email;
    struct Register reg;

};
int main()
{
    struct Student std[1];
    cout<<"Enter Stdent Id:";
    cin>>std->student_id;
    cout<<"Enter Fisrt Name:";
    cin>>std->first_name;
    cout<<"Enter Last Name:";
    cin>>std->last_name;
    cout<<"Enter Cell Number:";
    cin>>std->cell_no;
    cout<<"Enter Email:";
    cin>>std->email;
    cout<<"Enter Course ID:";
    cin>>std->reg.course_id;
    cout<<"Enter Course Name:";
    cin>>std->reg.cours_name;

    cout<<"Student ID : "<<std->student_id<<endl;
    cout<<"Fisrt Name : "<<std->first_name<<endl;
    cout<<"Last Name : "<<std->last_name<<endl;
    cout<<"Cell Number : "<<std->cell_no<<endl;
    cout<<"Enter Email : "<<std->email<<endl;
    cout<<"Enter Course ID : "<<std->reg.course_id<<endl;
    cout<<"Enter Course Name : "<<std->reg.cours_name<<endl;
   


}