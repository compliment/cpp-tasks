#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[10];
    int n,i,s=0;
    cout<<"Enter any string\n";
    cin>>x;
    n=strlen(x);
    for(i=0;i<n;++i)
    {
        if((x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')||(x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U'))
        {
            s=s+1;
       }
    }
    cout<<s;
    return 0;
}
