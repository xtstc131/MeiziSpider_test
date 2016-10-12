#pragma once

#include "binnode_preOrder.h"
#include "BinNode.h"
#include <stack>

using namespace std;

template<typename T, typename VST>
void travPre_I1(BinNodePosi(T)x, VST &visit) {
    stack<BinNodePosi(T)> s;
    if (x) s.push(x);
    while (!s.empty()) {
        x = s.top();
        s.pop();
        visit(x->_element);
        if (HasLChild(*x))
            s.push(x);
        if (HasRChild(*x))
            s.push(x);
    }
}
