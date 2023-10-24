#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int pivotedindex=s+cnt; // placed p at right position
    swap(arr[pivotedindex],arr[s]);
    // left and right wala sabhalte hai
     int i=s,j=e;
            while(i<pivotedindex&&j>pivotedindex){
                while(arr[i]<pivot){
                    i++;
                }
                while(arr[j]>pivot){
                    j--;
                }
                if(i<pivotedindex && j>pivotedindex){
                    swap(arr[i++],arr[j--]);
                }
        }
        return pivotedindex;     
}    

void quicksort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }
    // partition karana hai
    int p=partition(arr,s,e); // partition ko calll mara 
    // left part sort karo
    quicksort(arr,s,p-1);
    // right wala part sort karo
    quicksort(arr,p+1,e);
    
}
int main()
{
    int arr[6]={2,4,1,6,9,0};
    int n=6;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

   return 0;
}