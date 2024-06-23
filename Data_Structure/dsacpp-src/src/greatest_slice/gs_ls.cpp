/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

extern int s_lo, s_hi;

int gs_LS( int A[], int n ) { //ɨ����ԣ�O(n)
   int gs = A[0], s = 0, i = n, j = n;
   while ( 0 < i-- ) { //�ڵ�ǰ����[i,j)��
      s += A[i]; //�������ۼ��ܺ�
      if ( gs < s ) { gs = s; s_lo = i; s_hi = j; } //���š�����
      if ( s <= 0 ) { s = 0; j = i; } //�������ͺ�׺
   }
   return gs;
}
