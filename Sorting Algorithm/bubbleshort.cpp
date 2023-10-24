#include<iostream>
using namespace std;
void shortarray(int arr[],int n){
    if(n==1||n==0){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        } 
    }
    shortarray(arr,n-1);
}
int main()
{
    int arr[4]={4,1,3,2};
    // int ans=
    shortarray(arr,4);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    // cout<<ans<<endl;
   return 0;
}