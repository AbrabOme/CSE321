#include <stdio.h>
#include <string.h>

int main() {

    char s[50];
    printf("Enter your Email: ");
    scanf("%s", s);
    int len = strlen(s);
    int outdatedFlag = 0;
    int okFlag = 0;
    int diffFlag = 0;
    int invalidFlag = 0;
    
    
    for (int i = 0; i < len; i++){
        if (strchr(s, '@') != NULL) {
            if (strstr(s, "kaaj.com") != NULL) {
                outdatedFlag = 1;
            }
            else if (strstr(s, "sheba.xyz") != NULL) {
                okFlag = 1;
            }
            else {
                diffFlag = 1;
            }
        } else {
            invalidFlag = 1;
        }
    }
    
    if (outdatedFlag == 1) {
        printf("Email address is outdated.\n");
    }
    
    if (okFlag == 1) {
        printf("Email address is ok.\n");
    }
    
    if (diffFlag == 1) {
        printf("Different Email Address.\n");
    } 
    
    if (invalidFlag == 1) {
        printf("Invalid Email Address.\n");
    } 
    
    
}
