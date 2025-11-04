
#include "./selfDefine.h"


void main(){
    int num=10;
	// 先闪烁10次。然后常亮
	/*
	int i =0;
	
	while(1){
		if (i > 9) {
			lightOneLed(LED_LIGHT_ALWAYS);
		} else {
			flickerOneLed(LED_LIGHT_ONCE);
			i++;
		}
	}
	*/
	// 流水灯 方式一
	//movingLightDisplay1();
	// movingLightDisplay2();
	
	// 按下点亮，松开灯灭
	// pressLedOn();
	
	// 按下取反
	// swithControlLed();
	
	//LED 二进制移位
	// Led2Bitmoving();
    
    // 按键控制LED 左移右移
    // keyControlLedLightRight();
    
    
    // 操作数码管
    //      静态显示
    // staticDigitalShow();
    /*while(1){
        showNumV2(1, 1);
        DelayXms(1);
        showNumV2(2, 2);
        DelayXms(1);
        showNumV2(3, 3);
        DelayXms(1);
    }

    return;
    while(num--){
        showNumV2(1, num);
        DelayXms(500);
        if (num ==0){
            num=10;
        }
    }
    */
    
    // 操作 LCD1602
    //  operationLCD();
    key01();
    
    

	
}