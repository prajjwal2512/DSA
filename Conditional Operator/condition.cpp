#include<iostream>
using namespace std;
// Determine three numbers are maximummm

int main()
{
    int a,b,c;
    cout<<"Enter the three numbers"<<endl;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }
}

