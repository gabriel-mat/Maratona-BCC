#include <iostream>
#include <list>
#include <string>
using namespace std;


int main(){
    int n, count;
    string seq;

    cin >> n;
    cin >> seq;

    for(int i = 0; i < n - 1; i++)
    {
        if (seq[i] == seq[i+1])
        {
            count++;
        }    
    }

    cout << count;
    return (0);
}