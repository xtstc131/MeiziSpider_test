//
// Created by 夏添 on 2016/10/9.
//
#pragma once

#include<queue>

using namespace std;

template<typename T>
template<typename VST>
//层序遍历(队列实现)
void BinNode<T>::travLevel(VST &visit) {
    queue<BinNodePosi(T)> q;
    q.push(this);
    while (!q.empty()) {
        BinNodePosi(T)
        x = q.front();
        q.pop();
        visit(x->_element);
        if (HasLChild(*x))
            q.push(x->lChild);
        if (HasRChild(*x))
            q.push(x->rChild);
    }
}