//
// Created by 夏添 on 2016/10/9.
//
#pragma once


#include "binnode_macro.h"

#define  BinNodePosi(T) BinNode<T>*
#define stature(p) ((p) ? (p)->height : -1)

template<typename T>
struct BinNode {
    BinNode() = default;

    BinNode(const T &e) : _element(e), lChild(nullptr), rChild(nullptr), parent(nullptr) { }

    BinNode(const T &e, BinNodePosi(T)p = nullptr, BinNodePosi(T)l = nullptr, BinNodePosi(T)r = nullptr, int h = 0)
            : _element(e),
              parent(p),
              lChild(l),
              rChild(r),
              height(h) { }

    BinNodePosi(T)succ();

    BinNodePosi(T)insertAsLC(const T &c);//插入左孩子
    BinNodePosi(T)insertAsRC(const T &c);//插入右孩子

    template<typename VST>
    void travLevel(VST &); //子树层次遍历
    template<typename VST>
    void travPre(VST &); //子树先序遍历
    template<typename VST>
    void travIn(VST &); //子树中序遍历
    template<typename VST>
    void travPost(VST &); //子树后序遍历


    T _element;
    BinNodePosi(T)parent;
    BinNodePosi(T)lChild;
    BinNodePosi(T)rChild;
    int height;

};

#include"binnode_implementation.h"

