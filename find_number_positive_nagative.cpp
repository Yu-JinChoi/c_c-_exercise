#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)
#include<iostream>
using namespace std;

bool realtrue(int num)
{
	if(num<=0) return false;
	else return true;
	
}

int main()
{
	bool real;
	int num;
	
	cout<<"Input number :";
	cin>>num;
	real=realtrue(num);
	
	if(real) cout<<"Positive number"<<endl;
	else cout<<"Nagative number"<<endl;
	
	return 0;
}
