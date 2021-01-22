#include <stdio.h>

int main(void)
{
	int val;
	printf("请输入您要打开的八门遁甲之阵的层数：");
	scanf("%d",&val); 
	
	switch (val)
	{
	case 1:
		printf("八门遁甲之阵 第一重开门 开！\n表莲华！\n");
		break;
	case 2:
		{
			printf("八门遁甲之阵 第一重开门 开！\n");
			printf("第二重休门 开！\n");
		}
		break;
	case 3:
		{
			printf("八门遁甲之阵 第一重开门 开！\n");
			printf("第二重休门 开！\n");
			printf("第三重生门 开！\n");
		}
		break;
	case 4:
		{
			printf("八门遁甲之阵 第一重开门 开！\n");
			printf("第二重休门 开！\n");
			printf("第三重生门 开！\n");
			printf("第四重伤门 开！\n");
		}
		break;
	case 5:
		{
			printf("八门遁甲之阵 第一重开门 开！\n");
			printf("第二重休门 开！\n");
			printf("第三重生门 开！\n");
			printf("第四重伤门 开！\n");
			printf("第五重杜门 开！\n");
			printf("里莲华！\n");
		}
		break;
	case 6:
		{
			printf("八门遁甲之阵 第一重开门 开！\n");
			printf("第二重休门 开！\n");
			printf("第三重生门 开！\n");
			printf("第四重伤门 开！\n");
			printf("第五重杜门 开！\n");
			printf("第六重景门 开！\n");
			printf("朝孔雀！\n");
		}
		break;
	case 7:
		{
			printf("八门遁甲之阵 第一重开门 开！\n");
			printf("第二重休门 开！\n");
			printf("第三重生门 开！\n");
			printf("第四重伤门 开！\n");
			printf("第五重杜门 开！\n");
			printf("第六重景门 开！\n");
			printf("第七重惊门 开！\n");
			printf("昼虎！\n");
		}
		break;
	default:
		{
			printf("八门遁甲之阵 第一重开门 开！\n");
			printf("第二重休门 开！\n");
			printf("第三重生门 开！\n");
			printf("第四重伤门 开！\n");
			printf("第五重杜门 开！\n");
			printf("第六重景门 开！\n");
			printf("第七重惊门 开！\n");
			printf("第八重死门 开！\n");
			printf("积 夜凯！\n");
		}
		break;
	}
	return 0;
}
