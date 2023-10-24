#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    while(m--){
        int n;
        cin>>n;
        int arr[n];
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            ans^=arr[i];
        }
        if(ans==0){
            cout<<0<<endl;
        }
        else{
            if(n%2==0){
                cout<<-1<<endl;
            }
            else{
               cout<<ans<<endl; 
            }
        }
    }
   return 0;
}