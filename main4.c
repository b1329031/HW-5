#include <stdio.h>
#include<math.h>
int main() {
    int i = 12345, sum = 0;
    int num1 = i%10, num2 = (i/1000)%10;
    for(int x = 0; x < 5; x++){
        if(!(x == 0 || x == 3)){
            printf("add+%f\n", (i%10)*pow(10,x));
            sum += (i%10)*pow(10,x);
            printf("sum:%d\n",sum);
        }
        i/=10;
    }
    printf("%d", sum+num2+num1*1000);
    return 0;
}
