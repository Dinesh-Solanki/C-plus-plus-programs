bool checkPalindrome(long long N)
{
    string s="";
    while(N>0){
        int t = N%2;
        s=s+to_string(t);
        N=N/2;
      }
    string rev = "";
    for(int i=s.length()-1; i>=0; i--){
        rev = rev + s[i];  
    }
    s=rev;
    int n=s.length();
    int start=0;
    int end=n-1;
    while(start<=end){
        if(s[start]==s[end]){
            start++;
            end--;
        }
        else{
            return 0;
        }
    }
    return 1;
}
