#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=0,b=1,c,n;
    cin>>n;
    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    for(int i=0;i<n-2;i++){
        c=a+b;
        v.push_back(c);
        a=b;b=c;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        return 0;
    }
}
//This is an program that is used to demonstrate the fibonacci series upto the given value