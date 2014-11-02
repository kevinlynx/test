
#include <stdio.h>

extern "C" void func();

extern "C" void callfn2() {
    printf("callfn2\n");
    func();
}

