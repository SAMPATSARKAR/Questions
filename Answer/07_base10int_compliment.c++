#include <iostream>
using namespace std;
class solution{
    public:
    int base_10_compliment(int n){
        int m=n;
        int mask=0;
        int ans = 0;
        while(m!=0){
            mask = (mask<<1)|1;
            m=m>>1;
        }
        ans = (~n)&mask;
        return ans;
    }
};
int main(){
    cout<<"enter a number:-"<<" ";
    int n;
    cin>>n;
    solution x;
    int a = x.base_10_compliment(5);
    cout<<"Ans:-"<<a<<endl;
}