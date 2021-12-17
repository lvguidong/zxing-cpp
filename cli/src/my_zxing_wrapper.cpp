#include "my_zxing_wrapper.h"
#include <stdio.h>
#include "my_zxing.h"
int get_qrcode_wrapper(const char* filename, char*databuff)
{
    return get_qrcode(filename, databuff);
}

