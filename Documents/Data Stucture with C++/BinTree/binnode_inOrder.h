//
// Created by 夏添 on 2016/10/9.
//

#pragma once

#include <cstdlib>
#include "binnode_travInOrder_I1.h"
#include "binnode_travInOrder_i2.h"
#include "binnode_travInOrder_i3.h"
#include "binnode_travInOrder_r.h"

template<typename T>
template<typename VST>
void BinNode<T>::travIn(VST &visit) {
    switch (rand() % 4) {
        case 1:
            travInOrder_i1(this, visit);
            break;
        case 2:
            break;
        case 3:
            travInOrder_i3(this, visit);
            break;
        default:
            travInOrder_R(this, visit);
            break;
    }

}
