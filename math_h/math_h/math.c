#define _CRT_SECURE_NO_WARNINGS 1 
//abs
//求整数的绝对值
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int num = -10;
//	printf("%d\n", abs(num));
//	return 0;
//}


//acos --- 反余弦
//#include <stdio.h>     
//#include <math.h>       
//int main()
//{
//	double pi = acos(-1.0);
//	double param, result;
//	param = 2;
//	result = acos(param) * 180.0 / pi;
//	perror("acos");
//	printf("The arc cosine of %f is %f degrees.\n", param, result);
//	return 0;
//}


//acosh
//反双曲余弦函数


//asin
//反正弦函数
//#include <stdio.h>      
//#include <math.h>      
//
//int main()
//{
//	double PI = acos(-1.0);
//	double param, result;
//	param = 0.5;
//	result = asin(param) * 180.0 / PI;
//	printf("The arc sine of %f is %f degrees\n", param, result);
//	return 0;
//}


//asinh
//反双曲正弦函数


//atan
//计算arctan的值
//#include <stdio.h>   
//#include <math.h>     
//#define PI 3.14159265
//int main()
//{
//	double param, result;
//	param = 1.0;
//	result = atan(param) * 180 / PI;
//	printf("The arc tangent of %f is %f degrees\n", param, result);
//	return 0;
//}


//atan2
//计算x/y的值
//#include <stdio.h>      
//#include <math.h>       
//#define PI 3.14159265
//int main()
//{
//	double x, y, result;
//	x = -10.0;
//	y = 10.0;
//	result = atan2(x, y) * 180 / PI;
//	printf("The arc tangent for (x=%f, y=%f) is %f degrees\n", x, y, result);
//	return 0;
//}


//atanh
//反双曲正切函数


//cbrt --- 立方根
//#include <stdio.h>     
//#include <math.h>      
//int main()
//{
//	double param, result;
//	param = 27.0;
//	result = cbrt(param);
//	printf("cbrt (%f) = %f\n", param, result);
//	return 0;
//}


//pow(x,y) --- x的y次幂
//#include <stdio.h>      
//#include <math.h>       
//int main()
//{
//	printf("7 ^ 3 = %f\n", pow(7.0, 3.0));
//	printf("4.73 ^ 12 = %f\n", pow(4.73, 12.0));
//	printf("-32.01 ^ 1.54 = %f\n", pow(-32.01, 1.54));
//	perror("pow(-32.01, 1.54)");
//	return 0;
//}


//ceil --- 最小整数值
//#include <stdio.h>    
//#include <math.h>     
//int main()
//{
//	printf("ceil of 2.3 is %.1f\n", ceil(2.3));
//	printf("ceil of 3.8 is %.1f\n", ceil(3.8));
//	printf("ceil of -2.3 is %.1f\n", ceil(-2.3));
//	printf("ceil of -3.8 is %.1f\n", ceil(-3.8));
//	return 0;
//}


//copysign(x,y) --- 返回x的值,y的符号
//#include <stdio.h>      
//#include <math.h>      
//int main()
//{
//	printf("copysign ( 10.0,-1.0) = %f\n", copysign(10.0, -1.0));
//	printf("copysign (-10.0,-1.0) = %f\n", copysign(-10.0, -1.0));
//	printf("copysign (-10.0, 1.0) = %f\n", copysign(-10.0, 1.0));
//	return 0;
//}


//cos --- 余弦值
//#include <stdio.h>     
//#include <math.h>      
//#define PI 3.14159265
//int main()
//{
//	double param, result;
//	param = 60.0;
//	result = cos(param * PI / 180.0);
//	printf("The cosine of %f degrees is %f.\n", param, result);
//	return 0;
//}


//cosh
//反双曲余弦函数


//erf
//误差函数


//erfc
//误差互补函数


//exp
//以e为底的指数函数
//#include <stdio.h>     
//#include <math.h>       
//int main()
//{
//	double param, result;
//	param = 5.0;
//	result = exp(param);
//	printf("The exponential value of %f is %f.\n", param, result);
//	return 0;
//}


//exp2
//计算以2为底的指数函数,2的x次方
//#include <stdio.h>      
//#include <math.h>      
//int main()
//{
//	double param, result;
//	param = 8.0;
//	result = exp2(param);
//	printf("2 ^ %f = %f.\n", param, result);
//	return 0;
//}


//expm1
//计算e的x次方-1
//#include <stdio.h>     
//#include <math.h>      
//int main()
//{
//	double param, result1;
//	double num = 2.0;
//	param = 2.0;
//	result1 = expm1(param);
//	double result2 = exp(num);
//	printf("expm1 (%f) = %f.\n", param, result1);
//	printf("expm1 (%f) = %f.\n", num, result2);
//	return 0;
//}


//fabs
//求浮点数的绝对值
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float num = -12.3f;
//	printf("%.1f\n", fabs(num));
//	return 0;
//}


//fdim --- 两个数的差值
//第1个数减第2个数如果是负数,返回0
//#include <stdio.h>      
//#include <math.h>       
//int main()
//{
//	printf("fdim(2.0, 1.0)   = %f\n", fdim(2.0, 1.0));
//	printf("fdim(1.0, 2.0)   = %f\n", fdim(1.0, 2.0));
//	printf("fdim(-2.0, -1.0) = %f\n", fdim(-2.0, -1.0));
//	printf("fdim(-1.0, -2.0) = %f\n", fdim(-1.0, -2.0));
//	return 0;
//}


//求圆周率
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double pi = acos(-1.0);
//	printf("%f\n", pi);
//	return 0;
//}


