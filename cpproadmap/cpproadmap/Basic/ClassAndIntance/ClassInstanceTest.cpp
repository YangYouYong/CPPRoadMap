//
//  ClassInstanceTest.cpp
//  cpproadmap
//
//  Created by yangyouyong on 2018/7/3.
//  Copyright © 2018年 vechain. All rights reserved.
//

#include "ClassInstanceTest.hpp"
#include "Box.hpp"

using namespace std;

void testClassInstance() {
    
    Box Box1;        // 声明 Box1，类型为 Box
    Box Box2;        // 声明 Box2，类型为 Box
    double volume = 0.0;     // 用于存储体积
    
    // box 1 详述
    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;
    
    // box 2 详述
    Box2.height = 10.0;
    Box2.length = 12.0;
    Box2.breadth = 13.0;
    
    // box 1 的体积
    volume = Box1.getVolume();
    cout << "Box1 的体积：" << volume <<endl;
    
    // box 2 的体积
    volume = Box2.getVolume();
    cout << "Box2 的体积：" << volume <<endl;
    
}
