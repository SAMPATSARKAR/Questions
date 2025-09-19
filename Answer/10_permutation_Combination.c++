#include <iostream>
using namespace std;
class solution{
    public:
    int factorial(int x){
        if(x<=1){
            return x;
        };
        return x*factorial(x-1);
    };
    int permutation(int n,int r ){
        int ans = factorial(n)/factorial(r)*factorial(n-r);
        return ans;
    };
    int combination(int n,int r){
        int ans = factorial(n)/factorial(n-r);
        return ans;
    };

};
int main(){
    char n;
    cout<<"Enter p or c for permutation or combination:- ";
    cin>>n;
    int y;
    cout<<"Enter total number of items :- ";
    cin>>y;
    int z;
    cout<<"Enter total no to choose :- ";
    cin>>z;

    solution* x = new solution();
    if(tolower(n)=='p'){
        int a = x->permutation(y,z);
        cout<<"Permutation is:- "<<a<<endl;
    }else{
        int b = x->combination(y,z);
        cout<<"Combination is:- "<<b<<endl;
    };
}