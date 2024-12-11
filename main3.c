#include <stdio.h>
int main() {
    for(int x = 0; x<81; x++){
        printf("%d*%d=%d%c",x/9+1,x%9+1,(x/9+1)*(x%9+1),(x+1)%9 == 0?'\n':'\t');
    }
    return 0;
}
