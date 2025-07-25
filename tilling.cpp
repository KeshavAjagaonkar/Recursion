#include<iostream>
using namespace std;

int tilling(int n){
    if(n==0 || n==1){
        return 1;
    }
    return tilling(n - 1) + tilling(n - 2);
}

int main(){
    int n;
    cin >> n;
    cout<<tilling(n)<<endl;
}