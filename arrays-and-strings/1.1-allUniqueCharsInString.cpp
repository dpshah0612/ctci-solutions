#include <stdio.h>
#include <string.h>

bool allUniqueCharsInString(char* string);

int main(int argc, char** argv)
{
    bool result = false;

    if(argc < 2)
    {
        printf("Usage: ./<executable_name> <some string>\n");
        return -1;
    }
    else
    result = allUniqueCharsInString(argv[1]);

    printf("ALl chars in string are %s\n", result ? "Unique":"Not Unique");

    return 0;
}

bool allUniqueCharsInString(char* string)
{
    
    /* Use the string character(in integer form) as array index to count
    number of time it appeared in the string */

    int charCount[128] = {0, }; //Considering ASCII character set
 
    if(string == NULL)
        return false; 
    
    int length = strlen(string);

    for (int i = 0; i < length; i++)
    {
        if(charCount[string[i]])
            return false; //The count is already 1 and we hit the another char so we bail out
        else
            charCount[string[i]]++;
    }

    return true; //If we reach here means we never hit repeated chars so all chars in strings are unique
}


