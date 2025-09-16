#include <iostream>
using namespace std;
class solution{
    public:
    int isPrime = 1;
        int prime(int n){
            for(int i =2;i<n;i++){
                if(n%i==0){
                    isPrime = 0;
                }
                
            }
            return isPrime;
        }
} ;

int main(){
    cout<<"Enter a number  ";
    int n;
    cin>>n;
    solution x;

    int a = x.prime(n);
    if(!a){
        cout<<n<<" Is Not Prime"<<endl;
    }else{
        cout<<n<<" Is a prime"<<endl;
    }


    return 0;
}