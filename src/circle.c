#include "circle.h"
#include <math.h>
#include <stdio.h>

static void calc_circumference(struct circle_t* _this)
{
    _this->circumference = 2*M_PI*_this->r;
}

static void calc_area(struct circle_t* _this)
{
    _this->area = M_PI*pow(_this->r, 2);
}

struct circle_t* init_circle_t(struct circle_t* _this, int x, int y, int r)
{
    _this->x = x;
    _this->y = y;
    _this->r = r;

    calc_circumference(_this);
    calc_area(_this);

    return _this;
}

void print_circle_t(struct circle_t _this)
{
    printf("(%d; %d), radius = %d\n", _this.x, _this.y, _this.r);
    printf("circ.: %.3f\n", _this.circumference);
    printf("area: %.3f\n", _this.area);
}

int get_x(struct circle_t _this)
{
    return _this.x;
}
int get_y(struct circle_t _this)
{
    return _this.y;
}
int get_r(struct circle_t _this)
{
    return _this.r;
}

