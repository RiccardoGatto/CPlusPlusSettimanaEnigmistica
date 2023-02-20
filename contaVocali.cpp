#include <iostream>
#include <string>
using namespace std;

int vocali(string word)
{
    int cont = 0;
    for (int i=0; i<word.length(); i++){
        if (word[i]=='a' or word[i]=='e' or word[i]=='i' or word[i]=='o' or word[i]=='u'){
            cont++;
        }
    }
    return cont;
}

int main()
{
    string parola;
    cout << "Inserisci una parola: ";
    cin >> parola;
    cout << "\nLe vocali inserite sono: " << vocali(parola);
}