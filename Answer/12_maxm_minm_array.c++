#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

class solution{
    public:
    int maxm(int array[],int size){
        int max = INT_MIN;
        for(int i = 0 ; i < size;i++){
            if(array[i]>max){
                max = array[i];
            }
        }
        return max;
    };

    int minm(int array[],int size){
        int min = INT_MAX;
        for(int i = 0 ; i < size;i++){
            if(array[i]<min){
                min = array[i];
            }
        }
        return min;
        
    };
};





int main(){

    int size;
    cout<<"Enter the size:- ";
    cin>>size;
    int arr[100];
    for(int i =0 ;i < size ; i++){
        cout<<"Enter the numbers upto size - "<<size-i<<" ";
        cin>>arr[i];
    }
    solution x;
    cout<<"Maxm is:- "<<x.maxm(arr,size)<<endl;
    cout<<"Minm is:- "<<x.minm(arr,size)<<endl;


}