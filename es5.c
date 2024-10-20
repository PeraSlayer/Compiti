#include <stdio.h>
#define N_INPUT 5
int main(){
    float n;
    int contatore_pos =0, contatore_neg=0;
    float ris_pos=0, ris_neg=0, ris_all=0;

    puts("inserisci 5 numeri:");
    

    //controllo ogni input inserito dall' utente, se e' positivo aumenta contaore_pos
    // e aggiungo l' input a ris_pos e viceversa con i numeri negativi
    //infine aggiungo il numero a ris_all
    scanf("%f",&n);
    if(n>0){
        contatore_pos++;
        ris_pos += n;
    }else{
        contatore_neg++;
        ris_neg += n;
    }
    ris_all+=n; 
    
//____________________________________________________________________
    scanf("%f",&n);
    if(n>0){
        contatore_pos++;
        ris_pos += n;
    }else{
        contatore_neg++;
        ris_neg += n;
    }
    ris_all+=n; 
//____________________________________________________________________
    

        scanf("%f",&n);
    if(n>0){
        contatore_pos++;
        ris_pos += n;
    }else{
        contatore_neg++;
        ris_neg += n;
    }
    ris_all+=n; 
//____________________________________________________________________
    

        scanf("%f",&n);
    if(n>0){
        contatore_pos++;
        ris_pos += n;
    }else{
        contatore_neg++;
        ris_neg += n;
    }
    ris_all+=n; 
//____________________________________________________________________
   
git
        scanf("%f",&n);
    if(n>0){
        contatore_pos++;
        ris_pos += n;
    }else{
        contatore_neg++;
        ris_neg += n;
    }
    ris_all+=n; 
    

    //calcolo le medie
    ris_all = ris_all/N_INPUT;
    ris_neg = ris_neg/contatore_neg;
    ris_pos = ris_pos/contatore_pos;

    printf("media totale = %f\n",ris_all);
    printf("media dei positivi = %f\n",ris_pos);
    printf("media dei negativi = %f\n",ris_neg);

    return 0;

}