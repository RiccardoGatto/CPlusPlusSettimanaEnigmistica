#include <iostream>
#include <string>
using namespace std;

string rovescia (string word){
    string rov="";
    for (int i=word.length()-1; i>=0; i--){
        rov += word[i];
    }
    return rov;
}

int main()
{
    string parola;
    cout << "Inserisci una parola: ";
    cin >> parola;
    cout << "\nLa parola inserita, al contrario, e': " << rovescia(parola);
}