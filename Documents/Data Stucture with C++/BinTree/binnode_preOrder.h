#pragma once

#include <cstdlib>
#include "binnode_travPreOrder_i1.h"
#include "binnode_travPreOrder_r.h"

template<typename T>
template<typename VST>
void BinNode<T>::travPre(VST &visit) {
    switch (rand() % 2) {
        case 1:
            travPre_I1(this, visit);
            break;
        default:
            travPre_R(this, visit);
            break;

    }
}