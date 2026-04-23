#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i;
    while(true)
{
    i = get_int("Numero de veces ");
    if (i < 0){
     continue;
    }
    else {
        break;
    }
}

}

