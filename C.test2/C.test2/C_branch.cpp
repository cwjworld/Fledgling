#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main()
//{
//	int age = 10;
//	if (age >= 18)
//		printf("����\n");
//	else
//		printf("δ����\n");
//		printf("����̸����\n");//if��elseĬ��ֻ�ܹ���һ����䣬��Ҫ���ƶ��������Ҫ��Ӵ�����
//	return 0;
//}

//����else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else//else�����������if��ƥ��
//		printf("haha\n");
//	return 0;
//}

//int test()
//{	
//	if (1)
//		return 0;//�˺�����û�л���������
//	printf("hehe\n");
//	return 1;
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()//�ж�һ�����Ƿ�������
//{
//	int num = 15;
//	if (num % 2 == 1)
//		printf("����\n");
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


//switch���(���֧����)
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

//while���
//int main()
//{	
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//��������������ѭ��continue����Ĵ��룬�ص�while���Ƿ����������һ��ѭ��
//		printf("%d", i);
//		i++;
//	}
//	return 0;  
//}     


//EOF - end of file - �ļ�������־
//��Ҫ���������������һ��CTRL+Z���൱��getchar������EOF
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
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ������(Y/N):>");
//	//��������
//	getchar();//����'\n'(������һ�仰���ܽ������)#��Ҳֻ�ܽ��ֻ��һ�������ַ�������
//	int ch = getchar();//û��ǰһ�������ch��ȡ�˻�������Ļس���
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ������(Y/N):>");
//	//��������
//	getchar();//����'\n'(������һ�仰���ܽ������)
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;//�����
//	}
//	int ch = getchar();//û��ǰһ�������ch��ȡ�˻�������Ļس���
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}

//
//int main()
//{
//	for(;;)//ʡ���жϲ��֣����жϺ�Ϊ�棬���²���ѭ��
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
//		ret *= i;//�൱��ret = ret * i
//	}
//	printf("%d", ret);
//	return 0;
//}

//����1��10�Ľ׳�֮�ͣ�����Ч�ʱȽϵ���
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

//ͬ���Ǽ���1��10�Ľ׳�֮�ͣ�Ч�������ǰһ��Ҫ�ߵö�
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
//	int k = 7;//Ҫ���ҵ�����
//	//��arr�������������������k(7)��ֵ
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
//			printf("�ҵ���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
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
//		Sleep(1000);//����1s
//		system("cls");//�����Ļ
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
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//�ַ����ıȽϲ�����ʹ��==��Ӧ��ʹ��strcmp��strcmp�����ķ���ֵ��0
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����\n");
//	}
//	return 0;
//}

