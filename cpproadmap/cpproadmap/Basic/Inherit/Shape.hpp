//
//  Shape.hpp
//  cpproadmap
//
//  Created by yangyouyong on 2018/7/3.
//  Copyright © 2018年 vechain. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>
using namespace std;

class Shape {
public:
    virtual double getArea() = 0;
};

class WidthHeightShape: Shape {
    public:
    WidthHeightShape( double a=0, double b=0 ) {
        width = a;
        height = b;
    };
        virtual double getArea();
    protected:
        double width;
        double height;
};

class Rectangle: WidthHeightShape {
public:
    virtual double getArea();
    Rectangle( double a=0, double b=0 ): WidthHeightShape(a, b){};
};


#endif /* Shape_hpp */
