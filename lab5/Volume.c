#include <stdio.h>
#include <math.h>

float SphereVolume(float radius);
const double PI = 3.14159265;

int main(){
 
    float radius, calc;

    printf("Insert the radius of sphere (Unit in meter) : ");
    scanf("%f", &radius);

    calc = SphereVolume(radius);
    printf("Radius : %.2f\nVolume : %.2f", radius, calc);

    return 0;
}

float SphereVolume(float radius){
    float volume = (4.0 / 3.0) * PI * pow(radius, 3);
    return volume;
}