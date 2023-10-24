// // Represntation of characater array 
// // char ch[20]=


// #include<iostream>
// using namespace std;
// bool checkpalindrom(char c[] ,int n){
//     int s=0;
//     int e=n-1; 
//     while(s<e){
//         if(c[e]!=c[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }

// void reverse(char c[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<e){
//         swap(c[s++],c[e--]);
//     }
// }

// int getLength(char name[]){
//     int count =0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }

// int main()
// {
//     char name[20];
//     cout<<"enter your name "<<endl; // if we take input Prajjwal Maurya like this in char array its always
//     // give Prajjwal between charactor array yo cant use (/ tab ,/n,-dash )
    
//     cin>>name;
//     // name[2]='\0'; // ya second index per null characteor store karega jisse string break ho jayegi is case me Pr ouput hoga 

//     cout<<"Your name is "<<name<<endl;
//     int ln= getLength(name);
//     cout<<ln<<endl;
//     cout<<checkpalindrom(name,ln)<<endl;
//    return 0;
// }


// **** --- //A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and 
//removing all non-alphanumeric characters, it reads the same forward and backward.
// Alphanumeric characters include letters and numbers.
//Given a string s, return true if it is a palindrome, or false otherwise.

#include<iostream>
using namespace std;
bool validcharac(char ch){
    if((ch>>'a'&& ch<<'z')||(ch>>'A'&&ch<<'Z')||(ch>>0&&ch<<9)){
        return 1;
    }
    return 0;
}
char tolowercase(char ch){
    if((ch>>'a'&&ch<<'z')||(ch>>'0'&&ch<<'9')){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool checkpalindrom(string a){
    int s=0;
    int e=a.size()-1;
    while(s<e){
        if(a[s]!= a[e]){
            return 0;
        }
        else{
        s++;
        e++;
        }
    }
    return 1;
}

bool ispalindrom(string a){
    string temp="";
    for(int j=0;j<a.size();j++){
        if(validcharac(a[j])){
            temp.push_back(a[j]);
        }
    }
    for(int j=0;j<temp.size();j++){
        temp[j]=tolowercase(temp[j]);
    }
    return checkpalindrom(temp);
}
 
int main()
{
    string str=


   return 0;
}

