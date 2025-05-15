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


//ceil --- 向上舍,最小整数值
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


//floor --- 向下舍
//#include <stdio.h>     
//#include <math.h>      
//int main()
//{
//	printf("floor of 2.3 is %.1lf\n", floor(2.3));
//	printf("floor of 3.8 is %.1lf\n", floor(3.8));
//	printf("floor of -2.3 is %.1lf\n", floor(-2.3));
//	printf("floor of -3.8 is %.1lf\n", floor(-3.8));
//	return 0;
//}


//fma --- 返回x*y+z
//#ifdef FP_FAST_FMA
//这是预处理条件判断指令,其作用是检查FP_FAST_FMA宏是否已被定义
//要是该宏已定义,那就表明当前编译器支持快速FMA操作
//一旦条件成立,编译器就会编译#ifdef FP_FAST_FMA和#else之间的代码
//#else
//当FP_FAST_FMA宏未被定义时,编译器就会跳过#ifdef和#else之间的代码,转而编译#else和#endif之间的代码
//#endif
//此指令用于标记预处理条件判断的结束
//#include <stdio.h>      
//#include <math.h>       
//int main()
//{
//	double x, y, z, result;
//	x = 10.0, y = 20.0, z = 30.0;
//	#ifdef FP_FAST_FMA
//	result = fma(x, y, z);
//	#else
//	result = x * y + z;
//	#endif
//	printf("10.0 * 20.0 + 30.0 = %f\n", result);
//	return 0;
//}


//fmax --- 两个数的最大值
//#include <stdio.h>      
//#include <math.h>       
//int main()
//{
//	printf("fmax (100.0, 1.0) = %f\n", fmax(100.0, 1.0));
//	printf("fmax (-100.0, 1.0) = %f\n", fmax(-100.0, 1.0));
//	printf("fmax (-100.0, -1.0) = %f\n", fmax(-100.0, -1.0));
//	return 0;
//}


//fmin --- 返回两个数的最小值
//#include <stdio.h>     
//#include <math.h>       
//int main()
//{
//	printf("fmin (100.0, 1.0) = %f\n", fmin(100.0, 1.0));
//	printf("fmin (-100.0, 1.0) = %f\n", fmin(-100.0, 1.0));
//	printf("fmin (-100.0, -1.0) = %f\n", fmin(-100.0, -1.0));
//	return 0;
//}


//fmod --- 浮点数取模
//% --- 两边操作数都是整数
//#include <stdio.h>      
//#include <math.h>       
//int main()
//{
//	printf("fmod of 5.3 / 2 is %f\n", fmod(5.3, 2));
//	printf("fmod of 18.5 / 4.2 is %f\n", fmod(18.5, 4.2));
//	return 0;
//}


//fpclassify返回一个整数值,表示输入浮点数的分类。
//可能的返回值包括:
//FP_INFINITE:无穷大(正无穷或负无穷)
//FP_NAN:非数字(Not a Number)
//FP_ZERO:零(包括正零和负零)
//FP_SUBNORMAL:非规格化数(比最小规格化数还要小的数)
//FP_NORMAL:规格化的正常数
//#include <stdio.h>      
//#include <math.h>       
//int main()
//{
//    double d = 1.0 / 0.0;
//    switch (fpclassify(d)) 
//    {
//    case FP_INFINITE:  printf("infinite");  break;
//    case FP_NAN:       printf("NaN");       break;
//    case FP_ZERO:      printf("zero");      break;
//    case FP_SUBNORMAL: printf("subnormal"); break;
//    case FP_NORMAL:    printf("normal");    break;
//    }
//    if (signbit(d)) printf(" negative\n");
//    else printf(" positive or unsigned\n");
//    return 0;
//}


//frexp --- 分解浮点数
//#include <stdio.h>    
//#include <math.h>     
//int main()
//{
//	double param, result;
//	int n;
//	param = 8.0;
//	result = frexp(param, &n);
//	printf("%f = %f * 2^%d\n", param, result, n);
//	return 0;
//}


//hypot --- 返回直角三角形的斜边(两个浮点数的平方根)
//#include <stdio.h>      
//#include <math.h>       
//int main()
//{
//	double leg_x, leg_y, result;
//	leg_x = 3;
//	leg_y = 4;
//	result = hypot(leg_x, leg_y);
//	printf("%f, %f and %f form a right-angled triangle.\n", leg_x, leg_y, result);
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


