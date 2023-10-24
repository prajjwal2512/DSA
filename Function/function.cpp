// // ##Write the programe print all prime number between two number 

#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int num){
   for(int i=2;i<=sqrt(num);i++){
      if(num%i==0){
         return false;
      }
   }
   return true;
}

int main()
{
   int a,b;
   cin>>a>>b;
   int count =0;
   int ans;
   for(int i=a;i<=b;i++){
      if(isprime(i)){
        ans=count;
        count++;
      }
   }
   cout<<ans<<endl;
   return 0;
}

//##Write the programe print fibenacci sequence of a number;

// #include<iostream>
// using namespace std;
// void fib(int n){
//    int t1=0;
//    int t2=1;
//    int nextterm;
//    for(int i=1;i<=n;i++){
//       cout<<t1<<endl;
//       nextterm=t1+t2;
//       t1=t2;
//       t2=nextterm;
//    }
//    return;
// }
// int main()
// {
//    int n;
//    cin>>n;
//    fib(n);
//    return 0;
// }

// // ##Write the programe print factorial of a number;
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//    return 0;
// }

// // ** Write the factorial of the function ..
// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact; // defination of factorial...
// }

//  int nCr(int n,int r){

//     int numo=factorial(n); // call the function  
//     int denomi= factorial(r)*factorial(n-r);

//     return numo/denomi;
//  }
// int main()
// {

//     int n,r;
//     cin>>n>>r;

//     cout<<"The factorial of "<< n<<"C"<<r << " is "<< nCr(n,r) <<endl;
//    return 0;
// }

// // ***  Function is prime or not ...

// #include<iostream>
// using namespace std;
//  // 1= prime number 
//  // 0= not prime number 
// bool isprime(int n){
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0){
//             return 0; //cout<<"Not prime number"; not correct in booliean case
//         }

//     }
//     return 1;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     // cout<<isprime(n)<<endl; -- not a correct way 

//     if(isprime(n)){
//         cout<<"is a prime number"<<endl; // argument jaise function me paas hua hai waise hi ouput likhe
//     }
//     else{
//         cout<<" not prime number"<<endl;
//     }
//    return 0;
// }


