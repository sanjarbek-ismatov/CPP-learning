#include<stdio.h>
#include<string.h>
int main(){
    char firstName[] = "Sanjarbek";
    char lastName[] = "Ismatov";
    char fullName[sizeof(firstName) + sizeof(lastName) + 2];
    sprintf(fullName, "%s %s", firstName, lastName);
    printf("%s\n", fullName);
    char cpp[17] = "C++";
    char word1[] = "programming";
    char temp[sizeof(word1) + 2] = " ";
    strcat(cpp, strcat(temp, word1));
    printf("%s\n", cpp);
    return 0;
}