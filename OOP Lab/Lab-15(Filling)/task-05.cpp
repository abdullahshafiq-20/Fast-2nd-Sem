#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream file("task-05.txt",ios::in);
    string line;
    int counter;
    while(getline(file,line))
    {
        if(line[0]=='A'|| line[0]=='a')
        {
            counter++;
            cout<<line<<endl;
        }
    }
    cout<<"Total Number of lines straing with A is: "<<counter;
}