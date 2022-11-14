#include<stdio.h>
#include<string.h>
void main(){

    char str[50];
    printf("Enter string: ");
    scanf("%[^\n]", str);
    printf("String = %s\n", str);
    int count = 0;
    for(int i=0; i< strlen(str);i++){
    	if(str[i] != ' '){
    		count++;
    	}
    }
    printf("character count = %d\n", count);
    
}

