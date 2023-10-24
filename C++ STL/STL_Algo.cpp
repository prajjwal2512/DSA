// --------->>>> For algorithm <<<<<<-------

#include<iostream>
#include<algorithm>
#include<vector> // for sorted way 

using namespace std;
int main()
{
    vector<int> v;

    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(7);
    v.push_back(9);

    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Finding 5 _>"<<binary_search(v.begin(),v.end(),5)<<endl; // Output boolian value

    cout<<"lower bound-> "<<lower_bound(v.begin(),v.end(),7) - v.begin()<<endl;// Index dega 7th position ka 
    cout<<"Upper bound-> "<<lower_bound(v.begin(),v.end(),7) - v.begin()<<endl;
    
    int a=2;
    int b=5;
    cout<<"Max of ->"<<max(a,b)<<endl;
    cout<<"Min of ->"<<min(a,b)<<endl;

    swap(a,b);
    cout<<"Value of a is "<<a<<endl; // a me 5 store ho jayega

    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<"Reverse of string s is -> "<<s<<endl;

    rotate(v.begin(),v.begin()+3,v.end()); // kaha se start karna hai . kitne element ko rotate karna hai . last element 
    // rotate(v.begin(),v.begin()+3,v.end());7 9 0 1 2
    //rotate(v.begin(),v.begin()+2,v.end()); 2 7 9 0 1 countineus memory wale element uthayega aage se as it peeche sift ker dega 
    cout<<"After roatating"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end()); // ye intro sort ke uper base hai ;quick sort ;heap sort;insertio sort // ye teeno sort behind the secene chalte hai 
    cout<<"After sorting"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

   return 0;
}