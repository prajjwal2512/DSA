#include<iostream>
using namespace std;
bool checkpalindrome(string &name,int s,int e){
    if(s>e){
        return true;
    }
    if(name[s]!=name[e]){
        return false;
    }
    else{
        return checkpalindrome(name,++s,--e);
    }

}
int main()
{
    string str="aabaa";
    cout<<endl;
    bool ispalindrome = checkpalindrome(str,0,str.length()-1);
    if(ispalindrome){
        cout<<"Str is palindrome"<<endl;
    }
    else{
        cout<<"Str is not palindrome"<<endl;

    }  
   return 0;
}