#include<iostream>
using namespace std;
int main()
{
	int age = 0;
	cout<<"enter your age :";
	cin>>age;
	if(age >= 18)
	{
	cout<<"\n you are eligible to vote ";	
	}
	else
	{
		cout <<"you are not eligible to vote";
	}
	return 0;
}
