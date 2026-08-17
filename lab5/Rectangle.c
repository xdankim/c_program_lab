#include <stdio.h>

double Perimeter(double width, double length);
double Area(double width, double length);

int main(){
    
    double width, length, peri, area;

    printf("Insert width and length : ");
    scanf("%lf %lf", &width, &length);

    peri = Perimeter(width, length);
    area = Area(width, length);

    printf("Perimeter : %.2lf m\nArea : %.2lf m^2", peri, area);

    return 0;
}

double Perimeter(double width, double length){
    return 2 * (width + length);
}

double Area(double width, double length){
    return width * length;
}