int main()
{
	// int *a_ptr vs int* a_ptr
	// int *my_ptr, sec_ptr;
	int *a,b; // typedef
	int* a,b; // 이렇게하면 b는 int b인 것이다.
  // 안 헷갈리기 위해 int *b이렇게 표현한다.
	int *a, *b;
	// 코딩 스타일은 서로 협의하기 나름
  // 따를때 주의사항
	int *a;  // OK
	int *b;  // OK
	int * b; // X
  // 한가지 스타일로 통일한다.
}