#include<iostream>
using namespace std;

void saydigit(int n,string arr[] ){
    //base case
    if(n<0){
        return;
    }
    // processsing to find digit 
    int digit=n%10;
    n=n/10;
    saydigit(n,arr); 
    // call recusrsive function
    cout<<arr[digit]<<" ";
    // call recusrsive function 
    
    // saydigit(n,arr);    
}
int main()
{
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    saydigit(n,arr);
   return 0;
}