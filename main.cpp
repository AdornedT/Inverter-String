/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<bits/stdc++.h>


int main()
{
    char str[1024];
    char aux;

    do{
    printf("Escreva a string que deseja inverter. A string deve ser continua, tudo apos um espaco sera ignorado.\n");
    scanf("%s", &str);
    }while(str == NULL); //Deixa prosseguir apenas se o usuário escreveu algo.

    for(int i = 0; i < strlen(str)/2; i++)
    {
        aux = str[i];
        str[i] = str[strlen(str) - 1 - i];
        str[strlen(str) - 1 - i] = aux;
    }

    printf("Sua string invertida: %s", str);

    return 0;
}
