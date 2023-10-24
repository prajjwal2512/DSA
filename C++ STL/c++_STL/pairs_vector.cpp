// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//    pair<int,string>p;
//    // p=make_pair(2,"abc");
//    p={2,"abc"};
//    cout<<p.first<<" "<<p.second<<endl;
//    int a[]={2,1,3};
//    int b[]={4,5,3};
//    pair<int,int>p_array[3];

//    return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void printV(vector<int>v){
//    cout<<"size: "<<v.size()<<endl;
//    for(int i=0;i<v.size();++i){
//       // cout<<"size: "<<v.size()<<endl;
//       cout<<"element is: "<<v[i]<<" ";
//    }
//    cout<<endl;
// }

// int main()
// {
//    vector<int>v;
//    int n; // take size
//    cin>>n;
//    for(int i=0;i<n;++i){
//       int x; // take number what is store in vector
//       cin>>x;
//       printV(v);
//       v.push_back(x);
//    }
//    // printV(v);// call print functtion
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
void printV(vector<int>v){
   cout<<"size:"<<v.size()<<endl;
   for(int i=0;i<v.size();i++){
      // cout<<"size:"<<v.size()<<endl;
      cout<<v[i]<<" ";
   }
   cout<<endl;
}
int main()
{
   vector<int>v;
   v.push_back(7);
   v.push_back(9);
   v.push_back(4);

   vector<int>v2=v;
   v2.push_back(2);
   printV(v);
   printV(v2);
   return 0;
}