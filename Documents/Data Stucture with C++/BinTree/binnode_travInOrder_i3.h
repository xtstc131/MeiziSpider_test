//
// Created by 夏添 on 2016/10/9.
//
#include"BinNode.h"

template<typename T, typename VST>
void travInOrder_i3(BinNodePosi(T)x, VST &visit) {

    while (true) {
        if (HasLChild(*x))
            x = x->lChild;
        else {
            visit(x->_element);//
            while (!HasRChild(*x)) {
                if (!(x = x->succ())) return; //调用succ可以说是该版本的精华,或者说这个循环,X不断的向前回溯,又因为x只有左孩子
                    //所以succ实际就是返回到了其父亲节点实现了回溯
                else
                    visit(x->_element);//只会用于打印左侧子树链的元素(除了该链最深)
            }//该内循环实现了在一次外循环中，x回溯到的点一定有右子树
            x = x->rChild;//取那个右子树，重复遍历过程
        }
    }
}