#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the number:";
    cin>>x;
    if(x%2==0){
        cout<<x<<" is even";
    }
    else if(x%2!=0){
        cout<<x<<" is odd";
    }
    return 0;
}
