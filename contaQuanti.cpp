#include <iostream>
#include <string>
using namespace std;
int contaOccorrenze(string word, char c)
{
    int cont = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == c)
        {
            cont++;
        }
    }
    return cont;
}

void occorrenze(string word)
{
    string appoggio = "";
    int i = 0;
    while (i < word.length())
    {
        if (appoggio.find(word[i])==-1)
        {
            cout << word[i] << " e' contenuto " << contaOccorrenze(word, word[i]) << " volta/e\n";
            appoggio= appoggio + word[i];
            }
        i++;
    }
}

int main()
{
    string parola;
    cout << "Inserisci una parola: ";
    cin >> parola;
    occorrenze(parola);
}