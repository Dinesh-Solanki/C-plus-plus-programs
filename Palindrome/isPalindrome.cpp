#include <bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n= s.length();
    int start=0;
    int end=n-1;
    while(start<=end){
        if(s[start]==s[end]){
            start++;
            end--;
        }
        else{
            cout<<"False";
            return 0;
        }
    }
    cout<<"True";

    return 0;
}
