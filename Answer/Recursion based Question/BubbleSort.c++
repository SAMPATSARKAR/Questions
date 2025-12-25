#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int *arr,int size){
    if(size == 0){
        return;
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }

    }
    BubbleSort(arr,size-1);

};
int main(){
    int arr[5]={3,6,8,2,0};
    BubbleSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}