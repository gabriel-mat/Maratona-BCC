#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, somax, somay, somaz, x, y, z;

    somax = 0;
    somay = 0;
    somaz = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        x = 0;
        y = 0;
        z = 0;

        cin >> x >> y >> z;

        somax += x;
        somay += y;
        somaz += z;
    }

    if(somax == 0 && somay == 0 && somaz == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}