#include<stdio.h>
#include<string.h>

int main()
{

    char str[]= "my_name_is_edcast_future_skills"; // Input String is feed in the variable

    int len = strlen(str); // The total number of character present in string is calculated

    for(int sep= 0;sep<=len;sep++)    // sep is variable to separate the string
    {
        if(str[sep]=='_')               // if delimeter is detected the string will break and print from next line.
            {printf("\n");
                sep = sep+1;}
       printf("%c",str[sep]);           // print of string without delimeter.
    }

}
