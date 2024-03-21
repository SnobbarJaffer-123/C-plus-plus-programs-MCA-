#include<stdio.h>
#include "externVar.h"

//Making an extern variable
extern float extern_var;
int main()
{
    //print the variables from another file
    printf("%f",extern_var);
    return 0;
}
