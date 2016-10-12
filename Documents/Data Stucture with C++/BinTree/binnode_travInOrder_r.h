#pragma once

#include "BinNode.h"

template<typename T, typename VST>
void travInOrder_R(BinNodePosi(T)x, VST &visit) {
    if (!x) return;
    travInOrder_R(x->lChild, visit);
    visit(x->_element);
    travInOrder_R(x->rChild, visit);
}