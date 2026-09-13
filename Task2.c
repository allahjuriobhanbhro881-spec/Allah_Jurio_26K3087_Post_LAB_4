#include <stdio.h>

int main(){

    // Task 2
    int late_days;
    printf("Enter Late days: ");
    scanf(" %d", &late_days);

    if(late_days == 0){
        printf("No Fine\n");
    }
    else if(late_days >= 1 && late_days <= 5){
        printf("Fine: Rs. 50\n\n");
    }
    else if(late_days >= 6 && late_days <= 10){
        printf("Fine: Rs. 100\n\n");
    }
    else if(late_days > 10){
      printf("Fine: Rs. 200\n\n");
    }

    return 0;
}