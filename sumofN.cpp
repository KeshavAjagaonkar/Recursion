#include<iostream>
using namespace std;
int sumofN(int N){
    int sum = 0;
    if(N==1){
        return 1;
    }
    sum = N+sumofN(N - 1);
    return sum;
}
int main(){
    int n;

    cin >> n;
    int result = sumofN(n);
    cout << result << endl;
}