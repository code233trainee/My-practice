/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#pragma once

template <typename T> //���б�����ʼ��λ��p������Ϊn����������������
void List<T>::insertionSort( ListNodePosi<T> p, Rank n ) { // valid(p) && Rank(p) + n <= size
   /*DSA*///printf ( "InsertionSort ...\n" );
   for ( Rank r = 0; r < n; r++ ) { //��һΪ���ڵ�
      insert( search( p->data, r, p ), p->data ); //�����ʵ���λ�ò�����
      p = p->succ; remove( p->pred ); //ת����һ�ڵ�
   }
}