#include <iostream>
#include<string>
using namespace std;

struct Employee
{
    string organisation_name;
    string organisation_number;
};
struct Organization
{
    int employee_id;
    string name;
    int salary;
    struct Employee emp;
};
int main()
{
    Organization org;
    cout<<"Enter Name of organaization:\n";
    getline(cin,org.emp.organisation_name);
    cout<<"Enter organization Number:\n";
    getline(cin,org.emp.organisation_number);
    cout<<"Enter employee ID:\n";
    cin>>org.employee_id;
    cout<<"Enter Name:\n";
    cin>>org.name;
    cout<<"Enter Salary:\n";
    cin>>org.salary;
    cout<<"Organisation Name : "<<org.emp.organisation_name<<endl;
    cout<<"Organisation Number : "<<org.emp.organisation_number<<endl;
    cout<<"Employee id : "<<org.employee_id<<endl;
    cout<<"Employee name : "<<org.name<<endl;
    cout<<"Employee Salary : "<<org.salary<<endl;
    

}