#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter String:"<<endl;
    getline(cin, str);
    ofstream f_in("task-01.txt",ios::out);
    f_in<<str<<endl;
    f_in.close();
    ifstream f_out("Task-01.txt",ios::in);
    string str_out;
    getline(f_out, str_out);
    int count = str_out.length();
    cout<<"Number of Characters: "<<count<<endl;
    cout<<"Stored text in file is: "<<str_out<<endl;
    f_out.close();

}