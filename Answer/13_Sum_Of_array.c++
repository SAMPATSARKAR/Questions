#include <iostream>
using namespace std;
class solution{
    public:
    int summ(int *arr,int size){
        int sum=0;
        for(int i =0;i<size;i++){
            sum+=arr[i];
        }
        return sum;
    };
};
int main(){
    int size;
    cout<<"enter size:- ";
    cin>>size;
    int arr[100];
    for(int i = 0 ; i < size;i++){
        cin>>arr[i];
    }
    solution x;
    cout<<"Sum of array is:- "<<x.summ(arr,size)<<endl;

}