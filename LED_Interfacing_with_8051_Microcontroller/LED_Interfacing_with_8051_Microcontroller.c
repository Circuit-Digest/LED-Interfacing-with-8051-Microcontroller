#include <REGX52.h>
delay(unsigned int y){
    unsigned int i,j;
for(i=0;i<y;i++){
    for(j=0;j<1275;j++){}
}
} 
main(){
    while(1){
        delay(100);
        P1_0 = 0;
        delay(100);
        P1_0 = 1;
    }
}
