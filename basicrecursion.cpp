#include<iostream>
#include<vector>
using namespace std;

void printTillN(int i,int N){
    if(i>N){
        return;
    }
    cout <<i<< " ";
    printTillN(i + 1, N);
    
}

int main(){
    int n;

    cin >> n;
    printTillN(1,n);
}