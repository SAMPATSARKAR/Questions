#include <iostream>
using namespace std;
class solution{
    public:
    int arr[100];
    int n;
    int size;
    public:
    void InputArray(){
        cout<<"Enter size:- ";
        cin>>size;
        cout<<"Enter no to search:- ";
        cin>>n;
        cout<<"Enter array:- ";
        for(int  i= 0;i<size;i++){
            cin>>arr[i];
        }

    }
    bool linear(){
        int Isfound = 0;
        for(int i = 0 ;i<size;i++){
            if(n==arr[i]){
                Isfound = 1;
            }
        }
        return Isfound;
    };
};
int main(){
    solution x,y;
        x.InputArray();
        cout<<(x.linear()?"Matched":"Not Matched");
    cout<<endl;
    y.InputArray();
    cout<<(y.linear()?"Matched":"Not Matched");
    cout<<endl;

    return 0;
}