/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2024.
 ******************************************************************************************/

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include "_share/util.h"
#include "UniPrint/print.h"
#include "vector/vector.h"

int main( int argc, char* argv[] ) { //���ڿ��ٻ��ֵ�kѡȡ�㷨����
   if ( 2 > argc ) { printf ( "Usage: %s <n>\a\a\n", argv[0] ); return 1; }
   Rank n = atoi( argv[1] );
   if ( n < 1 ) { printf ( "Invalid arguments\a\a\n" ); return 1; }
   srand((unsigned int)time(NULL)); //�������
   //srand( 31415926 ); //�̶����ӣ������ӣ������ã�
   Vector<int> A;
   for ( Rank k = 0; k < n; k++ ) //�������һ������
      A.insert( rand() % (4*n + 1) );
   printf( "A random vector of size %d created:\n", n ); PRINT( A );
   Vector<int> S;
   for ( Rank k = 0; k < n; k++ )
      S.insert( A[ A.select(k) ] ); //ͨ������select���õ���Ӧ������������ԭ�������ֲ��䣩
   printf( "A sorted copy of the vector has been created by %d selection(s):\n", n ); PRINT( S );
   printf( "The vector has been sorted:\n" ); A.sort();
   PRINT( A );
   Rank k = n;
   Rank diff = n;
   for ( Rank k = 0; k < n; k++ )
      diff -= ( A[k] == S[k] );
   printf( "%d diffenece(s) found\n", diff );
   return 0;
}