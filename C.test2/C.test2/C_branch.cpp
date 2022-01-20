#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main()
//{
//	int age = 10;
//	if (age >= 18)
//		printf("成年\n");
//	else
//		printf("未成年\n");
//		printf("不能谈恋爱\n");//if和else默认只能管理一个语句，需要控制多条语句需要添加大括号
//	return 0;
//}

//悬空else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else//else和离它最近的if相匹配
//		printf("haha\n");
//	return 0;
//}

//int test()
//{	
//	if (1)
//		return 0;//此后的语句没有机会运行了
//	printf("hehe\n");
//	return 1;
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()//判断一个数是否是奇数
//{
//	int num = 15;
//	if (num % 2 == 1)
//		printf("奇数\n");
//	return 0;
//}

//
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf("%d\n", a);
//      a++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d", i);
//	}
//	return 0;
//}


//switch语句(多分支场景)
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期七\n");
//		break;
//	}
//	return 0;
//}

//while语句
//int main()
//{	
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//作用是跳过本次循环continue后面的代码，回到while看是否继续进行又一次循环
//		printf("%d", i);
//		i++;
//	}
//	return 0;  
//}     


//EOF - end of file - 文件结束标志
//想要代码结束可以输入一个CTRL+Z，相当于getchar读到了EOF
//int main()
//{	
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//			putchar(ch);
//	return 0;
//}  

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N):>");
//	//清理缓冲区
//	getchar();//处理'\n'(加上这一句话才能解决问题)#这也只能解决只有一个残留字符的问题
//	int ch = getchar();//没有前一句代码则ch读取了缓冲区里的回车键
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N):>");
//	//清理缓冲区
//	getchar();//处理'\n'(加上这一句话才能解决问题)
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;//空语句
//	}
//	int ch = getchar();//没有前一句代码则ch读取了缓冲区里的回车键
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}

//
//int main()
//{
//	for(;;)//省略判断部分，则判断恒为真，导致不断循环
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;//相当于ret = ret * i
//	}
//	printf("%d", ret);
//	return 0;
//}

//计算1到10的阶乘之和，但是效率比较低下
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1 ; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//同样是计算1到10的阶乘之和，效率相较于前一种要高得多
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//在arr这个有序的数组里面查找k(7)的值
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz-1;
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}

//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while(left <= right)
//	{ 
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休眠1s
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//字符串的比较不可以使用==，应该使用strcmp，strcmp函数的返回值是0
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序\n");
//	}
//	return 0;
//}

