#include <iostream>
#include <string>
using namespace std;

bool palindroma(string word)
{
    int i = 0;
    int y = word.length() - 1;
    bool cond = false;
    while (i < y)
    {
        if (word[i] == word[y])
        {
            cond = true;
        }
        i++;
        y--;
    }
    return cond;
}

int main()
{
    string parola;
    cout << "Inserisci una parola: ";
    cin >> parola;
    (palindroma(parola)) ? cout << "La parola inserita e' palindroma" : cout << "La parola inserita non e' palindroma";
}