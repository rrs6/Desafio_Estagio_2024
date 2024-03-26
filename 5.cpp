#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Digite a palavra que você quer inverter: " << '\n';
    string s; cin>>s;
    string invert = "";
    for(int i = s.length()-1; i >= 0; i--)
        invert += s[i];
    cout << "A string invertida é: " << invert << '\n';
    return 0;
}