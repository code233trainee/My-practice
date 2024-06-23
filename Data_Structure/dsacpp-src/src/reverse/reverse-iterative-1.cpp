/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

/*DSA*/#include "_share/util.h"
/*DSA*/#include "UniPrint/print_int_array.h"

void reverse ( int * A, int n ) { //���鵹�ã��淶����֮��ĵ����棩
   while ( 1 < n ) { //��while�滻��ת��־��if����ȫ��Ч
      swap ( A[0], A[n-1] ); //������Ԫ�غ�ĩԪ��
      A++; n -= 2; //��������������
   }
} //O(n)ʱ�� + O(1)�ռ�