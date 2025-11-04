#include "selfDefine.h"
void key01(){
    LCD_Init();

    P1_7 = 0;
    while(1){
    if (P1_3 == 0){
        DelayXms(20);
        while(P1_3 ==0) DelayXms(20);
        LCD_ShowString(1,0,"press  1-1");
        DelayXms(2000);
    } else {
        LCD_ShowString(1,0,"press NONE");
        DelayXms(20);
    }
        
    }
}