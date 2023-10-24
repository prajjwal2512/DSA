// // Standerd templet library;

// // ------>>>>>> //For array
// #include<iostream>
// #include<array> // extra hedder file use in stl

// using namespace std;
// int main()
// {
//     int basic[3]={3,2,4};// simple representatio of array

//     array<int,4> a={1,3,4,2}; // array representation of array
    
//     int size= a.size(); //size of array

//     for(int i=0;i<a.size();i++){ // printing of array

//         cout<<a[i]<<" ";
//     }
//     // cout<<endl;

//     cout<<endl<<"Element at 2nd Index-> "<<a.at(2)<<endl; // printing perticuler index
//     cout<<"Check array is Empty or not-> "<<a.empty()<<endl;// gives bollion output o0 if no,1 if yes
//     cout<<"First element-> "<<a.front()<<endl;
//     cout<<"Last element-> "<<a.back()<<endl;
//    return 0;
// }

// //----->>>>  // for vector

// #include<iostream>
// #include<vector> // hedder file for vector
// using namespace std;
// int main()
// {
//     vector<int> v;
//     cout<<"size->"<< v.size()<<endl;
//     cout<<"Capacity->"<<v.capacity()<<endl; // it will provide size of vector

//     vector<int>a(5,1); // it will print size of 5 vector with same element 1 like {1,1,1,1,1}
//     cout<<"Print a"<<endl;
//     for(int i:a){
//         cout<<i<<" ";
//     }cout<<endl;
    
//     cout<<"Print last "<<endl;
//     vector<int>last(a); // esme sare element vector a ke last vector me store h jayega
//     for(int i:a){
//         cout<<i<<" ";
//     }cout<<endl;

//     v.push_back(1); // esase vector v me ek element assign hoga back side se
//     cout<<"size->"<< v.size()<<endl;
//     cout<<"Capacity->"<<v.capacity()<<endl;//kitni memory assign hai thenn eski capacity 1 hogi
    
//     v.push_back(2);  
//     cout<<"size->"<< v.size()<<endl;
//     cout<<"Capacity->"<<v.capacity()<<endl;

//     v.push_back(3);  
//     cout<<"size->"<< v.size()<<endl;
//     cout<<"Capacity->"<<v.capacity()<<endl;// Esme capacity 4 aayegi kyunki phle capacity 2 thi ab vector apni capacity double kar lega 
//     // 4 lekin size 3 hi hoga kyunki 3 hi element hai 4 capacity hai 

//     v.push_back(4);  
//     cout<<"size->"<< v.size()<<endl; // ans -4
//     cout<<"Capacity->"<<v.capacity()<<endl; //ans-4

//     v.push_back(5);  
//     cout<<"size->"<< v.size()<<endl; //ans- 5
//     cout<<"Capacity->"<<v.capacity()<<endl; // ans -8 capacity double 
    
//     cout<<"Element at 4nd Index->"<<v.at(4)<<endl;  //ans-5 --> like{1 ,2 ,3,4,5}
    
//     cout<<"First element-> "<<v.front()<<endl;// first element
//     cout<<"Last element-> "<<v.back()<<endl; //last elemenet

//     cout<<"Before pop"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<< endl; 

//     v.pop_back(); // vector ke last element ko nikaal ker fake dega

//     cout<<"after pop"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<< endl;

//     cout<<" Before clear size->"<< v.size()<<endl; // gives ans after pop_back
    
//     v.clear();
//     cout<<" After clear size->"<< v.size()<<endl;

//    return 0;
// }


// ---------->>>>>>> for Deque;

// #include<iostream>
// #include<deque> // hedder file for deque
// using namespace std;
// int main()
// {
//     deque<int>d;

//     d.push_back(3); // second element peeche se 
//     d.push_back(4); // second element peeche se
//     d.push_front(2);// first element aage se  
//     for(int i:d){
//         cout<<i<<" ";
//     }cout<<endl;

//     // d.pop_back(); // peeche se ek element gayab 
//     // for(int i:d){
//     //     cout<<i<<" ";
//     // }cout<<endl;

//     // d.pop_front(); // aage se ek element gayab 
//     // for(int i:d){
//     //     cout<<i<<" ";
//     // }cout<<endl;

//     cout<<"First ndex element->"<< d.at(1)<<endl;

//     cout<<"First element-> "<<d.front()<<endl;// first element
//     cout<<"Last element-> "<<d.back()<<endl;

//     cout<<"Empty or not-> "<<d.empty()<<endl;

//     cout<<"Before erase-> "<<d.size()<<endl;

//     d.erase(d.begin(),d.begin()+1);// d.begin() se start hoga ek element delet karna hai meko to d.begin()+1 tak
//     cout<<"After  erase-> "<<d.size()<<endl;
//     for(int i:d){
//         cout<<i<<" ";
//     }cout<<endl;

//    return 0;
//}


// -------->>>>>>>>>>for list 

// #include<iostream>
// #include<list> // hedder file for deque
// using namespace std;
// int main()
// {
//     list<int>l;

//     l.push_back(3); // second element peeche se 
//     l.push_back(4); // second element peeche se
//     l.push_front(2);// first element aage se  
//     for(int i:l){
//         cout<<i<<" ";
//     }cout<<endl;

//     l.pop_back(); // peeche se ek element gayab 
//     for(int i:l){
//         cout<<i<<" ";
//     }cout<<endl;

//     l.pop_front(); // aage se ek element gayab 
//     for(int i:l){
//         cout<<i<<" ";
//     }cout<<endl;

//     // cout<<"First ndex element->"<< l.at(1)<<endl; ye possible nhi hai
//     // kyunki esko travell karkehar element per jana rahta hai 

//     cout<<"First element-> "<<l.front()<<endl;// first element
//     cout<<"Last element-> "<<l.back()<<endl;

//     cout<<"Empty or not-> "<<l.empty()<<endl;

//     cout<<"Before erase-> "<<l.size()<<endl;

//     l.erase(l.begin());
//     cout<<"After  erase-> "<<l.size()<<endl;
//     for(int i:l){
//         cout<<i<<" ";
//     }cout<<endl;

//    return 0;
// }


// ----------->>>>>>>> For stack <<<<<<--------
// lastt in first out concept 
// jo last me aayega vo sabse pahle bahar aayerga 

// #include<iostream>
// #include<stack> // hedder file for deque
// using namespace std;
// int main()
// {
//     stack<int>s;
//     // stack<string>s;

//     s.push(3); // second element peeche se 
//     s.push(2); // second element peeche se
//     s.push(5);// first element aage se s 

//     // s.push("Prajjwal"); // second element peeche se 
//     // s.push("Kumar"); // second element peeche se
//     // s.push("Maurya");

//     cout<<"Size of stack->"<<s.size()<<endl; // size is 3;

//     cout<<"Top element->"<<s.top()<<endl; // last string maurya and top element output maurya hoga
    
//     s.pop(); // ek element delete
//     cout<<"Top element->"<<s.top()<<endl; // Top se dekhte hai sabse uper kaun sa element hai  output last se ek

//     cout<<"Size of stack->"<<s.size()<<endl;
//     cout<<"Empty or not-> "<<s.empty()<<endl;

//  return 0;
// }


// ----------->>>>>>>> For queue <<<<<<-------- Reverse of stack
// firts in first out concept
// Pahle jo jayega wahi pahle aayega 

// #include<iostream>
// #include<queue>

// using namespace std;
// int main()
// {
//     queue<string>q;

//     q.push("Prajjwal");
//     q.push("Kumar");
//     q.push("Maurya");

//     cout<<"Size before pop-> "<<q.size()<<endl;

//     cout<<"First element->"<<q.front()<<endl;
//     q.pop(); // First element Prajjwal nikla
//     cout<<"First element->"<<q.front()<<endl; //Out Kumar

//     cout<<"Size after pop->"<<q.size()<<endl;
//    return 0;
// }


// ----------->>>>>>>> For Priority queue <<<<<<--------
//apne ek esa queue banaye ho jiska first element hamesha greatest hoga like max heap
// min heap me hamesha minimumm vale niklega...

// #include<iostream>
// #include<queue>

// using namespace std;
// int main()
// {
//     // max heap bannane ka tarika
//     priority_queue<int> maxi;

//     // min heap banane ka tarika;
//     priority_queue<int,vector<int>, greater<int> > mini;

//     maxi.push(1); 
//     maxi.push(3); 
//     maxi.push(2);
//     maxi.push(0);
//     cout<<"Size->"<<maxi.size()<<endl;
//     int n=maxi.size();

//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<" "; // maximumm or top ke element ko print karaya 
//         maxi.pop(); // phir ye bahar nikala 
//     }cout<<endl;

//     mini.push(1); 
//     mini.push(3); 
//     mini.push(2);
//     mini.push(0);
//     cout<<"Size->"<<mini.size()<<endl;
//     int m=mini.size();

//     for(int i=0;i<m;i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }cout<<endl; 
//    return 0;
// }


// ----------->>>>>>>> For Set <<<<<<--------
// yah same element ko ek hi baar store karta hai jaise hamne five element diye hai all of five are same 
// then set store onle one element 
// its store only unique element 
// oi elemment aap diye hai to uska modification nhi ho sakta only delete
// all element return in sorted order in accending oerder
// time complexity O(n) hoti hai in case of set 


// #include<iostream>
// #include<set>
// using namespace std;
// int main()
// {
//     set<int>s;

//     s.insert(5);
//     s.insert(5);
//     s.insert(0);
//     s.insert(1);
//     s.insert(6);
//     s.insert(0);
//     s.insert(3);

//     for(int i:s){
//         cout<<i<<" ";
//     }cout<<endl;

//     s.erase(s.begin()); // first element delete
//    for(int i:s){
//         cout<<i<<" ";
//     }cout<<endl; 

//     // s.erase(s.begin()+2); // not applicable ...
//    for(int i:s){
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<"5 is present or not-> "<<s.count(5)<<endl; // give boollin value if yes 1 if no 0  

//    return 0;
// }


// ----------->>>>>>>> For Map <<<<<<--------
// map ek esa data sturcture hai jisme data key value ke form me store hota
// sari key unique hoti hai 
// ek key ek hi value ko point karegi
// and also return in sorted order alll element ...
// time complexity O(log n) hoti hai in case of map 

#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>m;

    m[1]="Prajjwal"; // 1 jo hai key hai and babber jo hai value hai
    m[13]="Kumar";
    m[2]="Maurya";

    m.insert({5,"Ferarri"});//another method of representation
    m.insert({8,"BMW"});
    
    for(auto i:m){
        cout<<i.first<<" ";// return only key 
    }cout<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;// return key with value means string 
    }cout<<endl;

    m.erase(13); // first element delete
   for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl; 

//     // s.erase(s.begin()+2); // not applicable ...
//    for(int i:s){
//         cout<<i<<" ";
//     }cout<<endl;

    cout<<"5 is present or not-> "<<m.count(5)<<endl; // give boollin value if yes 1 if no 0  

   return 0;
}
