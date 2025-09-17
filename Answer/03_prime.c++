// #include <iostream>
// using namespace std;
// class solution{
//     public:
//     int isPrime = 1;
//         int prime(int n){
//             for(int i =2;i<n;i++){
//                 if(n%i==0){
//                     isPrime = 0;
//                 }
                
//             }
//             return isPrime;
//         }
// } ;

// int main(){
//     cout<<"Enter a number  ";
//     int n;
//     cin>>n;
//     solution x;

//     int a = x.prime(n);
//     if(!a){
//         cout<<n<<" Is Not Prime"<<endl;
//     }else{
//         cout<<n<<" Is a prime"<<endl;
//     }


//     return 0;
// }
// -------------------new version--------------
// #include<iostream>
// using namespace std;
// class solution{
//         public:
//         int isPrime = 1;
//         int prime(int n){
//             if(n<=1) return 0;// zero are 1 are not prime
//             for(int i =2 ;i <n ;i++){
//                 if(n%i==0){
//                     isPrime=0;
//                 }

//             }
//             return isPrime;

//         }
// };
// int main(){
//     int n;
//     cout<<"Enter a number:- ";
//     cin>>n;
//     solution* x = new solution();
//     int a = x->prime(n);
//     if(!a){
//         cout<<"Not a prime"<<endl;
//     }else{
//          cout<<"is a prime"<<endl;
//     }
//     delete x;
//     x= nullptr;
// }