#include "selfDefine.h"
#include <stdio.h>
int sec_1 = 1 * 1000; 
void clean(){
    P0 = 0x00;
    DelayXms(5);
}
void show_0(int sec){
    P0 = 0x3f;
    DelayXms(sec);
    clean();
}

void show_1(int sec){
    P0 = 0x06;
    DelayXms(sec);
    clean();
}

void show_2(int sec){
    P0 = 0x5b;
    DelayXms(sec);
    clean();
}

void show_3(int sec){
    P0 = 0x4F;
    DelayXms(sec);
    clean();
}

void show_4(int sec){
    P0 = 0x66;
    DelayXms(sec);
    clean();
}

void show_5(int sec){
    P0 = 0x6D;
    DelayXms(sec);
    clean();
}

void show_6(int sec){
    P0 = 0x7D;
    DelayXms(sec);
    clean();
}

void show_7(int sec){
    P0 = 0x07;
    DelayXms(sec);
    clean();
}

void show_8(int sec){
    P0 = 0x7F;
    DelayXms(sec);
    clean();
}

void show_9(int sec){
    P0 = 0x6f;
    DelayXms(sec);
    clean();
}


void staticDigitalShow(){
    // 译码器选中第五位
    P2_4 = 1;
    P2_3 = 0;
    P2_2 = 1;
    // 显示6 就是需要acdefg点亮 0x 0111 1101
    P0 = 0x7D;


    while(1){
    //下面是随便的测试
    P2_4 = 1;
    P2_3 = 0;
    P2_2 = 0;
    /*
    码段需要位置是反的，从右往左
    1000    1001    1010    1011    1100    1101    1110    1111    
     8       9       10      11      12      13      14      15
     8       9        A      B       C       D       E       F
        abcd efgdp
    0   1111 1100   cf
    1   0110 0000   06
    2   1101 1010   AD
    3   1111 0010   2F
    4   0110 0110   66
    5   1011 0110   6B
    6   1011 1110   EB
    7   1110 0000   0E
    8   1111 1110   EF
    9   1111 0110   6F
    */
    // 显示6 就是需要acdefg点亮 0x 0111 1101
    show_0(sec_1);
    show_1(sec_1);
    show_2(sec_1);
    show_3(sec_1);
    show_4(sec_1);
    show_5(sec_1);
    show_6(sec_1);
    show_7(sec_1);
    show_8(sec_1);
    show_9(sec_1);
    }
}