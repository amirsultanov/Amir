#include <iostream>

using namespace std;

int main(){
    string s;
    cin>> s;
    string a = "YES";
    for(int i=0; i<s.size()/2; ++i){
        if(s[i] != s[s.size()-1-i]){
           a = "NO";
           break;
        }
    }
    cout<< a;
}