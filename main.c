/**
* auther: jamal-jiang
* date: 17/2/11
*/

#include <stdio.h>
#include <string.h>
#include "common/zmalloc.h"
#include "common/sds.h"

int main(int argc, char *argv[]) {
    char *fb = sdsnewlen("aaa", 3);
    printf("%s\n", fb);
    printf("%zu\n", sdslen(fb));
    return 0;
}
