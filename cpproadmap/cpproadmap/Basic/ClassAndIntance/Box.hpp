//
//  Box.hpp
//  cpproadmap
//
//  Created by yangyouyong on 2018/7/3.
//  Copyright © 2018年 vechain. All rights reserved.
//

#ifndef Box_hpp
#define Box_hpp

#include <stdio.h>

class Box
{
public:
    double length;   // 长度
    double breadth;  // 宽度
    double height;   // 高度
    double getVolume();
};

#endif /* Box_hpp */
