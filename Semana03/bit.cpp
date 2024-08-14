#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, value = 0;
    string op;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> op; 
        if(op[1] == '+'){
            value++;
        }else if (op[1] == '-')
        {
            value--;
        }
    }
    
    cout << value;
    
    return 0;
}