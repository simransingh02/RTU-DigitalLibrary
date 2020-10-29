#include<iostream>
using namespace std;
class bankaccount
{
	char name[10];
	int accno;
	float balance;
	char accType[20];
	char dateofbirth;
	public:
		//constructor
	bankaccount()
	{
	cin>>accno;
	cin>>name;
	cin>>accType;
	cin>>dateofbirth;
	cin>>balance;	
		}	
void deposit();
void withdraw();
void display();
};
void bankaccount::deposit()
{
float a;
cout<<"deposit:";
cout<<"enter amount to deposit:";
cin>>a;
balance+=a;
	}
	void bankaccount::withdraw()
	{
	float amount;
	cout<<"withdraw:";
	cout<<"enter amount to withdraw:";
	cin>>amount;
	balance-=amount;	
	}
	void bankaccount::display()
	{
	cout<<"account details is:";
	cout<<"name of depositer:"<<name<<endl;
	cout<<"account no.:"<<accno<<endl;
	cout<<"account type:"<<accType<<endl;
	cout<<"balance:"<<balance<<endl;
	cout<<"dateofbirth:"<<dateofbirth<<endl;	
	}
	int main()
	{
	bankaccount acc;
	acc.deposit();
	acc.display();
	acc.withdraw();
	acc.display();	
	}
