/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#pragma once

template <typename T> Rank BinNode<T>::updateHeight() { //���½ڵ�߶�
   return height = color + max( stature( lc ), stature( rc ) ); //���Ӻڸ߶�ͨ����ȣ����ǳ���˫��
   /*DSA*/// ������и��ڵ����Һ��ӵĺڸ߶�ͨ�����
   /*DSA*/// ����֮����ȡ����ֵ���Ǳ�����ɾ���ڵ���ƽ����������У���ȷ���±�ɾ���ڵ㸸�׵ĺڸ߶�
   /*DSA*/// ����rotateAt()����ݱ�ɾ���ڵ������ߣ��߶�Сһ�����ø��ڵ�ĺڸ߶�
}

template <typename T> void BinNode<T>::updateHeightAbove() //���µ�ǰ�ڵ㼰�����ȵĸ߶�
   { for ( BinNodePosi<T> x = this; x; x = x->parent ) x->updateHeight(); } //���Ż�
