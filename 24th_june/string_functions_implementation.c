#include <stdio.h>

int string_length(char *str){
    int length = 0;
    while(*str != '\0'){
        length++;
        str++;
    }
    return length;
}


int string_compare(char *str1,char *str2)
{
    int len = sizeof(str1)/sizeof(char);
    if(len != sizeof(str2)/sizeof(char)){
        return 1;
    }
    for(int i=0;i<len;i++){
        if(str1[i] == str2[i]){
            return 1;
        }
    }
    return 0;
}

void string_copy(char *str1,char *str2)
{
    int len = sizeof(str1)/sizeof(char);
    for(int i=0;i<len;i++){
        str2[i] = str1[i];
    }
}

int main()
{
    char *str1 = "sanath";
    char *str2 = malloc(sizeof(str1));;
    
    int length = string_length(str1);
    printf("Length of string is %d\n",length);
    
    string_copy(str1,str2);
    printf("String is : %s\n",str1);
    printf("Copied string is : %s\n",str2);
    
    char *str3 = "sanath_sb";
    if(string_compare(str1,str3) == 0)
    {
        printf("String matched\n");
    }
    else
    {
        printf("Strings do not match\n");
    }
    return 0;
}
