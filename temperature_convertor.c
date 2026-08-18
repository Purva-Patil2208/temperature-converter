#include <stdio.h>
#include <ctype.h>

int main(){
    
    printf("==============================\n");
    printf("Temperature conversion program\n");
    printf("==============================\n");
    
    char unit;
    double temp;

    printf("enter unit (F) or (C): ");
    scanf("%c", &unit);
    unit = toupper(unit);
    
    if(unit == 'C'){
        printf("enter the temperature in celsius:");
        scanf("%lf", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("the temperature in farenheit is %lf F\n",temp);
    }
    else if(unit == 'F'){
        printf("enter the temperature in farenheit:");
        scanf("%lf", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("the temperature in celsius is %lf C\n",temp);
    }
    else{
        printf("enter valid input!!\n");
    }
    return 0;
}