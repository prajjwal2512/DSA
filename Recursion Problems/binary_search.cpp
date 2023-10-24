#include<iostream>
using namespace std;
bool binarysearch(int arr[],int s,int e,int key){
    // int s=0;
    // int e=size-1;
    if(s>e){
        return 0;
    } // element is not found 
    int mid=s+(e-s)/2;
    if(arr[mid]==key){
        return true;
    } //  element is found 
    if(key<arr[mid]){
        return binarysearch(arr,s,mid-1,key);
    }
    else{
        // s=mid+1;
        // mid=s+(e-s)/2;
        // size=mid;
        return binarysearch(arr,mid+1,e,key);
    }
}
int main()
{
    int arr[5]={2,3,5,6,7};
    int size=5;
    int key=6;
    bool ans=binarysearch(arr,0,5,key);
    cout<<ans<<endl;
    if(ans){
        cout<<"Elemennt is exist"<<endl;
    }
    else{
        cout<<"Elemennt is not exist"<<endl;
    }
   return 0;
}