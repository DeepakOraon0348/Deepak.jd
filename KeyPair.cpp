#include<iostream>
#include <algorithm>
#include<math.h>
#include <cstdlib>

using namespace std;

// bool poir(int arr[],int x,int n){
//     sort(arr,arr+n);
//     int l=0;
//     int h=n-1;
//     while(l<=h)
//     {
//         int sum=arr[l]+arr[h];
//         if(sum==x){
//             return true;
//         }
//         else if(sum>x){
//             h--;
//         }
//         else{
//             l++;
//         }
//     }
//     return false;
// }

int PivetElement(int arr[],int n){
    int lsum=0;
    int Rsum=0;
    int l=0;
    int h=n-1;
    while(l<=h){
        lsum=lsum+arr[l];
        Rsum=Rsum+arr[h];
        if(lsum==Rsum){
            int a=arr[l+1];
            return a;
        }
        else if(lsum>Rsum){
            h--;
        }
        else{
            l++;
        }
    }
    return -1;
}
void sortColour(int arr[],int n){
    int l=0;
    int h=n-1;
    //  sort(arr,arr+n);
    //  for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    //  }
    while(l<h){
        if(arr[l]==0){
            l++;
        }
        else if(arr[l]==2){
            swap(arr[l],arr[h]);
            h--;
        }
        else{
            l++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void sortNagativeNo(int arr[],int n){
    int l=0;
    int i=0;
    int h=n-1;
    while(l<=h){
         if(arr[l]<0){
            l++;
         }
         else if(arr[h]>0){
            h--;
         }
         else{
            swap(arr[l],arr[h]);
         }
    }
}

int Dublicate(int arr[],int n){
    for(int i=0;i<n;i++){
        int index=labs(arr[i]);
        //already visite?
        if(arr[index]<0){
            return index;
        }
        arr[index]*=-1;
    }
    return -1;
}
int main(){
    // int arr[]={1,4,45,5,10,8};
    // int x=16;
    // int n=6;
    // bool ans=poir(arr,x,n);
    // cout<<ans;
    // int arr[]={1,7,3,6,5,6};
    // int n=6;
    // int ans=PivetElement(arr,n);
    // cout<<ans;


    // int arr[]={2,0,2,1,1,0};
    // int n=6;
    // sortColour(arr,n);

    // int arr[]={1,2,-3,4,-5,6};
    // int n=6;
    // sortNagativeNo(arr,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    // int arr[]={1,3,4,2,1};
    // int n=5;
    // int ans=Dublicate(arr,n);
    // cout<<"dublicate element="<<ans;


    
}