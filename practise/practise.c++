#include <iostream>
#include<cmath>
using namespace std;
class solution{
    public:
    int bin(int n){
        int i=0;
        int ans=0;
        while(n!=0){
            int bit = n&1;
            if(bit == 1){
                ans=ans+pow(2,i);
            }
            n=n/10;
            i++;
        }
        return ans;
    }
};
int main(){
    int n;
    cout<<"Enter a bin no:-"<<endl;
    cin>>n;
    solution x;
    int a = x.bin(n);
    cout<<"output:-"<<a<<endl;

}