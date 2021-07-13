#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "test.h"

set_type cfg_para;


void ch_view(void)
{
    printf("Channel: %d\n", cfg_para.channel); // channel 출력
}

int main(void)
{

    while (1)
    {
        /* code */
        printf("Hello World~\n"); // 출력 테스트
        printf(STR_TEST);         // 출력 테스트 2

        if (cfg_para.onoff)
        {
            // printf("Channel: %d\n", cfg_para.channel); // channel 출력

            ch_view();
            printf("Volum  : %d\n", cfg_para.volum);   // volum 출력
        }
    }

    return 0;
}