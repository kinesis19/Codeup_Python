#include <stdio.h>
#include <string.h>

int main(){

    char name[5] = {'\0', };
    scanf("%s", name);

    if(strcmp(name, "NLCS") == 0){
        printf("North London Collegiate School");
    }else if(strcmp(name, "BHA") == 0){
        printf("Branksome Hall Asia");
    }else if(strcmp(name, "KIS") == 0){
        printf("Korea International School");
    }else if(strcmp(name, "SJA") == 0){
        printf("St. Johnsbury Academy");
    }

    return 0;
}