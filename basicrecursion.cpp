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

void printReverse(int i,int N){
    if(i>N){
        return;
    }
    printReverse(i + 1, N);
    cout << i << " ";
}

 
int main(){
    int n;

    cin >> n;
    // cout << "Printing numbers from 1 to N in increasing order : "<<endl;
    printTillN(1,n);
    cout << endl;
    // print(n);
    // cout << endl;
    // cout << endl;
    // cout <<"Printing in reverse order :"<<endl;
    // printReverse(1, n);
}