#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h, altura;
    cin >> n >> h;
    
    vector<int> alturas;

    for (int i = 0; i < n; i++)
    {
        cin >> altura;
        alturas.push_back(altura);
    }

    int space = 0;

    for (int i = 0; i < n; i++)
    {
        if(alturas[i] > h){
            space++;
        }

        space++;
    }
    
    cout << space;
    return 0;
}