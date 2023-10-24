#include<iostream>
using namespace std;

int main(){ 

    for(int i=1;i<=20;i++){

        if(i%3==0){
            cout<< i<<endl;//continue;
        }
        else{
            continue;//cout<< i ;
        }
    }

    return 0;
}


// //** Check a number is prime or not ;
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int i;
//     for(i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"Non prime";
//             break;
//         }
//     }
//     if(i==n){
//         cout<<"prime";
//     }
// }

// ** print the all prime number between two numbers 

// #include<iostream>
// using namespace std;

// int main(){

//     int a,b;
//     cin>>a>>b;
//     int i,j;
//     for(i=a;i<b;i++){
//         for(j=2;j<i;j++){ //break statement used to out of the loop
//             if(i%j==0){
//                 break;
//             }
//         }
//         if(i==j){
//             cout<<i<<endl;
//         }
//     }
// }