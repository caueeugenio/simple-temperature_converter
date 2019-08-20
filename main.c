#include <stdio.h>
#include <stdlib.h>

/*
Author: Cauê Eugênio
Date: 20/08/2019
Version: 1.0
*/

void celsius();
void fahrenheit();

int main(){
   int option;
   printf("\t\t\t\t+++ TEMPERATURE CONVERTER VERSION 1.0 +++\n\n");
   printf("Select[1] for converter Celsius in Fahrenheit\nSelect[2] for converter Fahrenheit in Celsius\n\n");
   printf("Write here: ");
   scanf("%i",&option);

   switch(option){ //switch start
        case 1:
            printf("\n[You select converter Celsius in Fahrenheit]\n\n");
            celsius();
            break;
        case 2:
            printf("\n[You select converter Fahrenheit in Celsius]\n\n");
            fahrenheit();
            break;
    } //switch end

}

void fahrenheit(){ //fahrenheit function start
    int fah, cel, repeat;
    printf("Insert the Fahrenheit temperature: ");
    scanf("%i",&fah);
    cel = (fah - 32) / 1.8; //this formula will converting Fahrenheit for Celsius
    printf("\nThe temperature in Celsius is %i-C\n\n",cel);
    printf("Do you want try again? Yes[1] No[2]: "); //here the code will verify if user intends continue
    scanf("%i",&repeat);
    if(repeat == 1){
        system("cls");
        main();
    }else{
        return 0;
    }

}//fahrenheit end

void celsius(){ //celsius function start
    int fah, cel, repeat;
    printf("Insert the Celsius temperature: ");
    scanf("%i",&cel);
    fah = cel * 1.8 + 32; //this formula will converting Celsius for Fahrenheit
    printf("\nThe temperature in Fahrenheit is %i-F\n\n",fah);
    printf("Do you want try again? Yes[1] No[2]: "); //here the code will verify if user intends continue
    scanf("%i",&repeat);
    if(repeat == 1){
        system("cls");
        main();
    }else{
        return 0;
    }
}//celsius function end
