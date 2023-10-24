#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v={1,3,45,2,21,24};
    // vector<int>::iterator it;  // use auto 
    for(auto it=v.begin();it!=v.end();it++){ 
        cout<<(*it)<<" ";
    }
    cout<<endl; 

     vector<pair<int,int>>v_p={{2,3},{1,4},{3,5}};
    for(auto &value: v_p){ //every output is actual value of vector;
    cout<<value.first<<" "<<value.second<<endl;  
    }
   return 0;
}