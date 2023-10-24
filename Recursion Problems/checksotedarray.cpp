// //------>>>>> check
// #include<iostream>
// using namespace std;
// bool isshorted(int arr[],int size){
//     if(size==0 || size==1){
//         return true;
//     }
//     if(arr[0]>arr[1]){
//         return false;
//     }
//     else{
//     bool remainingpart=isshorted(arr+1,size-1); // har jagah bool hi use karenge bhai 
//     return remainingpart;
//     }
// }
// int main()
// {
//     int arr[5]={2,5,1,4,6};
//     int size=5;
//     bool ans=isshorted(arr,size); // ye bhi hai important
//     if(ans){ // important for bool operator last me define karna hota hai bhai
//         cout<<"Array is shorted"<<endl;
//     }
//     else{
//         cout<<"Array is not  shorted"<<endl;
//     }
//    return 0;
// }

// // ----->>>> sum of all element in array;

// #include<iostream>
// using namespace std;
// int sumarray(int arr[],int size){
//     if(size==0){ //base case
//         return 0;
//     }
//     if(size==1){ //base case
//         return arr[0];
//     }
//     int remainingpart=sumarray(arr+1,size-1);
//     int sum=arr[0]+remainingpart;
//     return sum;
// }
// int main()
// {
//     int arr[5]={4,2,1,5,6};
//     int size=5;
//     int sum=sumarray(arr,size);
//     cout<<sum;
//    return 0;
// }


// ---->>> Binary search using recursion

#include<iostream>
using namespace std;
// void print(int arr[],int size){
//     cout<<"size of array is"<<" "<<size<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }cout<<endl;
// }   
bool found(int arr[],int size,int key){
    // print(arr,size); // meko procedure print karana hai 
    if(size==0){ //base case
        return 0; // return false 
    }
    if(arr[0]==key){ //base case
        return true;
    }
    else{
    // bool remainingpart=found(arr+1,size-1,key);
    // return remainingpart;
    return found(arr+1,size-1,key); // memory space
    }
}
int main()
{
    int arr[5]={4,2,1,5,6};
    int size=5;
    int key;
    cin>>key;
    bool ans=found(arr,size,key);
    if(ans){ // important for bool operator last me define karna hota hai bhai
        cout<<"key is found"<<endl;
    }
    else{
        cout<<"Key is not found"<<endl;
    }
    //cin>>"Enter the value of key">>key>>endl; 
   return 0;
}