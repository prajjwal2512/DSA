// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,m,matrix;
//     cin>>n>>m;
//     int a[n][m];
//     for(int i=0 ;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cin>>a[i][j];
//         }
//     }
//     cout<<"matrix is"<<endl;
//     for(int i=0 ;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cout<<a[i][j];
//         }
//         cout<<" "<<endl;
//     }

//     //## Searching an element in array;
//     int x;
//     cin>>x;
//     bool flag=false;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(a[i][j]==x){
//                 cout<<i<<" "<<j<<endl;
//                 // cout<<"Element is found"<<endl;
//                 flag=true;
//             }
//         }    
//     }
//     if(flag){
//         cout<<"Element is found"<<endl;
//     }
//     else{
//         cout<<"Element is not found"<<endl;
//     }
//     return 0;
// }  

//## spiral order matrix....
// #include<iostream>
// using namespace std;
// int main()
// { 
//     int n,m;
//     cin>>n>>m;
//     int a[n][m];
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cin>>a[i][j];
//         }
//     }
//     //Spiral order matrix...
//     int row_start=0,row_end=n-1,column_start=0,column_end=m-1;
    
//     while(row_start<=row_end && column_start<=column_end)
//     {
//         //for row_start
//         for(int col=column_start;col<=column_end;col++)
//         {
//             cout<<a[row_start][col]<<" ";
//         }
//         row_start++;

//         // for column_end 
//         for(int row=row_start;row<=row_end;row++)
//         {
//             cout<<a[row][column_end]<<" ";
//         }
//         column_end--;

//         //for row_end
//         for(int col=column_end;col>=column_start;col--)
//         {
//             cout<<a[row_end][col]<<" ";
//         }
//         row_end--;

//         // for column_start
//         for(int row=column_end;row>=column_start;row--)
//         {
//             cout<<a[row][column_start]<<" ";
//         }
//         column_start++;
//     }

//    return 0;
// }

// ## Calculae the tranpose  of the matrix.
//Diagonally reverse the matrix..

// #include<iostream>
// using namespace std;
// int main()
// {

//     int a[3][3]={ {1,2,3},{4,5,6},{7,8,9}};
//     // int n,m;
//     // cin>>n>>m;
//     // int a[n][m];
    

//     for(int i=0;i<3;i++)
//     {
//         for(int j=i;j<3;j++)
//         {
//             //Swap
//             int temp=a[i][j];
//             a[i][j]=a[j][i];
//             a[j][i]=temp; 
//         }
//     }
//     //print;

//      for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//     }
//    return 0;
// }

//### MATRIX MULTIPLICATION

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n1,n2,n3;

//     cin>>n1>>n2>>n3;

//     int m1[n1][n2];
//     int m2[n2][n3];
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             cin>>m1[i][j];
//         }
//     }
//     for(int i=0;i<n2;i++){
//         for(int j=0;j<n3;j++){   //If single statement is avalible then we dont care about curly braces
//             cin>>m2[i][j];
//         }
//     }
//     int ans[n1][n3];
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             ans[i][j]=0;
//         }
//     }

//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             for(int k=0;k<n2;k++){  // Important logic common column itrated in one loop
//                 ans[i][j]+=m1[i][k]*m2[k][j];

//             }
//         }
//     }

//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//    return 0;
// }

// //MATRIX SEARCH 
// //Write the algo to find the given value exist or not 
// // integer in each row are sorted in ascending from left to right.
// // integers in each colun are sorted in ascending from top to bottom.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     int target;
//     cin>>target;
//     int mat[n][m];
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cin>>mat[i][j];
//         }
//     }
//     int r=0,c=m-1;//top right position
//     bool found=false;
//     while(r<n and c>=0){
//         if(mat[r][c]== target){
//             found =true;
//         }
//         if(mat[r][c]>target){
//             c--;
//         }
//         else{
//             r++;
//         }
//     }
//     if(found){
//         cout<<"Element found";
//     }
//     else{
//         cout<<"Element does not exist";
//     }
//    return 0;
// }


// ## Dynamic memory allocation .....

#include<iostream>
using namespace std;
int main()
{
    int row,column;
    cin>>row>>column>>endl; 

    int n;
    cin>>n;
     int** arr=new int*[n]; // row 
     for(int i=0;i<n;i++){
        arr[i]=new int[n]; // column 
     }

     for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
     }

     cout<<endl;
     for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            cout<< arr[i][j] <<" ";
        } cout<<endl;
     }

     // releasing memory 
    for(int i=0;i<n;i++){
        delete [] arr[i];  
        { 
   return 0;
}

// yrr heap me jab mujhe memory allocate kar di hai 
// to usko clean bhji karna hoga 

// stack me to automatic ho jata hai delelet 


















