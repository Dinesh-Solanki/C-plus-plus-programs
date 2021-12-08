#include <bits/stdc++.h>

using namespace std;


//Function to reverse a given number

int reverse_num(int num){
    int rev = 0;
    while(num != 0){
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

bool palindrome(int num){
    return num == reverse_num(num);
}


int main(){
    int num;
    cin>>num;
    cout<<palindrome(num)<<endl;
    return 0;
}
