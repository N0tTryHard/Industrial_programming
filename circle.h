class Circle {
private:
    float radius, x_center, y_center;

public:
    Circle(float r, float x, float y);

    void set_circle(float r, float x, float y);

    float area();

    bool triangle_around(double a, double b, double c);

    bool triangle_in(double a, double b, double c);

    bool check_circle(float r, float x_cntr, float y_cntr);
};