/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#pragma once

template <typename T> bool majority( Vector<T> A, T& maj ) { //���������㷨��T�ɱȽϿ��е�
   maj = majCandidate( A ); //��Ҫ�ԣ�ѡ����ѡ��maj
   return majCheck( A, maj ); //����ԣ���֤maj�Ƿ��ȷ��ѡ
}
