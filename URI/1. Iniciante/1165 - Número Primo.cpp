// Problem: 1165 - Número Primo (https://www.urionlinejudge.com.br/judge/pt/problems/view/1165)

#include <cmath>
#include <iostream>
  
using namespace std;
  
bool ehPrimo(int n)
{
    if(n == 2 || n == 3) 
        return true;
  
    if(n == 0 || n == 1 || n % 2 == 0) 
        return false;
  
    for(int i=2; i<=sqrtf(n); i++)
    {
        if(n % i == 0) 
            return false;
    }
  
    return true;
}
  
int main()
{
    int a = 0;
  
    cin >> a;
  
    for(int i = 0; i < a; i ++)
    {
        int numero = 0;
        cin >> numero;
  
        if (numero < 0) 
            numero *= -1;
  
        if(ehPrimo(numero)) 
            cout << numero << " eh primo" << endl;
        else
            cout << numero << " nao eh primo"<< endl;
    }
    return 0;
}
