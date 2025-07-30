#include<iostream>
#include<string>
#include<vector>
#include<set>

using namespace std;

void removeduplicates(string &str,set<string>&ans,int i){
    if(i==str.size()){
        return;
    }
    // ans.insert();
}

int main(){
    string str = "appanacollege";
    set<string> ans;
    removeduplicates(str, ans,0);
    for(auto val: ans){
        cout << val << " ";
    }
}