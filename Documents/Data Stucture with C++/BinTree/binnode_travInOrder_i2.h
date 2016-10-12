#pragma once

template<typename T, typename VST>
void travInOrder_i2(BinNodePosi(T)x, VST &visit) {
    auto backtrace = false;
    while (true) {
        if (!backtrace && HasLChild(*x)) {
            x = x->lChild;
        }
        else {
            visit(x->_element);
            if (HasRChild(*x)) {
                x = x->rChild;
                backtrace = false;
            }
            else {
                if (!(x = x->succ())) break;
                backtrace = true;
            }
        }
    }

}