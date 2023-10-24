// when a function call itself is called recursion 

// #include<iostream>
// using namespace std;

// int sum(int n){

//     if(n==0)
//     {
//         return 0;
//     }
//     int prevsum = sum(n-1);
//     return n + prevsum;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<sum(n);
//     return 0;  
// }

// //** Calculate n raised to power of p;

// #include<iostream>
// using namespace std;

// int pow(int n, int p){
//     if(p==0){  // base case 
//         return 1;
//     }
//     int prevpow = pow(n,p-1);
//     return n*prevpow;
// }
// int main()
// {
//     int n,p;
//     cin>>n>>p;
//     cout<<pow(n,p);
//    return 0;
// }


// //** Factorial of n 

// #include<iostream>
// using namespace std;

// int fact (int n){
    
//     if(n==0){
//         return 1; // Because factorial of 0 is equal to 1
//     }
//    // int prevfact= fact(n-1);
//    // return n*prevfact;
//     return n*fact(n-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fact(n)<<endl;
//    return 0;
// }


// ------->>>>>>>>> fibonaaci number 

// #include<iostream>
// using namespace std;
// int fib(int n){

//     if(n==0 ||n==1)  {
//         return n;
//     }

//     // int prevfib(n)=fib(n-1)+fib(n-2);
//     // return prevfib(n)+fib(n);
//     return fib(n-1)+fib(n-2);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fib(n)<<endl;
//    return 0;
// }



// //** Check a array is short or not using recursion 
// // If condition is yes or o then take return type bool

// #include<iostream>
// using namespace std;
// bool sorted(int arr[] ,int n){

//     if(n==1){
//         return 1;
//     }

//     bool restarray=sorted(arr +1,n-1);
// // if(arr[0]<arr[1]&& restarray){
// //     return 0;
// // }
//     return(arr[0]<arr[1]&& restarray);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     // int arr[]={1,2,4,6};
//     cout<<sorted(arr,4)<<endl;
//    return 0;
// }


// // ** Print number till n decreasing as well as increasing order

// #include<iostream>
// using namespace std;

// void dec(int n){
//     if(n==0){
//         return;
//     }

//     // cout<<n<<endl;
//     dec(n-1);
//     cout<<n<<endl;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     dec(n);
//    return 0;
// }
 
// // //** Find he first and last occurance of a number in an array
// // // {4,2,1,2,5,2,7}

// #include<iostream>
// using namespace std;
// int firstoccu(int arr[], int n ,int i,int key){

//     if(i==n){
//         return -1;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return firstoccu(arr,n,i+1,key);
// }

// int lastoccu(int arr[],int n,int i,int key){
//     if(i==n){
//         return -1;
//     }

//     int restarray=lastoccu(arr,n,i+1,key);
//     if(restarray!=-1){
//         return restarray;
//     }
//     if(arr[i]==key){
//         return i;
//     }  
//     return lastoccu(arr,n,i+1,key);
// }
// int main()
// {
//     int arr[]={4,2,1,2,5,2,7};
//     cout<<firstoccu(arr,7,0,1)<<" "<<lastoccu(arr,7,0,7);
//     // cout<<lastoccu(arr,7,0,5);
//    return 0;
// }

// ese hi majak tha 
#include<bits/stdc++.h>
using namespace std;
void reachhome(int src,int dist){
    cout<<src<<" "<<"distination"<< " "<< dist<< endl;
    if(src==dist){
        cout<<"Pahunch gaye"<<endl;
        return;
    }//ek step aage badhao 
    src++;
    reachhome(src,dist); 
}
int main()
{
    int src=0;
    int dist=10;
    reachhome(src,dist);
   return 0;
}


