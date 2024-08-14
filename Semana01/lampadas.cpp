#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int a,b,n;
    a = 0;
    b = 0;

    cin >> n;
    
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        int k = s[i] - '0'; 

        if (k == 1 )
        {
            if (a==0)
            {
                a = 1;
            }else{a = 0;};
            
        }

        if (k == 2)
        {
            if (a==0)
            {
                a = 1;
            }else{a = 0;};

            if (b==0)
            {
                b = 1;
            }else{b = 0;};
        }
    }
    
    cout << a << endl;
    cout << b << endl;

    return 0;
}