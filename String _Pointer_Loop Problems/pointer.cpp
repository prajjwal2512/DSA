// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10;
//     double d=4.3;
//     double *p2=&d;
//     int *aptr=&a;
//     cout<<aptr<<endl; //IT'S GIVE ADDERES OF a; 
//     cout<<*aptr<<endl;
//     cout<<*p2<<endl;
//     cout<<p2<<endl;
//     char ch='a';
//     char *cptr=&ch; 
//     cout<<cptr<<endl;
//     cout<<"size of the ptr is :"<< sizeof(a)<<endl;
//     cout<<"size of the ptr is :"<< sizeof(d)<<endl;
//     // *aptr=20;..
//     // cout<<a<<endl;
//    return 0;
// }


// // POINTER AIRTMETIC 
// // INCREMENT ++
// // DECREMENT --
// // ADD,SUBTRACT

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10;
//     int *aptr=&a;  
//     cout<<aptr<<endl; // suppose if here address is 2000;
//     aptr++;
//     // *aptr++;
//     cout<<aptr<<endl; // here address is 2004 because size of integer is 4byte

//     char ch='a';
//     char *cptr=&ch; 
//     cout<<cptr<<endl;//suppose if here address is 3000;

//     cptr++;
//     cout<<cptr<<endl; //here address is 3001 because size of character  is 1 byte
//    return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={10,20,30};
//     cout<<*arr<<endl;

//     int *ptr=arr; // print all array element with pointer..
//     // for(int i=0;i<3;i++)
//     // {
//     //     cout<<*ptr<<endl;
//     //     ptr++; // it's moves to 4 byte memory with next address like 20
//     // }

//     for(int i=0;i<3;i++)
//     {
//         cout<<*(arr+i)<<endl;// you just keep it like this 
//         // one question arraise your mind why you can not (arr+4i)
//         //cout<<*arr<<endl;
//         //arr++;// it's illegeal because you can not move with  array 
//     }
//    return 0;
// } 


// // // //### POINTER TO POINTER''
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=50; // es tarah se bhi pointer ko likh sakte hai 

//     int *p; // cout<< *p<<endl; segmentation fault 
//     p=&a;
//     cout<<*p<<endl; //print value of a;
//     cout<<p<<endl;
//     int **q=&p;
//     cout<<*q<<endl; // y ek baari refrense karne per p aayega
//     cout<<**q<<endl;// ye do baari derefrence karne pe  a aayega 
//    return 0;
// }



// // //## POINTER PASSING THROUGH A FUNCTION......
// #include<iostream>
// using namespace std;

// void swap(int *a,int *b){ // it's call by refrencs not value 
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }

// int main()
// {
//     int a=2;
//     int b=4;

//     // int *aptr=&a;
//     // int *bptr=&b;
//     // swap(aptr,bptr); // here we passed value of a and b by value then same value is print 
//     // // then what we can do.. we make pointer of this.....

//     swap(&a,&b); // that is improve version...
//     cout<<a<<" "<<b<<endl;
//    return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     float f=10.5;
//     float p=2.5;
//     float *ptr =&f;
//     (*ptr)++;
//     *ptr=p;
//     cout<<*ptr<<" "<<f<<" "<<p;
//    return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     int *c=&a;
//     c=c+3;
//     cout<<c<<endl;
//    return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={4,2,3,6,8}; // {1,2,3,4} ouput -10
//     // int *p= (arr+1);
//     // int i=3;
//     // cout<<*arr +9<<endl;
//     //  //output 13
//     //  // arr[i]=*(arr+i);
//     //  // i[arr]=*(i+arr);
//     //  // arr means 0th index 

//     //  cout<<i[arr]<<endl;
//     //  cout<<*(i+arr)<<endl;

//     int a[20]={1,2,3,5};
//     cout<<&a[0]<<endl;
//     // cout<<&a<<endl;
//     // cout<<a<<endl;
//     // a=a+1; //error 
//     cout<<a<<endl;

//     int *p=&a[0];
//     // cout<<p<<endl;
//     // cout<<*p<<endl;
//     cout<<&p<<endl;
//     p=p+1; // ye apni memory location ko nahi extend kar rha ye a ki memory location ko extend kar rha hai aur 
//     // apni memory location ko extend nahi kar sakta bcs its error ;
//     cout<<p<<endl;
//    return 0;
// }
// jo bhi adress ka name hoga vo pahle block kp
// hi show karta hai 
// size of integer is 4 byte 
// adress of size of integer is 8 byte..... 
// 


// ***** character array ------>>>>>>

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={1,3,2,5,7};
//     char ch[19]="abufujfj";
//     cout<<arr<<endl; // ye arr adress deta hai 
//     cout<<ch<<endl; // ye ch entire content deta hai 
//     char *c=&ch[0];
//     // its print entire string 
//     // not address of 0th index like array 
//     cout<<c<<endl;
//    return 0;
// }


// // --->>>> Function in pointer 

// #include<iostream>
// using namespace std;
// void print(int *p){
//     cout<<*p<<endl;
//     // cout<<p<<endl;
// }
// int main()
// {
//     int v =5;
//     int *p=&v;
//     // cout<<print(p)<<endl;
//     print(p);
//    return 0;
// }


//  @@@@####$$$%%% DOUBLE POINTER -------->>>>

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=5;
//     int *ptr =&i;
//     int **ptr2=&ptr;
//     cout<<ptr<<endl; // kuch address
//     cout<<*ptr<<endl; // 5
//     cout<<*ptr2<<endl; // same as ptr
//     cout<<**ptr2<<endl; //5
//     cout<<&i<<endl;

//    return 0;
// }



