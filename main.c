#include "../cli/src/my_zxing_wrapper.h"
#include <stdio.h>
#include <malloc.h>
int main(int argc, char* argv[])
{
    const char* filename="/home/lvguidong/testqr/bg.jpg";
    char databuff[1024] = {0};
    int ret = get_qrcode_wrapper(filename, databuff);
    printf("ret:%d data:%s\n", ret, databuff);

    return 0;
}