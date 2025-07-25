#include<iostream>
#include<vector>

using namespace std;
//finding first occurance 
int find(vector<int>&v , int key,int i){
    //base case
    if(i==v.size()){
        return -1;
    }
    if(v[i]!=key){
        return find(v, key, i + 1);
    }
    else{
        return i;
    }
}

// finnding last occurance
int findlast(vector<int>&v,int key,int i){
    if(i==v.size()){
        return -1;
    }
    int isFound = findlast(v, key, i + 1);
    if(isFound !=-1){
        return isFound;
    }
    if(v[i]==key){
        return i;
    }
    return -1;
}

//finding power simple recursion not optimized one 

int power(int x,int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return x;
    }
    return x * power(x, n - 1);
}
int main(){
    int n;
    cin >> n;
    int x;
    vector<int> array;
    for (int i = 0; i < n;i++){
        cin >> x;
        array.push_back(x);
    }
    // int index=findlast(array, 5, 0);
    // cout << index << endl;
    int raised;
    cin >> raised;
    int ans = power(1,raised);
    cout << ans;
}