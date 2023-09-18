struct rectangle_t
{
    int x;
    int y;
    int a;
    int b;

    float circumference;
    float area;
};

struct rectangle_t* init_rectangle_t(struct rectangle_t* _this, int x, int y, int a, int b);

void print_rectangle_t(struct rectangle_t _this);

int rectangle_get_x(struct rectangle_t _this);
int rectangle_get_y(struct rectangle_t _this);
int rectangle_get_a(struct rectangle_t _this);
int rectangle_get_b(struct rectangle_t _this);