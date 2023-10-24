// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v={1,3,5,6,7};
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     } 
//     cout<<endl;
//     vector<int>::iterator it=v.begin();
//     cout<<*it<<" ";
//     cout<<*(it+1)<<endl;
//     for(it=v.begin();it!=v.end();it++){
//         cout<<(*it)<<" ";
//     }
//     cout<<endl;

//     // vector<pair<int,int>>v_p={{1,3},{4,5},{5,6},{6,7}};
//     // vector<pair<int,int>> ::iterator it;
//     // for(it=v_p.begin();it!=v_p.end();it++){
//     //     cout<<(*it).first<<" "<<(*it).second();
//     // }
//    return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<pair<int,int>>v_p={{1,3},{4,5},{5,6},{6,7}};
//     vector<pair<int,int>> ::iterator it;
//     for(it=v_p.begin();it!=v_p.end();it++){
//         cout<<(*it).first<<" "<<(*it).second<<endl;
//         
//     cout<<it->first<<" "<<it->second<<endl; // another notation
//    return 0;
// }

//-->> how to write code for iterator
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    vector<int>v={1,3,45,2,21,24};
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    // Range based loop for vector
    for(int value: v){ //every output is copy value of vector;
    // value++ ; does not change 
    cout<<value<<" ";  
    }
    cout<<endl;
    vector<pair<int,int>>v_p={{2,3},{1,4},{3,5}};
    for(pair<int,int> &value: v_p){ //every output is actual value of vector;
    cout<<value.first<<" "<<value.second<<endl;  
    }
    // cout<<endl;
    return 0;
}

