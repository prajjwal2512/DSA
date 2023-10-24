// //How to find reverse of number

// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cin>>num;
//     int rev_num=0;
//     while(num>0){
//         int rem=num%10;
//         rev_num=rev_num*10+rem;
//         num=num/10;
//     }
//     cout<<rev_num;
// }


//## Check a number is armstrong number or not 

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int sum=0;
//     int original=n;

//     while(n>0){
//         int lastdigit=n%10;
//         sum+=pow(lastdigit,3);
//         n=n/10;
//     }
//     if(sum==original){
//         cout<<"n is armstrong number";
//     }
//     else{
//         cout<<"n is not armstrong number";
//     }
//    return 0;
// }


// ** Convert binary to decimal ...

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ans=0;
//     int i=0;
//     while(n!=0){
//         int bit=n&1;
//         ans=(bit*pow(10,i)) + ans;
//         n=n>>1;   
//         i++;
//     }
//     cout<<"Answer is"<< ans<<endl;
//    return 0;
// }

//** Binary of negative number 

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num= -n;
//     int ans=0;
//     int i=0;
//     while(num!=0)
//     {
//         int bit=num&1;
//         ans=  (bit*pow(10,i)) + ans;
//         num= num>>1;
//         i++;
//     }
//     cout<<num;
//     int N=(~num)+1;
//     cout<<N;

//    return 0;
// }

// ** Print binary to decimal;

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0)
    {
        // int bit=n&1; // digit lena tha binary nhi okk

        // if(bit==1)
        // {
        //     ans= pow(2,i)+ans;
        // }

        int digit=n%10;
        if(digit==1){
            ans=ans+pow(2,i); 
        }
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
   return 0;
}




