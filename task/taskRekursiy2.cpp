#include <iostream>

using namespace std;
int i = 0;

int A(int m, int n){
    if(m == 0){
        return n+1;
    }
    else if(m > 0 && n == 0){
        return A(m-1,1);
    }
    else if(m > 0 && n > 0){
        return A((m-1), A(m,n-1));
    }
    return -1;
}



int main(){
    int n;
    int m;
    cin >> n;
    cin >> m;
    cout << A(2, 2);
}