#include <stdio.h>

int cmp(int a,int b){
   if (a < b) {
          printf("Maior é = ");
            return b;
        } else if (a > b) {
          printf("Maior é = " );
            return a;
        } else {
          printf("Sao  iguais = " );
            return a;  // Se forem iguais, pode retornar qualquer um
        }

}
int get_greater_digit(int n ){

        int a=0;
        int b=0;
        int  maior=0;
        
        while (n != 0) {
            a = n % 10;  // Último dígito
            n = n / 10;  // Remove o último dígito
            
            // Verifica se ainda há um segundo dígito para comparar
            if (n != 0) {
                b = n % 10;  // Penúltimo dígito
                maior = cmp(a, b);  // Compara os dois dígitos
            }
        }
        

 
 return maior;
}


