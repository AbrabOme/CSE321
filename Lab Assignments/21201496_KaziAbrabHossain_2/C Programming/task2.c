#include <stdio.h>


int perfect_num(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    return sum == n;
}

int main(){
    int start, end;
    printf("Enter start interval: ");
    scanf("%d", &start);
    printf("Enter end interval: ");
    scanf("%d", &end);
    for(int i = start; i <= end; i++){
        if(perfect_num(i)){
            printf("%d\n", i);
        }
    }
    return 0;
}
