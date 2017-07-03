#include <stdio.h>
#include <string.h>

bool areStringsPermutation(char* str1, char* str2);

int main(int argc, char** argv)
{

    bool result = false;

    if(argc < 3)
    {
        printf("Usage: ...\n");
        return -1;
    }

    result = areStringsPermutation(argv[1], argv[2]);

    printf("%s\n", result? "Strings are permutable": "Strings are not permutable");

    return 0;

}

bool areStringsPermutation(char* str1, char* str2)
{
    int i = 0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1 != len2)
        return false;
    else
    {
        int charsValue[128] = {0, }; //ASCII assumption

        for (i = 0; i < len1; i++)
        {
            charsValue[str1[i]]++; //Count the number of instaces each character is available in str1
        }

        for(i = 0; i < len2; i++)
        {
            charsValue[str2[i]]--;
            if(charsValue[str2[i]] < 0)
                return false;
        }
    }

    return true;

}

