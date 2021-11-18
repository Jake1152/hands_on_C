#include <stdio.h>

#include "ch_12_3_Linkage_2.c"
/*
	Linagke

	Variables with block scope, function scope, or function prototype scope
	- No linkage
	File scope variables
	- External or internal linkage
*/

int el;				// file scope wotj external linkage (global variable)
static int il;		// file scope with internal linkage
// 서로 다른 파일 연결 linkage
//
void testLinkages();

int main()
{
	el = 1024;

	testLinkages();

	printf("%d\n", el);
	
	return (0);
}
