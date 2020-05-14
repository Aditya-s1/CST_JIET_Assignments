#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c,count=0;
    cout<<"Input A:";
    cin>>a;
    cout<<"\nInput B:";
    cin>>b;
    cout<<"\nInput C:";
    cin>>c;
    for(i=1;i<=a;i++)
    {
        if(i%b==0 && i%c==0)
        {
            count++;
        }
    }
    cout<<"Special integer is:"<<count<<endl;
}