
#include <stdio.h>
#include <stdint.h>


typedef int8_t I8;
typedef int16_t I16;
typedef int32_t I32;
typedef int64_t I64;

typedef uint8_t U8;
typedef uint16_t U16;
typedef uint32_t U32;
typedef uint64_t U64;

typedef size_t Usize;



struct Node
{
    Connection *incoming_connections;
    U32 connection_count;
    float bias;
};

struct Connection
{
    Node *from;
    Node *to;
    float weight;
};


// feedforward network
struct Network
{
    Node *nodes;
    U64 node_count;
    Connection *connections;
    U64 connection_count;
};



int main(int argc, const char *argv[])
{
    printf("all0\n");
    return 0;
}