#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, ans = 0, soma = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        string r;
        cin >> r[0] >> r[1] >> r[2];

        soma = (r[0] - '0') + (r[1] - '0') + (r[2] - '0');
        
        if (soma >= 2)
        {
            ans++;
        }

        soma = 0;
    }

    cout << ans;
    return (0);
}