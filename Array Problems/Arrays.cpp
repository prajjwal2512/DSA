
// ##Write the programe to print maximumm and minimumm number of the arrray
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int array[n];
//     for(int i=0;i<=n;i++){
//         cin>>array[i];
//     }
//     for(int i=0;i<=n;i++){
//         cout<<array[i]<<" ";
//     }
//    return 0;
// }

// #include<iostream>
// #include<climits> //maxNo=INT_MIN;for max min number header file;;;
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxNO=INT_MIN;// INT_MIN-- -2ki power 31;;INT_MAX-- 2 ki power 31 minus 1
//     int minNO=INT_MAX;
//     for(int i=0;i<n;i++){
//         // if(arr[i]>maxNO){
//         //     maxNO=arr[i];
//         // }
//         // if(arr[i]<minNO){
//         //     minNO=arr[i];
//         // }
//         maxNO=max(maxNO,arr[i]); // predefine function 
//         minNO=min(minNO,arr[i]); 
//     }
//     cout<<maxNO<<" "<<minNO;
//    return 0;
// }

// // Second method 

// #include<iostream>
// using namespace std;

// int getmax(int arr[], int n){
//     int max=INT_MIN; 
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){   // if(arr[i]>INT_MIN)
//             max= arr[i];//cout<<arr[i];
//         }
//     }
//     return max;
// }

// int getmin(int arr[], int n){
//     int min=INT_MAX; 
//     for(int i=0;i<n;i++){
//         if(arr[i]<min){   // if(arr[i]>INT_MIN)
//             min= arr[i];//cout<<arr[i];
//         }
//     }
//     return min;
// }
// int main()
// {
//     int size;
//     cin>>size;
//     int arr[100];

//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     cout<<"maximumm value of " << getmax(arr,size)<<endl;
//     cout<<"minimumm value of" <<getmin(arr,size)<<endl;
//    return 0;
// }

// ##Write the programe to serching an array 

// #include<iostream>
// using namespace std;

// int linearSearch(int arr[],int key,int n){

//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return i;
//         }

//     }
//     return -1;

// }
// int main()  
// {
//     int n,i;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<linearSearch(arr,key,n)<<endl; //cout<<linearSearch(arr,n,key)<<endl; you will call out 
//     // in proper manner where you define the function;
//    return 0;
// }

//---Time complexity of this code is O(n) means worst case time complexity
// So we code to another method of to find best case time complexity...
 
// Ω(g(n)) best case time compexity...
// Θ(g(n))  avaradge case time coplexity...
// O(g(n))  worst case time coplexity...


// // Sorting is an array to execute accending order of array

// // Write the programe to sorting the array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];    
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[i]){
//                 // int temp=arr[j];
//                 // arr[j]=arr[i];
//                 // arr[i]=temp;
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
//    return 0;
// }

// ## bubble sort of element 
// To print the element in accending order 

// #include<iostream>
// using namespace std;
// int main()
// {
//     // int n;
//     // cin>>n;
//     // int arr[n];
//     // for(int i=0;i<n;i++){
//     //     cin>>arr[i];
//     // }
//     int arr[4]={4,1,3,2};
// int counter=1;
// while(counter<4){
//     for(int i=0;i<4-counter;i++){
//         if(arr[i]>arr[i+1]){
//             // int temp=arr[i];
//             // arr[i]=arr[i+1];
//             // arr[i+1]=temp;
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     counter++;
// }
// for(int i=0;i<4;i++){
//     cout<<arr[i]<<" ";
// }
//    return 0;
// }

// ** Insertion sort array --
// Insert an element from unsorted array to is correct 
// position in sorted array..

// #include<iostream>
// using namespace std;
// int main()
// {
//     // int n;
//     // cin>>n;
//     // int arr[n];
//     // for(int i=0;i<n;i++){
//     //     cin>>arr[i];
//     // }
//     int arr[5]={6,0,8,1,3};
//     for(int i=1;i<5;i++){
//         int current=arr[i];
//         int j=i-1;
//         while(arr[j]>current && j>=0){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=current;
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<"  ";
//     }
//    return 0;
// }

// // ## Sum of all subarray
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int a[4]={1,4,2,-3};
//     int curr=0;
//         for(int j=0;j<5;j++)
//         {
//             curr +=a[j];
//         }    
//         for(int i=0;i<5;i++){
//             int ans[]={curr};
//         }
//         int maxNo=INT_MIN;
//         int ans[]={curr};
//         for(int i=0;i<5;i++){
//             if(ans[i]>maxNo){
//                 maxNo=ans[i];
//             }
//         }
//         maxNO=max(maxNO,ans[i]); 
//         cout<<maxNo<<endl;

// }

// //## Print summ off all element in array 

// #include<iostream>
// using namespace std;

// int sumarr(int arr[], int size){

//     int sum=0;
//     for(int i=0;i<size;i++)
//     {
//         sum=arr[i]+sum;
//     }
//     return sum;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for( int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<sumarr(arr,n);

//    return 0;
// }


// //##      LINEAR SEARCH 

// #include<iostream>
// using namespace std;

// bool linsearch(int arr[],int size,int key){

//     for( int i=0;i<size;i++)
//     {
//         if(arr[i]==key){

//             return 1;   //cout<<"Is present"; is not correct way in bool operator 

//         }

//         // else{
//         //     cout<<"Is not present ";
//         // }
//     }
//     return 0 ;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for( int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Enter the key which you are found "<<endl;
//     int key;
//     cin>>key;

//     //cout<<linsearch(arr,n,key)<<endl;

//     bool found = linsearch(arr,n,key); // important

//     if(found){
//         cout<<"Is present "<<endl;
//     }
//     else{
//         cout<<"Is not found " <<endl;
//     }
//    return 0;
// }

// ** Swap alternate number ......
//  its applicable only even number 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>> n;
//     //int arr[5] = {1,2 4,5,8};
//     int arr[n];
//     for( int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i+=2){

          // swap(arr[i],arr[i+1]) // internAL WORKING

//         int temp=arr[i];
//         arr[i]=arr[i+1];
//         arr[i+1]=temp;
//     }
//     // cout<<arr[]<<endl;

//     for( int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//    return 0;
// }


// #include<iostream>
// using namespace std;
// void printarr(int arr[], int n){ /// important steps
//     for( int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     } 
// }

// int  swapalternate( int arr[], int size){
//     for( int i=0;i<size;i+=2)
//     {
//         if(i+1<size){  // that is important logic 
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     // int printarr(int arr[], int n){ /// important steps
//     // for( int i=0;i<n;i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     // }
// }

// // return printarr(arr, size);

// int main()
// {

//     int even[8]={5,4,2,3,6,7,8,9};
//     int odd[7]={11,2 ,3};

//     swapalternate(even ,8);
//     printarr(even,8);

//     cout<<endl;

//     swapalternate(odd ,3);
//     printarr(odd,3);
//    return 0;
// }

// ** Find unique number like arr[]={1,2,4,1,4,2,7}
// print 7 ..

// #include<iostream>
// using namespace std;

// int findunique(int arr[],int n){

//     int ans=0;
    // for(int i=0;i<n;i++){

    //     ans=ans^arr[i]; // using XOR operator 

    // }
//     return ans;
// }
// int main()
// {
//     // int n;
//     // cin>>n;
//     int arr[7]={1,2,3,1,2,3,8};
//     cout<<findunique(arr,7);
//    return 0;
// }

//** Given an integer arr return true if number of occurance of each value is unique

// #include<iostream>                               
// using namespace std;

// int unique(int arr[], int n)
// {
//     int count=0;
//         for(int i=0;i<n;i++){     

//     }
// }
// int main()
// {
//     int arr1[]={1,1,2,2,2,3};
//     int arr2[]={1,1,2,2,3};
//    return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={1,0,0,1,0};
//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<5;j++){
//             if(arr[j]<arr[i]){
//                 int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" "; 
//     } 
//    return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[4]={4,5,1,2};
//     int sort(arr.begin(),arr.end());
//    return 0;
// }


#include<iostream>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){

    int i=0,k=0,j=0;
    // int arr3[7]={0};
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
        arr3[k]=arr1[i];
        i++;
        k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }    
        while(i<n){ /// copy firts element 
            arr3[k++]=arr1[i++];
        // i++;
        // k++;
        }
        while(j<m){
            arr3[k++]=arr2[j++];
            // j++;
            // k++;
        }       
}
void print(int ans[], int n) {
        for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
        }
    }

int main()
{
    int arr1[4]={2,5,6,8};
    int arr2[3]={3,4,9};
    int arr3[7]={0};
    merge(arr1,4,arr2,3,arr3);
    print(arr3,7);
    cout<<print<<endl;
   return 0;
}










