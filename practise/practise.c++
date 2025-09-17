#include <iostream>
#include <cmath>
using namespace std;
class solution{
    public:
    int compliment_base10(int n){
        int m = n;
        int bit=0;
        while(m!=0){
        bit = (bit<<1)|1;
        m=m>>1;
        }
        int digit = (~n)&bit;
        return digit;
    }
    };
int main(){
    int n;
    cout<<"Enter decimal to get compliment:- ";
    cin>>n;
    solution* x = new solution();
    int a = x->compliment_base10(n);
    cout<<"compliment is:- "<<a<<endl;
}