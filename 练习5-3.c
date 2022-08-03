void CharPyramid( int n, char ch)
{
	for(int i = 1; i <= n; i++){
		/* 
		 * 打印每行前的空格：第一行n-1个空格，第二行n-2个空格，
		 * 第n-1行1个空格，第n行n-n个空格。
		 * 第i行n-i个空格
		 */
		for(int j = 1; j <= n - i; j++)
			printf(" ");
		//打印字符:每个字符后一个空格
		for(int j = 1; j <= i; j++)
			printf("%c ", ch);
		//换行
		printf("\n");
	}
}
