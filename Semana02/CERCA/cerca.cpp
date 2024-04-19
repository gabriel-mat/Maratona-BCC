#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, h, space;
    string seq1, seq2;

    //entrada
    cin >> n >> h;
    cin.ignore();
    getline(cin, seq1);


    //copia as alturas para a segunda string ignorando os espaços
    for(int i = 0; i < seq1.length(); i++)
    {
        if(seq1[i] != ' ')
        {
            seq2.push_back(seq1[i]);
        }
    }

    space = 0;

    //aumenta 2 unidades para quem tem uma altura maior que à cerca
    //aumenta 1 unidade para quem tem uma altura menor ou igual à cerca
    for(int a = 0; a < seq2.size(); a++)
    {
        if ((seq2[a] - '0' ) > h)
        {
            space++;
        }

        space++;
    }

    cout << space;

    return (0);
}