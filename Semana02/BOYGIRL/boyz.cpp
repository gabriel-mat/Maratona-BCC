#include <bits/stdc++.h>
using namespace std;

int main(){
    bool find;
    string nome;
    vector<char> diferentes;

    cin >> nome;
    diferentes.push_back(nome[0]);
    
    for(int i = 0; i < nome.length(); i++)
    {
        find = false;

        for(int j = 0; j < diferentes.size(); j++)
        {
            if(diferentes[j] == nome[i])
            {
                find = true;
                break;
            }
        }

        if(!find)
        {
            diferentes.push_back(nome[i]);
        }
    }


    if(diferentes.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
    
    return (0);
}