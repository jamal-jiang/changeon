#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include "sds.h"
#include "zmalloc.h"

sds sdsnewlen(const void *init, size_t initlen) {
    struct sdshdr *sh;

    sh = zmalloc(sizeof(struct sdshdr) + initlen + 1);
    if (NULL == sh) {
        return NULL;
    }
    sh->len = initlen;
    sh->free = 0;

    if (init && initlen) {
        memcpy(sh->buf, init, initlen);
    }
    sh->buf[initlen] = '\0';
    return (char*) sh->buf;
}