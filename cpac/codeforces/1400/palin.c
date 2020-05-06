#include <stdio.h>  
#include <stdbool.h>  
#include <string.h>  
   
bool isPalindrome(char a[]){  
    bool flag = true;  
    for(int i = 0; i < strlen(a)/2; i++){  
        if(a[i] != a[strlen(a)-i-1]){  
            flag = false;  
            break;  
        }  
    }  
    return flag;  
}  
   
int main()  
{
    int t;
    scanf("%d",t);
    while(t--)
    {
        int n;
        cin>>n;
        char string[];
        scanf("%s",string);
        char words[100][100], smallPalin[100], bigPalin[100];  
        int i = 0, j = 0, k, length, count = 0;  
          
        for(k=0; string[k]!='\0'; k++){  
            if(string[k] != ' ' && string[k] != '\0'){  
                words[i][j++] = tolower(string[k]);  
            }  
            else{  
                words[i][j] = '\0';  
                i++;  
                j = 0;  
            }  
        }  
        length = i+1;  
          
        for(int i = 0; i < length; i++){  
            if(isPalindrome(words[i])){  
                  
                count++;  
                if(count == 1){  
                    strcpy(smallPalin, words[i]);
                }  
                  
                else{  
                    if(strlen(smallPalin) > strlen(words[i]))  
                        strcpy(smallPalin, words[i]);  
                }  
            }  
        } 
        printf("%s\n", smallPalin);
    }
      
    return 0;  
}  