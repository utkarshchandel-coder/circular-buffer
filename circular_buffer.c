
#include "circular_buffer.h"

void cbuffer_initialize(circular_buffer *cbuffer)
{
    cbuffer->write_index = 0;
    cbuffer->read_index = 0;
}

void cbuffer_put(circular_buffer *cbuffer, uint8_t data)
{
cbuffer->buffer[cbuffer->write_index++] = data;
}

uint8_t cbuffer_get(circular_buffer *cbuffer)
{
    return cbuffer->buffer[cbuffer->read_index++];
}

uint8_t cbuffer_data_available(circular_buffer *cbuffer)
{
    return (cbuffer->write_index - cbuffer->read_index);
}