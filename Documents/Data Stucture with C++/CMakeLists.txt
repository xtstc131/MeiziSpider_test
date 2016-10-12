cmake_minimum_required(VERSION 3.5)
project(Data_Stucture_with_C__)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp BinTree/BinaryTree.h BinTree/BinNode.h BinTree/bintree_implementation.h BinTree/bintree_root.h BinTree/bintree_makeTree.h BinTree/bintree_breakTree.h BinTree/binnode_macro.h BinTree/binnode_preOrder.h BinTree/binnode_travPreOrder_i1.h BinTree/binnode_travPreOrder_r.h BinTree/binnode_inOrder.h BinTree/binnode_travInOrder_r.h BinTree/binnode_travInOrder_I1.h BinTree/binnode_travInOrder_i2.h BinTree/binnode_travInOrder_i3.h BinTree/binnode_implementation.h BinTree/binnode_succ.h BinTree/binnode_travLevel.h BinTree/bintree_insert.h BinTree/binnode_insert.h BinTree/bintree_updateHeigh.h BinTree/bintree_isEmpty.h BinTree/bintree_clean.h BinTree/bintree_copy.h PriorityQueue/PQMin_implementation.h PriorityQueue/PQMin.h PriorityQueue/PQMin_macro.h)
add_executable(Data_Stucture_with_C__ ${SOURCE_FILES} BinTree/binnode_inOrder.h)