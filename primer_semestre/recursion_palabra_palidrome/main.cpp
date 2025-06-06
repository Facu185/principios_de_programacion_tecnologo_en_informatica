//Programa que retorna true una palabra contenida en una arreglo char es palindrome.
#include <stdio.h>
#include <string.h>
//Funcion que retorna true una palabra contenida en una arreglo char es palindrome.
bool esPalindrome(char palabra[], int inicio, int largo);

main(){
    char palabra[]="oso";
    int inicio=0; 
    int largo=strlen(palabra);
    bool res;
    res=esPalindrome(palabra, inicio, largo-1);
    if(res==1){
        printf("La palaba '%s' es palindrome.", palabra);
    }else{
        printf("La palaba '%s' no es palindrome.", palabra);
    }
}

bool esPalindrome(char palabra[], int inicio, int largo){
   if(inicio>=largo){
        return true;
    }
    if(palabra[inicio]==palabra[largo]){
        return true && esPalindrome(palabra, inicio+1, largo-1);
    }else{
        return false;
    }
}