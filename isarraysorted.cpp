#include<iostream>
#include<vector>

using namespace std;

bool isSorted(vector<int>&v,int i){
    //base case 
    if(i==v.size()-1){
        return true;
    }
    //some work to be done 
    if(v[i]<=v[i+1])
    {
        return isSorted(v, i + 1);
    }
    else{
        return false;
    }
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

    bool result = isSorted(array, 0);
    cout<< result;
}