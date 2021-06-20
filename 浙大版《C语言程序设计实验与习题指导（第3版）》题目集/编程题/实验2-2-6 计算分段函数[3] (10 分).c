/*
本题目要求计算下列分段函数f(x)的值：



输入格式：
输入在一行中给出实数x。

输出格式：
在一行中按“f(x) = result”的格式输出，其中x与result都保留一位小数。

输入样例1：
10
输出样例1：
f(10.0) = 0.1
输入样例2：
234
输出样例2：
f(234.0) = 234.0
*/

#include<stdio.h>
#include<math.h>

int fx(void){
	double x,result;
	scanf("%lf",&x);
	if(x!=10){
		result=x;
	}else {
		result=1.0/x;
	}
	printf("f(%.1lf) = %.1lf",x,result);
	return 0;
}

int main(void){
	fx();
	return 0;
}
