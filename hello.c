#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Greet User
    string name = get_string("What's your name: ");
    printf ("hello, %s" , name);

}