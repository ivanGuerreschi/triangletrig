#ifndef RECTANGLE_H
#define RECTANGLE_H

float perimeter (float hypotenuse, float side_a, float side_b);
float area (float side_a, float side_b);
float side_a (float area, float side_b);
float side_b (float area, float side_a);
float hypotenuse (float area, float height);
float hypotenuse_p (float side_a, float side_b);
float side_a_p (float hypotenuse, float side_b);
float side_b_p (float hypotenuse, float side_a);

#endif /* RECTANGLE_H */
