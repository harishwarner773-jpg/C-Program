#include <stdio.h>
 
    void mycalc(int num1,int num2){
        
        printf("Addition:%d\n",num1+num2);
        printf("Subraction:%d\n",num1-num2);
        printf("Multiplication:%d\n",num1*num2);
        printf("Division:%d\n",num1/num2);
        printf("Remainder:%d\n",num1%num2);

    }

int main() {
    mycalc(55,55);
   

    return 0;
}
