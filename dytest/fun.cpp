
#include <stdio.h>

#ifdef V2
extern "C" void func() {
    printf("func v2\n");
}
#elif V3
extern "C" void func() {
    printf("func v3\n");
}
#else
extern "C" void func() {
    printf("func v1\n");
}
#endif


