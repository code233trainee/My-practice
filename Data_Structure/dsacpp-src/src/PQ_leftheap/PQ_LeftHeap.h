/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#pragma once

#include "BinTree/BinTree.h" //����������ڵ�ģ����
#include "PQ/PQ.h" //�������ȼ�����ADT

template <typename T>
class PQ_LeftHeap : public PQ<T>, public BinTree<T> { //���ڶ�����������ʽ����ʽʵ�ֵ�PQ
   /*DSA*/ friend class UniPrint; //��ʾ���ʹ�ã����򲻱���������
 public:
   PQ_LeftHeap() {} //Ĭ�Ϲ���
   PQ_LeftHeap( T* E, int n ) //�������죺�ɸĽ�ΪFloyd�����㷨
    { for ( int i = 0; i < n; i++ ) insert( E[i] ); }
   PQ_LeftHeap( PQ_LeftHeap& A, PQ_LeftHeap& B ) { //�ϲ�����
      _root = merge( A._root, B._root ); _size = A._size + B._size;
      A._root = B._root = NULL; A._size = B._size = 0;
   }
   void insert( T ); //���ձȽ���ȷ�������ȼ��������Ԫ��
   T getMax(); //ȡ�����ȼ���ߵ�Ԫ��
   T delMax(); //ɾ�����ȼ���ߵ�Ԫ��
}; // PQ_LeftHeap

#include "PQ_LeftHeap_implementation.h"