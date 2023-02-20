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
 bool palindroma(string word){
    return (word==rovescia(word));
 }

int main()
{
    string parola;
    cout << "Inserisci una parola: ";
    cin >> parola;
    (palindroma(parola)) ? cout << "La parola inserita e' palindroma" : cout << "La parola inserita non e' palindroma";
}