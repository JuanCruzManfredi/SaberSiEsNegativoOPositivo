#include <stdio.h>
#include <conio.h>//llamada a las librerias 

float num;

main(){
    
    printf("\n   Ingrese un numero:\n   ");
    scanf ("%f", &num);
    
    
    
    if(num > 0){
        printf("\n  Numemero positivo...\n");
    }
    else{
        
        if(num < 0 ){
        printf("\n   Numero negativo...\n");
        }

        else{
        printf("   Cero es cero...\n");
        }
    }
}
