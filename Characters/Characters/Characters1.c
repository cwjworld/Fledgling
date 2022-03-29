#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <assert.h>

//strstr -- ��һ���ַ�����������һ���ַ���
int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "bcd";
	//��arr1�в����Ƿ����arr2����
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		printf("�ҵ���:%s\n", ret);
	}
	return 0;
}

//ģ��ʵ��strstr
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cp = str1;
	
	if (*str2 == '\0')
	{
		return (char*)str1;
	}
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++; 
		}
		if (*s2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}
	return NULL;
}

int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "bcd";

	//��arr1�в����Ƿ����arr2����
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		printf("�ҵ���: %s\n", ret);
	}
	return 0;
}

//strtok -- �и��ַ���
int main()
{
	char arr[] = "zpw@bitedu.tech";
	char* p = "@.";
	char tmp[20] = { 0 };
	strcpy(tmp, arr);

	char* ret = NULL;
	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}

	//ret = strtok(tmp, p);
	//printf("%s\n", ret);

	//ret = strtok(NULL, p);
	//printf("%s\n", ret);

	//ret = strtok(NULL, p);
	//printf("%s\n", ret);

	return 0;
}

//strerror
//ʹ�ÿ⺯����ʱ��
//�ڵ��ÿ⺯��ʧ�ܵ�ʱ��,�������ô�����
//�������뷭��ɶ�Ӧ��Ϣ
#include <errno.h>
int main()
{
	//printf("%s\n", strerror(0));
	//printf("%s\n", strerror(1));
	//printf("%s\n", strerror(2));
	//printf("%s\n", strerror(3));
	//printf("%s\n", strerror(4));
	//printf("%s\n", strerror(5));
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	return 0;
}