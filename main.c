#include <stdio.h>

/* programma che ripetutamente legge un intero e stampa un messaggio
 * che informa l'utente se l'intero e' positivo o negativo. Il programma
 * termina quando l'utente inserisce il numero 0 */
int main() {
      int numero;               // il numero da leggere
      do {
            printf("Inserisci un intero!\n");
            scanf("%d", &numero);
            if(numero>0)
                  printf("POSITIVO!\n\n");
            if(numero<0)
                  printf("NEGATIVO!\n\n");
      }
      while(numero!=0);

      printf("ADIOS!\n");
      system("PAUSE");
}
