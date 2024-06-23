/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#include <cstdlib>
#include <ctime>
#include <cstdio>

int s_lo, s_hi;

int gs_LS( int A[], int n ); //ɨ����ԣ�O(n)
int gs_DC( int A[], int lo, int hi ); //���β��ԣ�O(n*logn)
int gs_IC( int A[], int n ); //�������ԣ�O(n^2)
int gs_BF( int A[], int n ); //�������ԣ�O(n^3)

/******************************************************************************************
 * ���Ƭ��
 ******************************************************************************************/
int main ( int argc, char* argv[] ) {
   int* A; int n;
   if ( 1 < argc ) { //������ָ����-123 89 -86 -50 -63 88 -56 -5 31 112 106 72 17 127 -92 76 124 24 -54 19 -93 121 -28 11 24 -56 92 57 -16
      n = argc-1; A = new int[n];
      for ( int i = 0; i < n; i++ )
         A[i] = atoi( argv[i+1] );
   } else { //�������
      srand ( ( unsigned int ) time ( NULL ) );
      n = rand() % 128; A = new int[n];
      for ( int i = 0; i < n; i++ )
         A[i] = rand() % 128 - rand() % 96;
   }
   for ( int i = 0; i < n; i++ )
      printf("%3d:%4d\n", i, A[i]);
   printf( "GreatestSlice by Linear Scan:\t\t%d", gs_LS( A, n ) ); printf( " @[%d,%d)\n", s_lo, s_hi );
   printf( "GreatestSlice by Divide-And-Conquer:\t%d\n", gs_DC( A, 0, n ) );
   printf( "GreatestSlice by Incremental:\t\t%d", gs_IC( A, n ) ); printf( " @[%d,%d)\n", s_lo, s_hi );
   printf( "GreatestSlice by Brute-Force:\t\t%d", gs_BF( A, n ) ); printf( " @[%d,%d)\n", s_lo, s_hi );
   delete [] A;
   return 0;
}
