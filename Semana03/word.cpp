#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;
    string matriz[n][20];

    for(int i = 0; i < n; i++){
        string aux;
        cin >> aux;

        if(aux.length() > 10){
            aux = aux[0];
        }

        matriz[i][0] = aux;
    }

    for (int i = 0; i < n; i++)
    {
        cout << matriz[i][0] << endl;
    }
    
    return 0;
}