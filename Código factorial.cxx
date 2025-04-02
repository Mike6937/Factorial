//calcular facotorial
#include <stdio.h>

long long factorial(int n){
    long long resultado = 1;
    for( int i=2; i<=n; i++){
        resultado *= i;
    }
    return resultado;
}
int main(){
    int num;
    printf("Ingrese numero:");
    scanf("%d",&num);
    printf("El factorial de %d es:%11d\n",num, factorial(num));
           return 0;
}