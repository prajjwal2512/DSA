// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int,string>m; //declaration of map
//     m[1]="abc";
//     m[2]="cdc";
//     m[5]="acd";
//     //print output
//     map<int,string>::iterator it;
//     for(it=m.begin();it!=m.end();it++){
//         // cout<<(*it).first<<" "<<(*it).second<<endl;
//         cout<<it->first<<" "<<it->second<<endl; 
//     }
//     cout<<endl;
//    return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>m; //declaration of map
    m[1]="abc";
    m[2]="cdc";
    m[5]="acd";
    //print output
    // // map<int,string>::iterator it;
    // for(auto it=m.begin();it!=m.end();it++){
    //     // cout<<(*it).first<<" "<<(*it).second<<endl;
    //     cout<<it->first<<" "<<it->second<<endl; 
    // }
    // cout<<endl;
    // for(auto &pr:m){ // pr is declare as pair variable bcz map pair ko store karta hai in soted order
    //     cout<<pr.first<<" "<<pr.second<<endl;
    // }
    auto it=m.find(2);
    
   return 0;
}

