#include<iostream>
#include<stdio.h>
#include <string.h>
using namespace std;

int main()
{
	char str[80];
	int i=0, len, j,sum=0;
	cout<<"Enter the String : ";
	gets(str);
	len=strlen(str);
	for(i=0; i<len; i++)
	{
		if(str[i]==' ')
		{
			sum=sum+1;
		}
	}
	cout<<"Number of spaces = "<<sum<<"LEN:  "<<len;
	return 0;
}
