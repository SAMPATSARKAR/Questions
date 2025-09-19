#include <iostream>
using namespace std;
class solution{
    public:
    int isEven = 1;
    int Even(int n){
        if(n&1){
            isEven = 0;
        }
        return isEven;
    }

};
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    solution* x = new solution();
    int a = x->Even(n);
    if(!a){
        cout<<"Odd"<<endl;
    }else{
        cout<<"Even"<<endl;
    }


    return 0;
}