#include&lt;stdio.h&gt;
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	printf(&quot;Size of a char: %d byte(s)\n&quot;, sizeof(char));
	printf(&quot;Size of an int: %d byte(s)\n&quot;, sizeof(int));
	printf(&quot;Size of a long int: %d byte(s)\n&quot;, sizeof(long int));
	printf(&quot;Size of a long long int: %d byte(s)\n&quot;, sizeof(long long int));
	printf(&quot;Size of a float: %d byte(s)\n&quot;, sizeof(float));
	return (0);
}
