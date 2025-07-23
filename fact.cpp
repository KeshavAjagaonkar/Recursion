#include<iostream>
using namespace std;
int fact(int N){
    if(N==1){
        return 1;
    }
    return N * fact(N - 1);
}
int main(){
    int n;

    cin >> n;
    int result = fact(n);
    cout << result;
}