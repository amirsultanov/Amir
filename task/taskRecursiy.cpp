#include <iostream>

using namespace std;
// Добро пож 4^5  4^4*4 a^n-1*a 
int pow(int a, int n){
    if(n == 1){
        return a;
    }
    return pow(a,n-1)*a;
}

int main(){
    cout<< pow(4,5);
    return 0;
}