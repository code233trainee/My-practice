/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#pragma once

template <typename T> T PQ_ComplHeap<T>::delMax() { //ȡ��������
   swap( _elem[0], _elem[--_size] ); //�Ѷ�����β������_size�ĵݼ�����������shrink()��
   percolateDown( _elem, _size, 0 ); //�¶Ѷ�����
   return _elem[_size]; //����ԭ�Ѷ�
}
