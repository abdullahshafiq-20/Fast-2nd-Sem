#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    string data;
    cout<<"Enter some data: "<<endl;
    getline(cin,data);

    ofstream data_in("Task-02.txt",ios::out);
    data_in<<data<<endl;
    if(data_in)
    {
        cout<<"Data Saved Succesfully to file 1 "<<endl;
    }
    data_in.close();
    ifstream data_file1("Task-02.txt",ios::in);
    string file1;
    getline(data_file1,file1);
    cout<<"Data from File 1: "<<file1<<endl;
    data_file1.close();

    ofstream data_out("Task-02(A).txt",ios::out);
    data_out<<file1;
    data_out.close();
    ifstream data_file2("Task-02(A).txt",ios::in);
    string file2;
    getline(data_file2,file2);
    cout<<"Data from File 2: "<<file2<<endl;
    data_file1.close();

    


}