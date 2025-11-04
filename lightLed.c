#include "./selfDefine.h"

void lightOneLed(LED_LIGHT_TYPE type){
	if (type == LED_LIGHT_ALWAYS) {
		P2 = 0xFE;
		while(1);
	} else {
		P2 = 0xFE;
		Delay100ms();
		P2 = 0xFF;
	}

}

void flickerOneLed(LED_LIGHT_TYPE type){
	if (type == LED_LIGHT_ONCE){
		P2 = 0xFE;
		Delay100ms();
		P2 = 0xFF;
		Delay100ms();
	} else {
		while(1){
			// P2 定义在#include <REGX52.H>
			P2 = 0xFE;
			Delay100ms();
			// Delay1000ms();
			P2 = 0xFF;
			Delay100ms();
			// Delay1000ms();
		}
	}

}

void movingLightDisplay1(){
	while(1){
		// A	B	C	D	E	F
		// 10	11	12	13	14	15
		P2 = 0xFE; // 1111 1110
		Delay100ms();
		P2 = 0xFD; // 1111 1101
		Delay100ms();
		P2 = 0xFB; // 1111 1011
		Delay100ms();
		P2 = 0xF7; // 1111 0111
		Delay100ms();
		P2 = 0xEF;	// 1110 1111
		Delay100ms();
		P2 = 0xDF;	//1101 1111
		Delay100ms();
		P2 = 0xBF;	// 1011 1111
		Delay100ms();
		P2 = 0x7F;	// 0111 1111
		Delay100ms();
	}
}

void movingLightDisplay2(){
	int i;
	while(1){
		for(i = 0; i < 8;i++){
			// 为什么取反？ 
			// 移位以后右边要补0，
			// 0xFE --> 1111 1110 左移一位变成 1111 1100 这种是不满足需求的，它最终需要变成1111 1101
			// 0xFD --> 1111 1101	
			// 所以要从0000 0001 开始左移，以后取反
			P2 = ~(0x01<<i);
			DelayXms(1000);
		}
	}
}