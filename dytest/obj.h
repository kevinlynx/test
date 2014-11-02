
#include <stdio.h>
#include <string>

class Object {
public:
    Object() {
#ifdef DF
        s = malloc(32);
        printf("s addr %p\n", s);
#endif
        printf("ctor %p\n", this);
    }

    ~Object() {
        printf("dtor %p\n", this);
#ifdef DF
        printf("s addr %p\n", s);
        free(s);
#endif
    }

    void *s;
};

extern Object g_obj;



