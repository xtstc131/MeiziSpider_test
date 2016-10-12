//
// Created by 夏添 on 2016/10/9.
//

#pragma once

template<typename T>
void BinTree<T>::makeTree(const T &x, BinTree <T> &left, BinTree <T> &right) {
    if (!_root || &right == &left)
        return;
    _root = new BinNode<T>(x, left._root, right._root, nullptr);
    left._root = right._root = nullptr;
}
