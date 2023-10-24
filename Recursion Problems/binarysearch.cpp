// #include<iostream>
// using namespace std;
// int binarysearch(int arr[],int n,int key){
//     int start=0;
//     int end=n-1;
//     int mid=(start+end)/2; // yaha per ek galti ho sakti hai 
// //agr dono start aur end max intergerr hoto dono ka sum se jyda aayga it's compile error
// //to hmm chalaki se esko  mid=[start + (end-start)]/2  likhenge ;;
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         // go to right wala part
//         if(key>arr[mid]){
//             start=mid+1;
//         }
//         // for false statement this apply and only  change start and end 
//         else{
//             end=mid-1;
//         }
//         mid=(start+end)/2;
//     }
//     return -1;
// }

// int main()
// {
//     int arr1[4]={1,2,5,7};
//     int arr2[5]={2,3,7,8,9};    
//     int index1=binarysearch(arr1,4,1);
//     int index2=binarysearch(arr2,5,8);
//     cout<<index1<<endl<<index2;
//    return 0;
// }

// // binary search ime colexity o(logn) is very very best liear search ...

// // Find first and last occurance of a given sorting array 

// #include<iostream>
// using namespace std;

// int firstoccu(int arr[],int n,int key)
// {
//     int s=0,e=n-1;
//     int mid=s+(e-s)/2;
//     int ans= -1;
//     while(s<=e){

//         if(arr[mid]==key){
//             ans=mid;
//             e=mid-1;
//         }
//         else if (arr[mid]<key){
//             e=mid-1;
//         }
//         else if(arr[mid]>key){
//             s=mid+1;
//         }
//         mid= s+(e-s)/2;
//     }
//     return ans;

// }

// int lastoccu(int arr[],int n,int key)
// {
//     int s=0,e=n-1;
//     int mid=s+(e-s)/2;
//     int ans= -1;
//     while(s<=e){

//         if(arr[mid]==key){
//             ans=mid;
//             s=mid+1;
//         }
//         else if (arr[mid]<key){
//             e=mid-1;
//         }
//         else if(arr[mid]>key){
//             s=mid+1;
//         }
//         mid= s+(e-s)/2;
//     }
//     return ans;

// }
// int main()
// {
//     int arr[5] = {1,2,3,3,4};

//     cout<<firstoccu(arr,5,3)<<endl;
//     cout<<lastoccu(arr,5,3);
//    return 0;
// }


// Find total number of occuranceof any given array 

// #include<iostream>
// using namespace std;

// int firstoccu(int arr[],int n,int key)
// {
//     int s=0,e=n-1;
//     int mid=s+(e-s)/2;
//     int ans= -1;
//     while(s<=e){

//         if(arr[mid]==key){
//             ans=mid;
//             e=mid-1;
//         }
//         else if (arr[mid]<key){
//             e=mid-1;
//         }
//         else if(arr[mid]>key){
//             s=mid+1;
//         }
//         mid= s+(e-s)/2;
//     }
//     return ans;
// }

// int lastoccu(int arr[],int n,int key)
// {
//     int s=0,e=n-1;
//     int mid=s+(e-s)/2;
//     int ans= -1;
//     while(s<=e){

//         if(arr[mid]==key){
//             ans=mid;
//             s=mid+1;
//         }
//         else if (arr[mid]<key){
//             e=mid-1;
//         }
//         else if(arr[mid]>key){
//             s=mid+1;
//         }
//         mid= s+(e-s)/2;
//     }
//     return ans;

// }
// int main()
// {
//     int arr[7] = {1,2,3,3,3,4,3};

//     // cout<<firstoccu(arr,5,3)<<endl;
//     // cout<<lastoccu(arr,5,3);
//     cout<<lastoccu(arr,7,3) - firstoccu(arr,7,3) +1; 
//     //Total number of occurance =last index  - first index +1;
//    return 0;
// }

// //find index of element where maximumm number is situated  //peak elemnet index 

// #include<iostream>
// using namespace std;

// int maxindex(int arr[],int n){
//     int max=INT_MIN;
//     int index;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             index=i;
//         }
//     }
//     return index;
// }
// int main()
// {
//     int arr[4]={0,10,5,2};
//     cout<<maxindex(arr,4)<<endl;
//    return 0;
// }

// // Find pivot element in an array
// // pivote means replace last two didgit from first digit of an sorted array  
// #include<iostream>
// using namespace std;

// int getpivot(int arr[], int n){
//     int s=0;
//     int e=n-1;
//     int mid =s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]>arr[0]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
// }
// int main()
// {
//     int arr[5]={8,10,17,1,3};

//     cout<<"Pivot is"<<getpivot(arr,5)<<endl;
//    return 0;
// }

// Find square root of a nuber using binary search 

// #include<iostream>
// using namespace std;
// int squareroot(int n){
//     int s=0;
//     int e=n;
//     int mid= s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if(mid*mid==n){
//             return mid;
//         }
//         else if(mid*mid<n){
//             ans=mid;
//             s=mid+1;
//         }
//         else{
//             e=mid-1;

//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<squareroot(n);

//    return 0;
// }
// above code is applicable when integer lies between pow(2,31) to pow(2,31-1) if we give input 1000000 it's ivalid .....
// then its applicable for all value when we replace "int" to "long long int"

// #include<iostream>
// using namespace std;
// int squareroot(int n){
//     int s=0;
//     int e=n;
//     int mid= s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if(mid*mid==n){
//             return mid;
//         }
//         else if(mid*mid<n){
//             ans=mid;
//             s=mid+1;
//         }
//         else{
//             e=mid-1;

//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<squareroot(n);

//    return 0;
// }

// // If we find actual value of the squareroot of the nuber with decimal 

// #include<iostream>
// using namespace std;
// long long int squareroot(int n){
//     int s=0;
//     int e=n;
//     long long int mid= s+(e-s)/2;
//     long long int ans=-1;
//     while(s<=e){
//         if(mid*mid==n){
//             return mid;
//         }
//         else if(mid*mid<n){
//             ans=mid;
//             s=mid+1;
//         }
//         else{
//             e=mid-1; 
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }
// double moreprecision(int n,int precision, int tempsolu){

//     double factor=1;
//     double ans=tempsolu;
//     for(int i=0;i<<precision;i++){
//         factor=factor/10;
//         for(double j=ans; j*j<n;j=j+factor){
//             ans = j;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the number to find squareroot"<<endl;
//     cin>>n;
//     int tempsolu=squareroot(n);
//     cout<<"Square root of "<< moreprecision(n,3, tempsolu)<<endl;
//    return 0;
// }

//Book memory allocation problem
// ensure that each and every book is ditributed betweenn student 
// the maximumm pages book allocated to minimumm number student 
// book allocated in contineus way
// Example arr[4]={10,20,30,40}

// #include<iostream>
// using namespace std;
// int bookallo(int arr,int n,int m){

// }
// int main()
// {
//    return 0;
// }