//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//
////
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//a选手说：b第二，我第三；
//b选手说：我第二，e第四；
//c选手说：我第一，d第二；
//d选手说：c最后，我第三；
//e选手说：我第四，a第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次
//
//void PlayerNo()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int d = 1;
//	int e = 1;
//	int flag = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						flag = 0;
//						if ((b == 2) + (a == 3) == 1 &&
//							(b == 2) + (e == 4) == 1 &&
//							(c == 1) + (d == 2) == 1 &&
//							(c == 5) + (d == 3) == 1 &&
//							(e == 4) + (a == 1) == 1)
//						{
//							flag |= (1 << (a - 1));
//							flag |= (1 << (b - 1));
//							flag |= (1 << (c - 1));
//							flag |= (1 << (d - 1));
//							flag |= (1 << (e - 1));

       //                按照位运算求解
							//while (flag)
							//{
							//	if (!(flag & 1))
							//		break;
							//	flag >>= 1;
							//}
							//if (!flag)
							//	printf("a b c d e : %d %d %d %d %d \n", a, b, c, d, e);


                           //穷举法
							//if (flag == 1 ||  flag == 3 || flag == 7 || flag == 15 || flag == 31)
							//	printf("a b c d e : %d %d %d %d %d \n", a, b, c, d, e);



//
//						}

                    
//							
//
//						
//					}
//				}
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	PlayerNo();
//	system("pause");
//	return 0;
//}