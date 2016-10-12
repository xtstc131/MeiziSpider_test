//
// Created by 夏添 on 2016/10/9.
//

#pragma once

template<typename T>
bool BinTree<T>::root(T &x) const {
    if (_root) {
        x = _root->_element;
        return true;
    }
    else
        return false;
}

