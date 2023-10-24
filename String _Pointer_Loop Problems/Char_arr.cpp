#include<iostream>
using namespace std;
int main()
{
    char name[100]="apple"; //Chahe character array ka size assign karke input lo like arr[n] cin>>n, nahi to koi bada sa size le lo like arr[100,1000]
    int i=0;
    while(name[i]!= '\0') //'\0'= null character uuse as a terminator jisse meko pata lage string kaha print ho rhi hai 
    
    {
        cout<<name[i]<<endl;
        i++;
    }
   return 0;
}


// //## take input and output in characater array how to use this
// #include<iostream>
// using namespace std;
// int main()
// {
//     char arr[100];
//     cin>> arr;
//     cout<< arr[2]; //TO FIND A PERTICULER CHARACTER IN INPUT and also keep in mind index its intiate from 0
//     //cout<<arr; normal form
//    return 0;
// }

// //## check a number is palndrom or not 
// //when we read a character either a left side or a right side it's always same like NITIN;

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     char arr[n+1]; // always take n+1 in character arrays 
//     cin>>arr;
//     bool check =1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]!=arr[n-1-i])
//         {
//             check =0;
//             break;
//         }
//     }
//     if(check==true)
//     {
//         cout<<"Word is palindrome";
//     }
//     else{
//         cout<<"Word is not palindrome";

//     }
//    return 0;
// }


// //## LARGEST WORD IN SENTENCE AND PRIN WORD ALSO ;;

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     char arr[n+1];

//     cin.getline(arr,n); // cin.getline function ka use ek compleat sentence ko lene ke liye hota hai 
//     cin.ignore(); // Jo buffer creat hue hote hai unko remove karne ke liye hota hai

//     int i=0;
//     int currlen=0,maxlen=0;
//     while(1) // we take input 1 show true loop is ruuning until when a wrong  statement is found
//     {
//         if(arr[i] ==' '|| arr[i]=='\0')
//         {
//         if(currlen>maxlen)
//         {
//             maxlen=currlen;
//         }
//         currlen=0;
//         }
//     else
//     currlen++;
//     if(arr[i]=='\0')
//     break;
//     i++;
//     }
//     cout<< maxlen<<endl;
//    return 0;
// }