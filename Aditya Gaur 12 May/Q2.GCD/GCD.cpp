#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,gcd,len;
    cout<<"Input A:";
    cin>>a;
    cout<<"\nInput B:";
    cin>>b;
    if(a<=b)
    {
        len=a;
    }
    else
    {
        len=b;
    }
    if(a==1 && b==1)
    {
        gcd=1;
    }
    else
    {
        for(i=len; i>=1; i--)
        {
            if(a%1==0 && b%i==0)
            {
                gcd=i;
                break;
            }
        }
    }
    cout<<"GCD of given number is:"<<gcd<<endl;
}    