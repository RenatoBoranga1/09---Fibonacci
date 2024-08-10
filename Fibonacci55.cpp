#include <iostream>

using namespace std;

int fibonacci(int n);
int main(){
	
int n;
cout << "" ;
cin >> n;
printf("%d", fibonacci(n+1));
}

int fibonacci(int n)
{
    int cont;
    int x = 0, z = 1;
    
    if(n % 2 == 0)
    {
        for(cont = 2; cont != n; cont = cont + 2)
        {
            x = x + z;
            z = x + z;
        }
        return z;
    }
    else
    {
        for(cont = 1; cont != n; cont = cont + 2)
        {
            x = x + z;
            z = x + z;
        }
            return x;
    }
}
