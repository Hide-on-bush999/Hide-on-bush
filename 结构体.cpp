#include <stdio.h>

struct ZZX
{
	char name[128];
	int age;
	int tall;
};

int main(void)
{
	struct ZZX st = {18,187};
	struct ZZX * pst = &st;
	pst->age = 20;
	scanf("%s",pst->name);
	printf("%s %d %d",pst->name,st.age,pst->tall);
	return 0;
}
