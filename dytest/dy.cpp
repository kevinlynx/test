
#include "obj.h"

extern "C" void func();
extern void mfunc();

extern "C" void callfn() {
    mfunc();
    printf("callfn\n");
    func();
}

