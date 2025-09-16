#include <iostream>
#include<cmath>
using namespace std;
class solution{
    public:
    int bin(int n){
        int ans =0;
        int  i =0;
        while(n!=0){
            int bit = n&1;
            if(bit==1){
                ans = ans + pow(2,i);
            }
            n=n/10;
            i++;
    }
    return ans;

}
};
int main(){
    int n;
    cin>>n;
    solution x;
    int a = x.bin(n);
    cout<<a<<endl;

    return 0;
}