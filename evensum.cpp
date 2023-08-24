#include<iostream>
#include<vector>
using namespace std;
bool even(int n){
    if(n==0 or n%2==0){
        return true;
    }else{
        return false;
    }
}
int main(){
    int size;
    cin>>size;
    vector<int>v;
    for(int i=0;i<size;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    int sum=0;
    for(int i=0;i<v.size();i++){
        if(even(v[i])){
            sum+=v[i];
        }
    }
    cout<<sum;
    return 0;
}