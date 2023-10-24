#include<iostream>
using namespace std;
void revstr(string &str,int i,int j){ //void revstr(string str,int i,int j) ye paas by value ho raha hai same 
// string copy hoga uske liye paas by refrence karni hogi bhai ---
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    return revstr(str,++i,--j); // revstr(str,i++,j--);
//     swap(str[i],str[j]);
//     i++;
//     j--;
//     revstr(str,i,j);
}
int main()
{
    string name="abcde";
    // cout<<name <<endl;
    // int size=5; 
    // revstr(str,0,size-1); // str.length()-1
   revstr(name,0,name.length()-1);
    cout<<name<<endl;
   return 0;
}
