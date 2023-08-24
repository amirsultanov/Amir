#include <iostream>
#include <algorithm>
#include <array>
#include <vector>

using namespace std;

int main(){
    string s;
    cin>> s;
    const vector<char> v = {'A','O','Y','E','U','I','a','o','y','e','u','i'};
    for(int i = 0; i<s.size(); ++i ){
        if(find(v.begin(),v.end(),s[i]) != end(v)){
            s.erase(s.begin()+i);
            i--;
            continue;
        }
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
        cout << s[i];
        s.insert(s.begin()+i, '.');
        ++i;

    }
    cout << s;
    return 0;
}