#include<bits/stdc++.h>
using namespace std;

int main(){
    // repetition
    string s;
    cin>>s;
    int ans = 1;
    int count = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if(s[i] == s[i-1]){
            count++;
            ans = max(count, ans);
        }
        else{
            
            count = 1;
        }
    }
    cout<<ans;
    
}