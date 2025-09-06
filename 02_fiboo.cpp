// -------------Recursion----------
// #include <iostream>
// using namespace std;
// int fibo(int x){
//     //base condn
//     // cout<<x<<" ";
//     if(x==0){
//         return 0;
//     }
//     if(x==1){
//         return 1;
//     }
//     return fibo(x-1)+fibo(x-2);

// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<"ans:-"<<fibo(n)<<endl;

// }
// -------------Normal------------
#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int  i =0;
    int j =1;
    cout<<i<<endl<<j<<endl;
    for(int k =2 ;k <= n ; k ++){
        int sum = i + j;
        cout<<sum<<" "<<endl;
        i=j;
        j=sum;
    }
}