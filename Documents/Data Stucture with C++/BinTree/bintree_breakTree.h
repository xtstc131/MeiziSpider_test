//
// Created by 夏添 on 2016/10/9.
//
#pragma once

template<typename T>
void BinTree<T>::BreakTree(T &x, BinTree <T> &left, BinTree <T> &right) {
    if (!_root || &left == &right || left._root || right._root)//待接受分割的子树的节点必须为空节点
        return;
    x = _root->_element;
    left._root = _root->lChild;
    right._root = _root->lChild;
    delete _root;
    _root = nullptr;//把删除的节点指向空
}

