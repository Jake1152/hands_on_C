int g_int;  // referencing declaration

void    fun_second()
{
    g_int += 1;
	printf("g_int in fun_second() %d %p\n", g_int, &g_int);
}
 