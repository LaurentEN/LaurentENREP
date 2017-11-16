#include "checkSum.h"

int checkSum(int *a, int *b) {
    if(sizeof(a) != sizeof(b))
        return 1;
    else if(sizeof(a) == sizeof(b)) {
        int size = sizeof(a);
        for(int i = 0; i < size; i++) {
            if(a[i] != b[i])
                return 1;
        }
        return SUMS_EQUAL;
    }
}
