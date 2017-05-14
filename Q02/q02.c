#include <stdio.h>

int main(void)
{
	char input[] = "SYNTFjmtkOWFNZdjkkNH";
	int array = 0;
	while (array != 20)
	{
		if ((input[array] >= 65 && input[array] <= 77) || (input[array] >= 97 && input[array] <= 109))
			input[array] += 13;

		else
			input[array] -= 13;
	
		array++;
	}

	printf("%s", input);
	return 0;
}
