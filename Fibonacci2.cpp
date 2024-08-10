#include <iostream>
 
int fibonacci(int n)                            
{                                         
if (n==1 || n==2 ) return 1;                                   
else return fibonacci(n-1) + fibonacci(n-2);}                                         
  void fibonacci( int n, int *m)
{ int i, a=1, Aux;

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
            *m = Aux;}}}
int main(){
	int n;
		scanf("%d", &n);
		printf("%d\n", fibonacci(n));}
