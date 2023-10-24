#include<iostream>
using namespace std;
int powerof(int m,int n){ // loop se bacho bhai 
    if(n==0){
        return 1;
    }
    if(n==1){
        return m;
    }
    int ans=powerof(m,n/2);
    if(n%2==0){  // n is even ...
    //    int ans= pow(m,n/2);
       return ans*ans;
    }
    else{   // n is odd ...
        // int ans= pow(m,n/2);
       return m*ans*ans;

    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<powerof(a,b)<<endl;
   return 0;
}