// *** sieve of eratpsthenes to check prime number 

// starting me sabko prime mark kar do 
// aur jo jo table me aayega usko non prime mark kar do 

// class Solution {
// public:
//     int countPrimes(int n) {
//         vector<bool> prime(n+1,true);
//         int cnt=0;
//         prime[0]=prime[1]=false;
//         for(int i=2;i<n;i++){
//             if(prime[i]){
//                 cnt++;
//         for(int j=2*i;j<n;j=i+j){
//             prime[j]=0;
//           }
//         }
//       }
//       return cnt;
//     }
// };

// ** Euclids algorithm to determine hcf of two number 


// #include<iostream>
// using namespace std;

// int gcd(int a,int b){
// if(a==0){
//     return b;
// }
// if(b==0){
//     return a;
// }

// while(a!= b){
//     if(a>b){
//         a=a-b;
//     }
//     else{
//         b=b-a;
//     }
// }
//  return a;
// }

// int main()
// {
//     int a,b;
//     cout<<"Enter the two number a and b"<<a<<b<<endl;
//     cin>>a>>b;
//     cout<<gcd(a,b);
//    return 0;
// }


// ** Modular airthmetics 
// (a+b)%m= a%m +b%m;
// a%m-b%m=(a-b)%m;
// a%m *b%m = (a*b)%m;

// // Fast exponentiaon ..
// // you have three number a,b,c then you has to (a^b)%m
// #include <bits/stdc++.h> 
// #include <bits/stdc++.h> 
// int modularExponentiation(int x, int n, int m) {
// 	int res =1;
// 	while(n!=0){
//         if (n & 1) { // for odd;
//             res = (1LL*(res) * (x) % m) % m;
//           }
//         x=(1LL*(x)%m*(x)%m)%m;
// 		n=n>>1;
// 	}
// 	return res;
// }


 