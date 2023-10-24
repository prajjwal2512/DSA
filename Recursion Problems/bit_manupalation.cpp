// 1--GET bit
// esme ek perticuler number ki binary form di hue hoti hai phir koi position deker puchate haiki waha one hoga ya zero
// binary form ki posistioning left side se hoga with zero inedex...
// this is left shift operator << 
// if n=0101 suppose we need to get bit at position ,i=2;
// 1<<i = 0100; left shift operator ek value left shift ker deta hai 
// then finally we take 0101 & 0100 = 0100

// #include<iostream>
// using namespace std;

// int getBit(int n,int pos){
//     return((n &(1<<pos) !=0));
// }
// int main()
// {
//     cout<<getBit(5,2)<<endl; // we have taken binary of 5 with position 2;;; (5,2) indicate 
//     // output is 1 because binary of 5 is 0100 and 2nd position per ka left shift operator use karne per like 
//     // n=0101 & 0100 = 0100 second position per 1 hai .....
//    return 0;
// }


//2-- Set Bit operaor....
// set bit operatore ka matlab meko position diya hoga aur number di hogi  set bit karne ka matlab hua us position per meko 1 lagaana
// hai aur unset bit a matalab us position per meko zero lagani hai ..
// n=5=0101 suppose we need to set bit at position , i=1;
// 1<<i =0010;
// then take or operator 
// 0101 | 0010= 0111;
// 0101 | 0100 = 0101 if we take position 2 then ansewer is 5
// so output is 7 because when we convert 0111 in decimal form it's give --- 7


// #include<iostream>
// using namespace std;

// int setbit(int n, int pos){
//     return(n |(1<<pos)); // 1<<pos suppose position is 1 then we will apply left shift operator at position 1
// }
// int main()
// {
//     cout<<setbit(5,1)<<endl;
//    return 0;
// }


// 3 -- Clearbit operator 
// eska matalab hame jis position per bola gya hai waha ke bit ko 0 karni hai matalab clear karna hai 
// take a binary number n=5=0101
// take left shift operator suppose we have taken position i= 2
// 1<<i = 0100;
// after taken left shift operator that number then take  compliment of this binary number ~0100= 1011
// then after take and operator of both binary number 
// 0101 & 1011= 0001
// 0 ho gya hai 2nd position ka 

// #include<iostream>
// using namespace std;
// int clearbit(int n, int pos){
//     int mask = ~(1<<pos);
//     return ( n& mask);
// }
// int main()
// {
//     cout<<clearbit(5,2)<<endl; //0101 & 1011= 0001 convert decimal the value is 1 this is output....
//    return 0;
// }


//4-- Update bit ....
// esme hamko position di hue hoti hai aur ye bhi bola hua hota hai ki kisme update karni hai 1 me 0 me 
// eske liye meko us position ke bit ko clear karna hoga hoga to same procedure follow hoga jo 
// clear birt me hua tha phal us position ka left shift operator phir uska complment phir take and of both
// phir set bit ka procedure follow karna hoga usi postion ke liye jo clearbit follow karle aaya tha 

// because updatebit operator is combination of clearbit and setbit ---

// suppose we need to update bit at position ,i=1 to 1;
// 1<<i=0010
// ~0010=1101
// 0101 &1101=0101
// 1<<i= 0010
// 0101 | 0010=0111 convert decimal ouput is 7

// #include<iostream>
// using namespace std;

// int updatebit(int n,int pos,int value){ // value meko user se leni hai kisme convert karna hai 0 or 1
//     int mask = ~(1<<pos); // follow clearbit
//     n=n&mask;
//     return( n| (value<<pos)); // follow setbit..

// }
// int main()
// {
//     cout<<updatebit( 5, 1,1) << endl;
//    return 0;
// }