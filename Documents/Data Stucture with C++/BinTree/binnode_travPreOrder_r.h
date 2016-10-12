#pragma once

#include "BinNode.h"

template<typename T, typename VST>
void travPre_R(BinNodePosi(T)x, VST &visit) {
    if (!x) return;
    visit(x->_element);
    travPre_R(x->lChild, visit);
    travPre_R(x->rChild, visit);
}
