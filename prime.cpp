#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter a number"<<endl;
    cin>>n;

    for(i=2;i<n;i++) {
        if (n%i==0){
            cout<<"it's not a prime number"<<endl;
            break;
        }
        else{
            cout<<"it's a prime number"<<endl;
        }

    }
    return 0;


    }
