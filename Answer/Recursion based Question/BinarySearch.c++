#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int *arr,int size,int s,int e,int target){
    if(s>e){
        return 0;
    }
    int mid = s +(e-s)/2;

    if(arr[mid]==target){
        return mid;

    }
    

    if(arr[mid] > target){
        return BinarySearch(arr,size,0,mid-1,target);
    }else{
        return BinarySearch(arr,size,mid+1,e,target);
    }

};
int main(){
    int size = 8;
    int arr[size]={1,4,7,9,23,25,44,66};
    cout<<BinarySearch(arr,size,0,8,0)<<endl;
}