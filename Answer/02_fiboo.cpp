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
// #include <iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     int  i =0;
//     int j =1;
//     cout<<i<<endl<<j<<endl;
//     for(int k =2 ;k <= n ; k ++){
//         int sum = i + j;
//         cout<<sum<<" "<<endl;
//         i=j;
//         j=sum;
//     }
// }
// ---------------------------
// // 
// -------------------q2------------------
// #include <iostream>
// using namespace std;
// class solution{
//     public:
//     int fibbo(int n){
//         //base cond
//         if(n==0){
//             return 0;
//         }
//         if(n==1){
//             return 1;
//         }
        
//         return fibbo(n-1)+fibbo(n-2);
//     }
// };
// int main(){
//     int n;
//     cout<<"Enter a num to find fibbonacci no:-";
//     cin>>n;
//     solution* x = new solution();//new soln creates an obj(soln) in heap and gives me the address.to call a method on the obj we use ->.And x is a pointer
//     int a = x->fibbo(n);
//     // int a = x.fibbo(n);
//     cout<<"Solution;- "<<a<<endl;
//     delete x;
//     x=nullptr;
// }
// ----------------------
// #include <iostream>
// using namespace std;
// class solution{
//     public:
//     void fibbo(int n){
//         int i =0;
//         cout<<i<<endl;
//         int j =1;
//             while(n!=0){
//                 int next = i+j;
//                 i=j;
//                 j=next;
//                 n--;
//                 cout<< i<<endl;
//             }

//     }
// };
// int main(){
//     int n;
//     cout<<"Enter a fibbo no:- "<<endl;
//     cin>>n;
//     solution* x = new solution();
//     x->fibbo(n);
// }