#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "");
    int cont=0, ap=1;


    printf("Contagem dos Apartementos 0 a 20\n");

        for(cont=1; cont<=20; cont++){
                 if (cont == 13)
                continue;
                printf( "APARTAMENTO %d\n", cont);
                 }

    system("pause");

    printf("\ncontagem REGRESSIVA\n");

        //CONTAGEM REGRESSIVA
        for(cont=20; cont>=1; cont--){
            if(cont == 13)
            continue;
        printf("APARTAMENTO %d\n", cont);
}
    system("pause");

            //while

            printf("\nCOMANDO WHILE\n");

            while  (cont <20){
                cont ++;
                if ( cont == 13){
                     continue;
                }

                printf( "APARTAMENTO %d\n", cont);
                 }

    system("pause");


    //Comando DO WHIlE

            printf("COMANDO Do WHILE\n");

            do{
                if ( ap == 13){
                    ap++;
                     continue;
                }
                printf("APARTAMENTO %d\n",ap);
                ap++;
            }while
                (ap<=20);
}

















