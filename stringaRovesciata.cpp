#include <iostream>
#include <string>
using namespace std;

string rovescia(string word)
{
    string rov = "";
    for (int i = word.length() - 1; i >= 0; i--)
    {
        rov += word[i];
    }
    return rov;
}

string rovescia2(string word)
{
    int y = word.length() - 1;
    char app;
    for (int x = 0; x <= y; x++)
    {
        app = word[x];
        word[x] = word[y];
        word[y] = app;
        y--;
    }
    return word;
}
/*
string rovesciaRic(string word, int i)
{
    if (i == -1)
    {
        return word;
    }
    else
    {
        if (i == 0)
        {
            return to_string(word[0]);
        }
        else
        {
            return word[i] + rovesciaRic(word, i--);
        }
    }
}
*/
int main()
{
    string parola;
    cout << "Inserisci una parola: ";
    cin >> parola;
    cout << "\nLa parola inserita, al contrario, e': " << rovescia2(parola);
    // cout << "\nLa parola inserita, al contrario, e': " << rovesciaRic(parola, parola.length()-1);
}