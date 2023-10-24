// - in character array need to know size but in string no need to know sizeof
// -in char array larger size required for operation like concatenation & append but in string it's easy
// -in char array no terminating extra character but in string terminated with a special character '\0' null character 

// #include<iostream>
// #include<string> // special hedder file
// using namespace std;
// int main()
// {
//     // string str; // TYPE-1
//     // cin>>str;
//     // cout<<str;

//     // string str; // TYPE-2
//     // string str1(5,'n'); // it's print 5times n;
//     // cout<< str1<<endl;

//     // string str = "Hare krishna!!"; // TYPE-3
//     // cout<<str;

//     // //### FOR PRINTing A SENTENCE 
//     // string str;
//     // getline(cin,str); // use this function for printing a compleat sentences
//     // //cin>>str; // if we used only cin instead of getline function then it's gives only first character of any sentences
//     // cout<<str<<endl;
//    return 0;
// }


// // *** DIFFERENT FUNCTION IN STRING 

// // apend of two string means add 
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string s1="fam";
//     string s2="ily";

//     // s1.append(s2); // ways-1 using append function for additon of two string 
//     // cout<<s1<<endl;

//     //cout<<s1+s2<<endl; // WAYS-2 addition of two string 
    
//     // s1=s1+s2; // WAYS-3 addition of two string 
//     // cout<<s1<<endl;

//     cout<<s1[2]<<endl; // for acces a perticuler character with indexes initite with 0 
//    return 0;
// }


// // *******
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string abc="asjhd igrt  grtiog ioergjreg";
//     abc.clear(); // clear function ka use output delete karne ke liye hota hai yah kuvh output nhi aata hai if we run the code 
//     cout<<abc;
//    return 0;
// }

// //## Comparison of string ;;;
// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     string s1="abc";
//     //string s2="xyz"; // if we written abc  at place of xyz then output is zero
//     string s2="abc";

//     //cout<<s2.compare(s1)<<endl; // s2 ko s1 se copare ker rhe hai with compare function output 1
//     cout<<s1.compare(s2)<<endl; // output -1;

//     // FOR CHECKING TWO STRING ARE EQUAL OR NOT....
//     if(s1.compare(s2)==0) { // if(!s1.compare(s2)==0) it's also applicable ! not 
//         cout << "string are equal"<<endl;
//     }
//    return 0;
// }

// // ### EMPTY FUNCTION .... 
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string s1="abc";
//     cout<<s1<<endl;

//     // s1.clear();  // used for clear all otput value...
//     // if(s1.empty()){
//     //     cout<<"string is empty"<<endl;
//     // }

//     if(!s1.empty()){ //!not function...
//         cout<<"string is not empty"<<endl;
//     }
//    return 0;
// }

//#### ERASE FUNCTION ...

// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string s1= "nincompoo";
//     // //s1.erase(3,3); // first 3 shows erase 3 from third posistion of string and second 3 is show erase three string output ninpoo
//     // s1.erase(3,2); // it's show's remove 2 chracater from third position and output is ninmpoo;
//     // cout<<s1<<endl;

//     // ### FIND FUNCTION 
//     // cout<< s1.find("com")<<endl; // they gives output 3 that means com string started at third position;;
//     // cout<<s1.find("poo")<<endl;
//     // cout<<s1.find("tt")<<endl; // no output ...

//     // ### INSERT FUNCTION 
    
//     // s1.insert(2,"lol"); // insert lol string at second position output ninlolncompoo
//     // cout<<s1<<endl;

//     //## LENGTH FUNCTION .....

//     //cout<<s1.size()<<endl; // size of string is 9;
//     // cout<<s1.length()<<endl;

//     // USE OF THIS LENGTH OR SIZE FUNCTION FOR IETRATION OF THE LOOP LIKE 
//     // for(int i=0;i<s1.size();i++) // if we used i<=s1.size then its print space at last position 
//     // {
//     //     cout<<s1[i]<<endl;
//     // }

//     //## TO FIND SUBSTRING OF THE FUNCTION USE SUBSSTRING FUNCTION using substr 

//     //cout<<s1.substr(6,3)<<endl; // we should 6th character to further 3 string 

//     // ## KISI BHI NUMERIC STRING KO AGR HAME INTERGER ME CONVERT KARNA HAI TO 

//    return 0;
// }


// ## KISI BHI NUMERIC STRING KO AGR HAME INTERGER ME CONVERT KARNA HAI TO use stoi(string)
// and viceversa use to_string

// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     // string s1="786";
//     // int x =stoi(s1);
//     // cout<<x+2<<endl; // output is 788

//     int x= 786;
//     cout<< to_string(x) + "2"<<endl; // addition of 2 and output is 7862 it's called append of the string ;
//    return 0;
// }

// // ## SORTING OF STRING 
// // A NEW HEDDER FILE ARE USED 
// #include<iostream>
// #include<string>
// #include<algorithm> // that's new hedder file for sorting a string 
// using namespace std;
// int main()
// {
//     string s1="sdufergigjneige"; // output is alphabetical oreder of this string....
//     sort(s1.begin(),s1.end()); // s1.begin gives starting charater of string in alphabetical oerder
//     // s1.end gives last character of string in alphabetical order ..
//     cout<<s1<<endl;
//    return 0;
// }


//*****//## CONVERT A STRING  EITHER UPPER CASE OR LOWER CASE OF STRING IF IT'S GIVEN RANDOMLY MIXURE OF UPPER AND LOWER CASE

// #include<iostream>
// #include<string>
// #include<algorithm>

// using namespace std;
// int main()
// {
//     string s1="BsjndDYUBubeijfc";

    //cout<<'a'-'A'<<endl; //output is 32;;; means mera small a capital A se 32 aage hai
    // ab meko pata hai lower case ka characteer 32 aage hai upper case se to lower case ko upper case me 
    // convert karne ke liye hame usko 32 peeche kheechna hoga ..he he he he 

//     for(int i=0; i<s1.size();i++)
//     {
//         if(s1[i]>= 'a' && s1[i]<='z')
//         {
//             s1[i] -= 32; // use s1[i] += 32  converting for compleatly lower case of string ....
//         }
//         //cout<<s1<<endl; jitti size ki string hai utne baar output lega  he he he he ......
//     }

//     cout<<s1<<endl; // do baar cout karna hoga 


// // ## Converting compleatly lower case of string 
//     for(int i=0; i<s1.size();i++)
//     {
//         if(s1[i]>= 'A' && s1[i]<='Z')
//         {
//             s1[i] += 32; // use s1[i] += 32  converting for compleatly lower case of string ....
//         }
        
//     }
//     cout<<s1<<endl;


// // ### USING FUNCTION ALSO CONVERT LOWER CASE TO UPPER CASE and  viceversa WHICH HAVE ALSO  DONE IN ABOVE 
       
//        transform(s1.begin(),s1.end(),s1.begin(), ::toupper);
//        // first begin and end define a copmleat string and secon begin is shows where we should start 
//        // start for converting the string and also toupper shows converting upper case of string 

//        cout<<s1<<endl;

//        transform(s1.begin(),s1.end(),s1.begin(), ::tolower); // s1.end()-- koi sense nhi hai likhne ka as it is hi print hoga string 

//        cout<<s1<<endl;

//    return 0;
// }

// //**Q--- FORM THE BIGGEST NUMBER FORM THE NUMERIC STRING . koi nnumer ko uske bigest form me convert karna 

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     string s="8379389242";
//     // logic is that sort the string in decending order usin sort function...
//     sort(s.begin(),s.end(),greater<int>());

//     cout<<s<<endl;

//     // // for lowest number  
//     // sort(s.begin(),s.end(), <int>());

//     // cout<<s<<endl;


//    return 0;
// }


// //### WHEN A STRING IS GIVEN PRINT AND COUNT THA PRTICULER CHARACTER WHOSE OCCURE IN MAXIMUMMM TIME ... 

// #include<iostream>
// #include<string>
// #include<algorithm>

// using namespace std;
// int main()
// {
//     string s="fhfvrtgjtogjtjhrhghhaaaaa"; // it's gives output in alphabetical order whose first if two character is same 
//      int count[26];

//      for(int i=0;i<26;i++)
//      {
//         count[i]=0;
//      }

//      for(int i=0;i<s.size();i++)
//      {
//         count[s[i]-'a']++;
//      }
//      char ans ='a';
//      int max_count=0;

//      for(int i=0;i<26;i++)
//      {
//         if(count[i]>max_count)
//         {
//             max_count =count[i];
//             ans =i+'a';
//         }
//      }
//      cout<<max_count <<" "<< ans<<endl;

//    return 0;
// }

#include<iostream>
using namespace std;
int main()
{
   int a[];
   int a[4]={1,2,3,4};
   cout<<a[0];
   return 0;
}







