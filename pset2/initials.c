#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<cs50.h>

// main funtion: returns int; no input arg
int main(void)
{
    //get user's name; handle NULL input
    string name = GetString();
    if (name != NULL) 
    {
        //print first initial in CAPS
        printf("%c", toupper(name[0]));
        //loop through name
        for (int i = 0, n = strlen(name); i < n; i++)
        {
            //find next name/arg
            if (name[i] == ' ' && name[i + 1] != '\0')
            {
                printf("%c", toupper(name[i + 1]));
            }
        }
        printf("\n");
    }
}


/*
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<cs50.h>

int PrintInitials(void);


// main funtion: returns int; no input arg
int main(void)
{
    int n = PrintInitials();
    printf("\n");
}

//function gets user name, extracts initials, converts to CAPS
int PrintInitials(void)
{
    //get user's name; handle NULL input
    string name = GetString();
    if (name != NULL) 
    {
        //print first initial in CAPS
        printf("%c", toupper(name[0]));
        //loop through name
        for (int i = 0, n = strlen(name); i < n; i++)
        {
            //find next name/arg
            if (name[i] == ' ' && name[i + 1] != '\0')
            {
                printf("%c", toupper(name[i + 1]));
            }
        }
        printf("\n");
    }
}
*/