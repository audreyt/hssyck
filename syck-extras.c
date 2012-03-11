#include <syck.h>

int syck_str_style( SyckNode *n )
{
    ASSERT( n != NULL );
    return n->data.str->style;
}

