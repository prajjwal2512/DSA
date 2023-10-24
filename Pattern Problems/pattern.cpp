// Print pattern 
// * * * *
// * * * *
// * * * *
// * * * *
// Print pattern 
// * * * *
// *     *
// *     *
// * * * *

// #include<iostream>
// using namespace std;
// int main()
// {
//     int row,col;
//     cout<<"Enter the row and col"<<endl;
//     cin>>row>>col;
//     for(int i=1;i<=row;i++)
//     {
//         for(int j=1;j<=col;j++)
//         {
//             if(i==1||i==row){
//                 cout<<"*";
//             }
//             else if(j==1||j==col){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }

//         }
//         cout<<endl;
//     }
//     return 0;

// }

//**Print reverse of half pyramid..for any number n

// * * * *
// * * *
// * *
// *

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         } 
//         cout<<endl;
//     }
//     return 0;
// }

//**Print half of pyramid after 180 degree rotation if n =5 is given''';

//       *
//     * *
//   * * *
// * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j<=n-i){
//                 cout<<"  "; 
//                 //means to execute same space in both if/else cases;
//             }
//             else{
//                 cout<<"* "; //If here one space this code gives pyramid still one space in if case statement;
//                 //cout<<"*"<<" ";

//             }

//         }
//         cout<<endl;
//     }

// }

//**Print pyramid for when n =5 is given''';

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j<=n-i){
//                 cout<<" "; 
//             }
//             else{
//                 cout<<"* "; ////If here one space this code gives pyramid;
//                 //cout<<"*"<<" ";

//             }

//         }
//         cout<<endl;
//     }

// }

//Print pattern
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i<<" "; //If we write i in double inverted comma then its treat as a character and print i as it is not number ;

//         }
//         cout<<endl;
//     }

// }


//## Print floyd's triangle  ;
// 1
// 2  3
// 4  5  6
// 7  8  9  10
// 11 12 13 14  15 

// #include<iostream>
// using namespace std;
// int main(){
//     int n,count=1; // if we write onle count then it start from 0;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }

// }

//## Print stars with butterfly pattern;

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int i=1;
//     int count =1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=n)
//         {
//             cout<<count<< " ";
//             count =count+1;
//             j=j+1;
//         }
//         cout<<endl;
    
//         i=i+1;
    
//     }
//    return 0;
// }

#include<iostream>
using namespace std;
int main()
{

    
    int n
   return 0;
}




 










