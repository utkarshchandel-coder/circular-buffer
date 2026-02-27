#include <stdio.h>
#include "circular_buffer.h"

int main() {

    circular_buffer test_buffer;
    volatile uint8_t data = 0;
    

    cbuffer_initialize (&test_buffer);
   
    cbuffer_put (&test_buffer, 10);

    cbuffer_put (&test_buffer, 20);

    data = cbuffer_get(&test_buffer);
    printf("Data: %d\n", data);

    data = cbuffer_get(&test_buffer);
    printf("Data: %d\n", data);

    return 0;
}   