#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void urlifyString(char** string, int trueLen, int bufLen);

int main(int argc, char** argv)
{
    bool result = false;
    char* str;
    
    str = (char *)calloc(100, 1); //allocate 100 bytes more than i/p string
    //ToDo: error check for calloc
    
    sprintf(str, "This is Dhruval Shah");
    
    urlifyString(&str, strlen(str), 100);

    printf("URLified sting is: %s\n", str);

    for (int i = 0; i < strlen(str); i++)
        printf("%c : %d\n", str[i], str[i]);

    return 0;
}

void urlifyString(char** string, int trueLen, int bufLen)
{
    int bufIndex = bufLen;
    char* myStr = *string;

    printf("entering into func\n");

    for(int i = trueLen; i >= 0; i--)
    {
        if(myStr[i] != ' ')
        {
            //Copy the char at the end of the buf
            myStr[bufIndex--] = myStr[i];
            printf("%c", myStr[bufIndex+1]);
        }
        else
        {
//            printf("Replacing space\n");
            myStr[bufIndex--] = '0';
            myStr[bufIndex--] = '2';
            myStr[bufIndex--] = '%';
            printf("%c%c%c", myStr[bufIndex+1], myStr[bufIndex+2], myStr[bufIndex+3]);
        }
    }
  
    printf("\nbufIndex = %d\n", bufIndex);

    *string = &myStr[bufIndex+1];

    return;
}



