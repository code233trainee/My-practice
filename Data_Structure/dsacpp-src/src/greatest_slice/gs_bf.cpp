/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

extern int s_lo, s_hi;

int gs_BF( int A[], int n ) { //�������ԣ�O(n^3)
   int gs = A[0]; s_lo = n; s_hi = -1;
   for ( int i = 0; i < n; i++ )
      for ( int j = i; j < n; j++ ) { //ö�����е�O(n^2)������
         int s = 0; for ( int k = i; k <= j; k++ ) s += A[k]; //��O(n)ʱ�����
         if ( gs < s ) { gs = s; s_lo = i; s_hi = j + 1; } //���š�����
      }
   return gs;
}
