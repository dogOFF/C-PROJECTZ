#include <stdio.h>
#include <math.h>
int math(int num1, int num2, char sign){
    int result;
    if(sign == '/'){
    result = (num1 / num2);
    } else if(sign == '*'){
    result = (num1 * num2);
    } else if(sign == '+'){
    result = (num1 + num2);
    } else if(sign == '-'){
    result = (num1 - num2);
    }
    return result;
}
int main(){
    int num1;
    int num2;
    char sign[4] = {'*', '/', '+', '-'};
    int signNum;
    printf("NUM1: ");
    scanf("%d", &num1);
    printf("NUM2: ");
    scanf("%d", &num2);
    printf("0 = *\n1 = /\n2 = +\n3 = -\n");
    scanf("%d", &signNum);
    printf("Answer: %d", math(num1, num2, sign[signNum]));
    return 0;
}