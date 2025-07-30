
#include<bits/stdc++.h>

using namespace std;

int generate(int n,int k,int &count,string &str,vector<string> &result){
    if(n==k){
        result.push_back(str);
        count++;
        return count;
    }
    str[k] = '0';

    generate(n, k + 1,count, str, result);

    str[k] = '1';
    generate(n, k + 1,count, str, result);
    return count;
}


int main(){
    int n=5;
    string str(n,' ');
    vector<string> result;
    int count = 0;

    int c=generate(n, 0,count, str, result);
    for (auto &val:result){
        cout << val<<" ";
    }
    cout << endl;
    cout << c;
}