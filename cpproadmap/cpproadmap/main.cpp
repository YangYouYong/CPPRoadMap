//
//  main.cpp
//  cpproadmap
//
//  Created by yangyouyong on 2018/7/3.
//  Copyright © 2018年 vechain. All rights reserved.
//

#include <iostream>
#include "ClassInstanceTest.hpp"
#include "InheritTest.hpp"
#include "MultiThread.hpp"

using namespace std;

//class Box
//{
//public:
//    double length;   // 长度
//    double breadth;  // 宽度
//    double height;   // 高度
//    double getVolume(){
//        return length * height * breadth;
//    }
//};

int main( )
{
    testClassInstance();
    testInherit();
    testMultiThread();
    return 0;
}
