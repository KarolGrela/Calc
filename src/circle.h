#ifndef M_PI
#define M_PI 3.14
#endif

struct circle_t
{
    int x;
    int y;
    int r;

    float circumference;
    float area;
};

struct circle_t* init_circle_t(struct circle_t* _this, int x, int y, int r);

void print_circle_t(struct circle_t _this);

int get_x(struct circle_t _this);
int get_y(struct circle_t _this);
int get_r(struct circle_t _this);