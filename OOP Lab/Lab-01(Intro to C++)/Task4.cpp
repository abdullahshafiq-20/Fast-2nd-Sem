#include<iostream>
using namespace std;
struct StoreHouseItem
{
	string name;
	int qnt;
};
int main()
{
	
	int num;
	int i;
	cout<<"Enter Number of DATA:";
	cin>>num;
	StoreHouseItem n[num];
	for (i=0;i<num;i++)
	{
		cout<<"Enter "<<i+1<<" Item Name:";
		cin>>n[i].name;
		cout <<"Enter "<<i+1<<" Item Qauntity:";
		cin>>n[i].qnt;
        
	}
	cout<<"Item Name\tQuantity\n";
	for (i=0;i<num;i++)
	{
		cout<<n[i].name<<"\t\t"<<n[i].qnt<<endl;
	}
}