#include <stdio.h>
int main (){
    int age , tech , mot, jeux, sas ;
    age = 18 ;
    tech = 1 ;
    mot = 0 ;
    jeux = 1 ;
    sas = 1 ;
if (age>=18 && age<=35 )
{
    if ((tech || mot) && jeux)
    {
        printf("next step  to sas \n");
        if (sas)
        {
            printf("youcode");
        }else{
            printf("no youcode");

        }
    }else{
        printf(" sas is not good ");
    }
    
}else{
    printf("age is not good");
}
    return 0 ;
}
