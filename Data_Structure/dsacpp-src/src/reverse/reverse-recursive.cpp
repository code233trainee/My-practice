/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

/*DSA*/#include "_share/util.h"
/*DSA*/#include "UniPrint/print_int_array.h"

void reverse ( int * A, int n ) { //���鵹�ã��ݹ�棩
   if ( n < 2 ) return;
   swap ( A[0], A[n-1] ); //������Ԫ�غ�ĩԪ��
   reverse ( A + 1, n - 2 ); //�ݹ鵹����׺
} //O(n)ʱ�� + O(n)�ռ�