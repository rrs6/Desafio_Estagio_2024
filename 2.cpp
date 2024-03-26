#include <bits/stdc++.h>
using namespace std;
#define lli long long int

const int max_size = 10000;
vector<lli> fib(max_size);
int main() {
    int n;
    cout << "Qual número você quer saber se está na sequência de Fibbonnaci ?" << '\n';
    cin>>n;
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i < max_size; i++)
        fib[i] = fib[i-1] + fib[i-2];
    cout << "A sequência fibonnaci é: ";
    bool find = false;
    for(int i = 0; i < max_size; i++){
        if(fib[i] == n)
            find = true;
        cout << fib[i] << ' ';
    }
    cout << '\n';
    cout << "O número " << n << (find ? " pertence" : " não pertence") << " a sequência de fibonnaci.";
}