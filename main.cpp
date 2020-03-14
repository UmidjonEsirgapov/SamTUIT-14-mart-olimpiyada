#include <iostream>
using namespace std;
int main(){
    int s, n, a;
    double sum;
    cin >> n >> s >> a;
    if(s / a == n){
        cout << n << " " << a;
    }
    else
    {
        cout << -1;
    }
    
    return 0;
}