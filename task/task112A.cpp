#include <iostream>

using namespace std;

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    for(int i=0; i<a.size(); ++i){
        if(a[i]<97){
            a[i] +=32;
        }
        if(b[i]<97){
            b[i] +=32;
        }
    }
    if(a<b){
        cout<< -1;
    }
    else if(a>b){
        cout<< 1;
    }
    else{
        cout<< 0;
    }
    
    return 0;
}