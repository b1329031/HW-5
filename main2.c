#include <stdio.h>
int main() {
    int x = 130658;
    double pi = 0;
    for(int i = 1; i<=x; i++){
        if(i%2 == 0){
            pi -=1.0*4/(1+2*(i-1))*1.0;
        }else{
            pi +=1.0*4/(1+2*(i-1))*1.0;
        }
    }
    printf("pi:%.5f x:%d\n",pi, x);
    return 0;
}
