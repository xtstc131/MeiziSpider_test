//
// Created by 夏添 on 16/9/18.
//

#pragma once

#include "BinNode.h"

template<typename T>
class BinTree {
public:
    BinTree() : _root(nullptr), _size(0) { }

    ~BinTree() = default;

    bool isEmpty() const;

    void clear();

    bool root(T &x) const;

    void makeTree(const T &x, BinTree<T> &left, BinTree<T> &right);

    void BreakTree(T &x, BinTree<T> &left, BinTree<T> &right);

    BinNodePosi(T)copy(BinNodePosi(T)t);


    BinNodePosi(T)insertAsRoot(T const &c);//当做根节点插入

    BinNodePosi(T)insertAsLC(BinNodePosi(T)x, T const &c);//当做左孩子插入


    BinNodePosi(T)insertAsRC(BinNodePosi(T)x, T const &c);//当做右孩子插入

    template<typename VST>
    void travInOrder(VST &visit)//中序遍历
    {
        _root->travIn(visit);
    }

    template<typename VST>
    void travPreOrder(VST &visit)//先序遍历
    {
        _root->travPre(visit);
    }

    template<typename VST>
    void travPostOrder(VST &);//后续遍历

    template<typename VST>
    void travLevel(VST &visit)//层序遍历
    {
        _root->travLevel(visit);
    }

protected:
    BinNodePosi(T)_root;
    int _size;
private:
    int updateHeigh(BinNodePosi(T)x);

    void updateHeighAbove(BinNodePosi(T)x);

    void Clear(BinNodePosi(T)&t);
};

#include"bintree_implementation.h"

