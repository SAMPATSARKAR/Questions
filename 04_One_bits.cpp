#include <iostream>
using namespace std;
class solution{
    public:
    int bits(int n){
        int count = 0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
};
int main(){
    int n;
    cin>>n;
    solution x;
    int a = x.bits(n);
    cout<< a <<endl;
}