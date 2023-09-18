#include <stdio.h>

#include "circle.h"
#include "rectangle.h"

int main()
{
    puts("Hello World");
    
    struct circle_t c1;
    init_circle_t(&c1, 9, -6, 2);
    print_circle_t(c1);
    
    struct rectangle_t r1;
    init_rectangle_t(&r1, 1, 2, 4, 9);
    print_rectangle_t(r1);

    return 0;
}