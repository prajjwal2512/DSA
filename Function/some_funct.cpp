// macro -- a piece of code in a program that is 
// replace by value of macro 

// #include<iostream>
// using namespace std;

// #define PI 3.14  // ye hai macro jo space nhi lega 
// // aur esme kuch changes bhi nahi akr sakte 
// // jaise PI=PI+1 like that 

// int main()
// {
//     int r=5;
//     // double pi =3.14;
//     // double area = pi*r*r;
//     double area = PI*r*r;
//     cout<<"Area is " << area <<endl;
//    return 0;
// }
// C program to illustrate macros
// #include <stdio.h>
 
// // Function-like Macro definition
// #define min(a, b) (((a) < (b)) ? (a) : (b))
 
// // Driver Code
// int main()
// {
 
//     // Given two number a and b
//     int a = 18;
//     int b = 76;
 
//     printf("Minimum value between"
//            " %d and %d is %d\n",
//            a, b, min(a, b));
 
//     return 0;
// }


// Global variable ----->>>>>>
// global variable ek esa case hai jisko hmm 
// kahi bhi use kar sakte hai means accesible hai 

// #include<iostream>
// using namespace std;

// int score =15;
// void a(int& i){
//    char ch = 'a';
//    cout<<i<<endl;
// //    b(i);
// }
// void b(int &i){
//    cout<<i<<endl;

// }
// int main()
// {
//    int i =5;
//    {
//       int i=2;
//       cout<<i*score<<endl; // basically global variable ko kahhi se bhi access kiya ja sakta hai
//       // why we should not use global varibale because anyone can change
//    }
//    cout<<i<<endl;
//    return 0;
// }

// Inline function ------......>>>>>
//  are used to function call overhead
// function call replace ho jata hai function ki body ke sath


// #include<iostream>
// using namespace std;

// // void function(int a,int b){
// //    a++;
// //    b++;
// //    cout<<a<<" "<<b<<endl;
// // }   

// int getmax(int a,int b){
//    return (a>b) ? a:b;
//    // return ans;
// }
// int main(){
//    int a=15,b=13,ans=0 ;
//    // function(a,b);

//    // if(a>b){
//    //    ans=a;
//    // }
//    // else{
//    //    ans=b;
//    // }
//    // // second method to reprenstation 
//    // ans=(a>b) ? a:b;
//    // //a>b achha agar tik to ans a nahi to b yahi meaning hai 
//    // cout<< ans ;
//    // // to hame bar bar ye likhana padega uske liye 
//    // // ek function bana lenge 
//    ans=getmax(a,b);
//    cout<<ans<<endl;

//    return 0;
// }


/// DEFAULT ARGUMENT 
// its means argument optional hai koi dega to sahi
// nahi dega to bhi sahi 

#include<iostream>
using namespace std;

void print(int arr[],int n, int start=0){
   for(int i=start;i<n;i++ ){
      cout<<arr[i]<<endl;
   }
}
int main()
{;
   int arr[5]={1,2,4,3,8};
   int size=5;
   print(arr,size); // due to default argument its show no erro
   cout<<endl;
   print(arr,size ,2);
   return 0;
}