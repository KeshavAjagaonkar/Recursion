#include<bits/stdc++.h>

using namespace std;
vector<vector<int>>valid;
void generate(vector<int>&num,vector<int>&ds,int sum,int i){
   if(i==num.size()){
    if(sum==2){
       valid.push_back(ds);
    }
    return;
   }
   ds.push_back(num[i]);
   sum = sum + num[i];
   generate(num, ds, sum, i + 1);
   ds.pop_back();
   sum -= num[i];
   generate(num, ds, sum, i + 1);
}

int main(){
    int n =2;
    vector<int> num = {1, 2, 1};
    vector<int> ds;
    // generate(s, n, n);
    generate(num, ds, 0, 0);
    for(auto &row:valid){
        for(int &val:row){
            cout << val << " ";
        }
        cout << endl;
    }
    }