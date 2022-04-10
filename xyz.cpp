#include <stdio.h>

int main() {

     int i=0;
     double notes[] = {100,50,20,10,5,2},coins[] = {1,0.5,0.25,0.10,0.05,0.01};
     double amount;
     scanf("%lf",&amount);
     printf("NOTAS:\n");
     while(i<6){
         int no_of_notes = amount/notes[i];
         //printf("%lf\n",amount);
         amount = amount - no_of_notes*notes[i];
         //printf("%lf\n",amount);
         printf("%d nota(s) de R$ %.2f\n",no_of_notes,notes[i]);

         i++;
     }
     i=0;
     //printf("\n%lf\n",amount);
     printf("MOEDAS:\n");
     while(i<6){
         //printf("%lf\n",amount);
         //printf("%f\n",coins[i]);
         int no_of_coins = amount/coins[i]*1.0;

         //printf("%d\n",no_of_coins);
         amount = amount - no_of_coins*coins[i];
         if (no_of_coins<0){
            no_of_coins = 0;
         }
         printf("%d moeda(s) de R$ %.2f\n",no_of_coins,coins[i]);
         //printf("%f\n",amount);
         i++;
     }
    return 0;
}