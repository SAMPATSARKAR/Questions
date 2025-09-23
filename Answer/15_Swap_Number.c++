#include <iostream>
#include <string>
using namespace std;
class solution{
    public:
    void swap1(int* arr,int size){
        int start = 0;
        int end = size-1;
        while(start<=end){
            swap(arr[start],arr[end]);

            start++;
            end--;
        };
    };   
};
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    solution x;
    x.swap1(arr,size);
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}