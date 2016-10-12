//
// Created by 夏添 on 2016/10/10.
//

#pragma once

inline int max(int x, int y) {
    return x > y ? x :y;
}

template<typename T>
int BinTree<T>::updateHeigh(BinNodePosi(T) x) {
    return x->height = 1 + max(stature(x->lChild), stature(x->rChild));
}

template<typename T>
void BinTree<T>::updateHeighAbove(BinNodePosi(T) x) {
    while (x) {
        updateHeigh(x);
        x = x->parent;
    }

}