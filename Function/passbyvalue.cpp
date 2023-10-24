#include<iostream>
using namespace std;

void dummy(int n){
    n++;
    cout<<"n is "<< n<< endl; //yha main ke value se ek increase hoker aayega 
}
 // two output aayega but dono n same nhi hai 
int main()
{
    int n;
    cin>>n;

    dummy(n);

    cout<<"number n is "<< n<< endl; // yha main function wala output aayega 
   return 0;
}