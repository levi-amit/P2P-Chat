
#ifndef IN_LIBPRINT
    #define IN_LIBPRINT
    #include "include/libprint.h"
#endif

char* hello = "Hello!";

int main(void)
{
    print(hello);
    return 0;
}
