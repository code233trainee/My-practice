/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

/*DSA*/#include "_share/util.h"
/*DSA*/#include "UniPrint/print_int_array.h"

void reverse( int * A, int n ) { //���鵹�ã�ֱ�Ӹ�����õĵ����棩
next: //�㷨��ʼλ�������ת��־
   if ( n < 2 ) return;
   swap( A[0], A[n-1] ); //������Ԫ�غ�ĩԪ��
   A++; n -= 2; //��������������
   goto next; //��ת���㷨�����ʼλ�ã������ص�����׺
} //O(n)ʱ�� + O(1)�ռ�