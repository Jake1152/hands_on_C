#include <stdio.h>

int main()
{
	/* 
		Object
		- "AN object is simply a block of memory that can store a value." (KNK P. 487)
		- Object has more develped meaning in C++ and Object Oriented Programiing (OOP)

		Identifiers
		- Names for variables, funtions, macros, and other entities (KNK p. 25)
	*/

	/*
		object, identifiers
		재귀함수에서 차이가 난다 생각.
	*/

	int var_name = 3;	// creates an object called 'var_name'.

	int *pt = &var_name;	// pt is an identifier
	// pointer 변수는 왜 object라고 할수없나?
	// pointer 변수에 다른 주소의 주소값을 넣는다.

	*pt =1;					// *pt is not an identifier. *pt designates an object.
	// in-direction
	//	문법상 identifier가 있다.
	// *pt 는 expression, pt가 de-referencing할떄 object를 가리키기 떄문이다.

	int arr[100];			// arr is an identifier. Is arr an object?
	arr[0] = 7;				// arr[0] is an object.
	// 0번 인덱스가 가리키는 메모리 공간에 접근 가능


	/*
		lvalue is an expression 'referring' to an object. (K & R p 197)

		L-Value : left side of an assignment
		R-Value : right side, variale, constant, expression (KNK p.67)
	*/
	
	var_name = 3;	// modifiable lvalue
	int temp = var_name;
	// rvalue일때는 값만 옮겨준다.
	temp = 1 + 2;
	// 1 + 2는 object가 아니다.
	// 메모리 공간을 가지고 있고가 object인지 여부이다.

	pt = &var_name;		// pointer도 modifiable
	int *ptr = arr;		// 배열이름arr identifier lvlalue에게
	*pt = 7;		// *pt is not an identifier but an modifiable lvalue expression.

	// int *ptr = arr + 2 * var_name;	// address rvalue
	// 주소값이라 rvalue만 쓸수있다
	*(arr + 2 * var_name) = 456;	// lvalue expression
	// *붙임으로써 lvalue로도 사용 가능

	const char *str = "Constant string";		// str is a modifiable lvalue.	
	str = "Seconde string";	// l
	// str[0] = 'A',	// Error
	//	puts(str);

	char str2[] = "STring in an array";
	// const char *str = "Constant string" 다르다.
	// 
	str2[0] = 'A';	// OK
	puts(str2);

	/*
		Identifiers have scope
		Objects have strage diration.
		Variables and functions have one of the following linkages:
			external linkage. internal linkage, or no linkage.
	*/

	return (0);
}