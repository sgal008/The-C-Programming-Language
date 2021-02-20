#include <stdio.h>

/* squeeze: delete each char in s1 which is in s2 */
void squeeze(char s1[], char s2[])
{
	int i, j, k;

	for (i = k = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)
			;
		if (s2[j] == '\0')  /* end of string - no match */
			s1[k++] = s1[i];
	}
	s1[k] = '\0';
}

main()
{
	char s1[] = { '1', '2', '3', '4', '\0' }; // ���һ��Ԫ����Ҫ����'\0'�� ��ʾ����
	char s2[] = { '2', '3', '\0' };
	squeeze(s1, s2);
	printf("s1 is %s", s1);

	getchar();
	return 0;
}