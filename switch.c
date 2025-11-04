#include "./selfDefine.h"

void pressLedOn(){
    while(1){
        if (P3_0 == 0){
            P2_0 = 0;
        } else {
            P2_0 = 1;
        }
    }
}


void swithControlLed(){
	// 按下松开以后，LED灯的状态取反
	while(1){
		if(P3_0 == 0){
			DelayXms(20);
			if (P3_0 == 0){
				// 如果一直按下不松开，灯的状态不会改变，
				// 在while里面等着，一直到松开灯的状态改变.检测松手
				while(P3_0 == 0);
				P2_0 = ~P2_0;
			}
		}
	}
}

void Led2Bitmoving(){
    // 2^8 = 256 ====> unsigned char
    unsigned char num = 0;
    while(1) {
        if (P3_0 == 0){
            DelayXms(20);
            if(P3_0 == 0){
                while(P3_0 == 0);
                num++;
                // 按位取反这里非常巧妙
                P2 = ~num;
            }
        }
    }
}

void keyControlLedLightRight(){
    unsigned char ledNum = 0;
    P2 = 0xfe;
    while(1){
        if (P3_0 ==0){
            DelayXms(20);
            while(P3_0 == 0);
            // 松手的延时很容易忘记
            DelayXms(20);
            ledNum++;
            if (ledNum == 8){
                ledNum = 0;
            }
            // 按位取反这里非常巧妙,这里不能使用++ledNum
            // 如果这样的话，就会导致第一个灯永远不亮
            P2 = ~(0x01 << ledNum);
        }

        if (P3_1 ==0){
            DelayXms(20);
            while(P3_1 == 0);
            DelayXms(20);
            // 负数出现
            if (ledNum == 0){
                ledNum = 7;
            } else{
                ledNum--;
            }
            // 按位取反这里非常巧妙
            P2 = ~(0x01 << ledNum);
        }
    }
    
}