
#include <stdio.h>
#include <dlfcn.h>
#include "obj.h"

extern "C" void func();
extern "C" void callfn();
extern "C" void callfn2();

int main(int argc, char **argv) {
    func(); 
#ifdef DY_LOAD
    void *dp = dlopen("./libdy.so", RTLD_LAZY);
    typedef void (*callfn)();
    callfn f = (callfn) dlsym(dp, "callfn");
    f();
    func();
    dlclose(dp);
#else
    callfn();
    callfn2();
#endif
    return 0;
}

