#include "uls.h"

int mx_ret_num_len(int num, int count) {
    if (num == 0) {
        if (count == 0)
            return 1;
        return count;
    }
    return mx_ret_num_len(num / 10, count + 1);
}
