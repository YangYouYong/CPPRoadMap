//
//  InheritTest.cpp
//  cpproadmap
//
//  Created by yangyouyong on 2018/7/3.
//  Copyright © 2018年 vechain. All rights reserved.
//

#include "InheritTest.hpp"
#include "Shape.hpp"

using namespace std;

void testInherit() {
//    Shape *shape;
    Rectangle rect = Rectangle(2.0,3.2);

    cout<<"Rectangle area:"<< rect.getArea() << endl;
}
