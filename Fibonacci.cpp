#include <iostream>

void fibonacci(long int n, long int *m);

int main()
{
    long int n, m=1;
    scanf("%ld", &n);
    fibonacci(n,&m);
    printf("%ld ", m);
    return 0;
}


void fibonacci(long int n, long int *m)
{long int i, a=1, Aux;

    if(n==1){
        *m = 1;}
    else if (n==2){
        *m = 1;}
    else if (n==0){
        *m = 0;}
    else{
        for(i = 3; i <= n; i++){
            Aux = a + *m;
            a = *m;
            *m = Aux;}
    }
}
