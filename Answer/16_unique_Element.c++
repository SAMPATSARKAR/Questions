#include <iostream>
using namespace std;
class solution{
    public:
    int unique(int arr[],int size){
        int a = 0;
        for(int i = 0 ; i <size;i++){
            a = a^arr[i];
            cout<<a<<endl;
        }
        return a;
    };
};
int main(){
    int arr[7]={1,1,4,2,3,3,2};
    solution* x = new solution();
    int a = x->unique(arr,7);
    cout<<"Unique number is:- "<< a <<endl;
}