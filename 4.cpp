#include <iostream>

//z1

bool CanRun(){

    std::string platform;
    std::string architecture;
    std::string machine;
        
        bool RunningSystem = (platform == "Windows" || platform == "Linux") && (architecture == "64bit" && machine == "AMD64");
        
    return RunningSystem;
}

//z2

int GetPerimeter(int w, int h){
    return 2*(w + h);
}

//z3

#include <cmath>
struct Point
{
    int x = 0;
    int y = 0;
}


int GetDistance(Point p1, Point p2){
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1. y - p2. y, 2));
}

int GetTriangleArea(Point p1, Point p2, Point p3){
    int d1 = GetDistance(p1,p2);
    int d2 = GetDistance(p1, p3);
    int d3 = GetDistance(p2,p3);
    int pp = (d1 + d2 + d3) / 2;
    return sqrt(pp * (pp-d1) * (pp-d2) * (pp -d3));
}
