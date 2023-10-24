// DECLARATIONA OF VECTOR IN ARRAY ,,
// BUT ESME LOCHA YE HOTA HIA KI ARRAY KE SIZE FIXED HOTE Hai not dynamic

// #include<bits/stdc++.h>
// using namespace std;
// void printVector(vector<int>&v){
//      // vector ko call kara maine 
//      cout<<"size :"<<v.size()<<endl;
//      for(int i=0;i<v.size();i++){ // yaha pe N or n wagiara nhi ayegaa 
//         cout<<v[i]<<" ";
//      }
//      cout<<endl;

// }

// int main()
// {
//     //declere maine size of vector
//     int N;
//     cin>>N;
//     vector<int>v[N]; // ye V vectoe array ko store kar rha hai 
//     for(int i=0;i<N;i++){
//         int n; // declere internal size of vector
//         cin>>n;
//         for(int j=0;j<n;j++){
//             int x;// call the value 
//             cin>>x;
//             v[i].push_back(x);
//         }
//     }
//     //print all of three vector
//     for(int i=0;i<N;i++){
//         printVector(v[i]); // vetor ko call karo
//     }
//    return 0;
// }

// VECTOR IN VECTOR 
#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int>&v){
     // vector ko call kara maine 
     cout<<"size :"<<v.size()<<endl;
     for(int i=0;i<v.size();i++){ // yaha pe N or n wagiara nhi ayegaa 
        cout<<v[i]<<" ";
     }
     cout<<endl;

}

int main()
{
    //declere maine size of vector
    int N;
    cin>>N;
    vector<vector<int>v[N]; // ye  V vector vector ko indicate ker raha hai 
    for(int i=0;i<N;i++){
        int n; // declere internal size of vector
        cin>>n;
        for(int j=0;j<n;j++){
            int x;// call the value 
            cin>>x;
            v[i].push_back(x);
        }
    }
    //print all of three vector
    for(int i=0;i<N;i++){
        printVector(v[i]); // vetor ko call karo
    }
   return 0;
}