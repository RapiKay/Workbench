#include <stdio.h>

int main(void)
{
	char s[100];
	int alphabet[26];  
	int i = 0,j;
	for (j = 0; j < 26; j++)
	{
		alphabet[j] = -1; 
	}
	scanf("%s", s); 
	while (s[i] != 0)   
	{
		for (j = 0; j <= i; j++)
		{
			if (j == i)
			{
				int d = s[i] - 97;
				alphabet[d] = i;    
			}
			else if (s[i] == s[j])
			{
				break;
			}
		}
		i++;
	}
	for (j = 0; j < 26; j++)
	{
		if (j == 25)
			printf("%d", alphabet[j]);
		else
			printf("%d ", alphabet[j]);
	}
	return 0;
}
