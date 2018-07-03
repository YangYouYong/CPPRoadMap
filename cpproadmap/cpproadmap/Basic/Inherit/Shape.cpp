//
//  Shape.cpp
//  cpproadmap
//
//  Created by yangyouyong on 2018/7/3.
//  Copyright © 2018年 vechain. All rights reserved.
//

#include "Shape.hpp"
using namespace std;

double WidthHeightShape::getArea() {
    return 0;
}

double Rectangle::getArea() {
    return width * height;
}



//Rectangle::~Rectangle() {
////    cout << "destroy" <<endl;
////    cout << "Box2 的体积：" << volume <<endl;
//    printf("destory");
//}
