#include "rectangle.h"
#include <math.h>
#include <stdio.h>

//////////////////////
// static functions //
//////////////////////
static void calc_circumference(struct rectangle_t* _this)
{
    _this->circumference = (2 * _this->a) + (2 * _this->b);
}

static void calc_area(struct rectangle_t* _this)
{
    _this->area = _this->a * _this->b;
}


//////////////////////
// global functions //
//////////////////////
struct rectangle_t* init_rectangle_t(struct rectangle_t* _this, int x, int y, int a, int b)
{
    _this->x = x;
    _this->y = y;
    _this->a = a;
    _this->b = b;

    calc_circumference(_this);
    calc_area(_this);

    return _this;
}

void print_rectangle_t(struct rectangle_t _this)
{
    printf("(%d; %d), a = %d, b = %d\n", _this.x, _this.y, _this.a, _this.b);
    printf("circ.: %.3f\n", _this.circumference);
    printf("area: %.3f\n", _this.area);
}

int rectangle_get_x(struct rectangle_t _this)
{
    return _this.x;
}

int rectangle_get_y(struct rectangle_t _this)
{
    return _this.y;
}

int rectangle_get_a(struct rectangle_t _this)
{
    return _this.a;
}
int rectangle_get_b(struct rectangle_t _this)
{
    return _this.b;
}