#include<iostream>
using namespace std;
int main()
{
                 
 
                int x,y,gcd=1;
 
                cout<<    "ENTER 1st NO  : ";
                cin>>x;
 
                cout<<"\n\nEnter 2nd NO. :";
                cin>>y;
 
                for(int i=1;i<1000;++i)
                {
                                if((x%i==0)&&(y%i==0))
                                gcd=i;
                }
 
                cout<<"\n\n\nGCD :"<<gcd;
                cout<<"\n\n\nLCM :"<<(x*y)/gcd;
 
                return 0;
}
