#include "selfdefine.h"

void operationLCD(){
     LCD_Init();
     // LCD_ShowChar(1,1,'A');
     // 第一个参数是第一行显示，第二个参数是开始的位置，第三个是显示的内容
     // LCD_ShowString(1,0,"Niu Xiao Dong");
     // LCD_ShowString(2,2,"185 0085 2240");
     // LED 闪烁显示姓名和电话号码
     while(1){
         LCD_ShowString(1,0,"Tel:Niu Xiaodong");
        LCD_ShowString(2,2,"185 0085 2240");
         
         DelayXms(500);
         LCD_Init();
         DelayXms(800);
         
     }
}