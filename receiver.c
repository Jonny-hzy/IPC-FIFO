/*
 * @Source: https://github.com/Jonny-hzy/IPC-FIFO
 * @LastEdit: 2024-04-30
 * @FilePath: \FIFO\receiver.c
 * @Description: fifo接收端
 */
#include <stdio.h>

#include "fifo.h"



int main(void)
{
    char buf[64] = {};
    int i = 0;
    int ret = 0;

    fifo_init();
    while (i++ < 10) {
        ret = fifo_read(buf, sizeof(buf));
        if (ret > 0) {
            printf ("fifo read(%02d): %s\n", i, buf);
        }
        sleep(1);
    }
    fifo_deinit();
    return 0;
}