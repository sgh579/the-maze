#include<stdio.h>
#define H 10//�߶�
#define W 10//���
 
struct file
{
	char walls[H][W];//����ɨʽ�� 
	int x;
	int y;
}demo,*p=&demo;



int main()
{
	void big_cube();
	void page_print();
	void demo_cube(); 
	void move();
	void l_x_y(int x,int y);
	void makeup_walls();
	void end_and_exit();
	/************************/
	l_x_y(1,8);
	demo_cube();//���Ŀ� 
	makeup_walls();//���ɡ�2�����Թ� 
	page_print();//��ӡ 
	while(1)
	{
	move();
	page_print();
	end_and_exit();
	}
	return 0;
}
/*******************************************/
void big_cube()
{
	int i1,i2;
	for(i1=H;i1>0;i1--)
	{
		for(i2=0;i2<W;i2++)
		//putchar(p->walls[i1][12]);
		p->walls[i1][i2]='*';
	}
}
void page_print()//��ӡ��ͼ������ǽ����palyer),ÿһ�β����������´�ӡ����page 
{
	int i1,i2;
	p->walls[p->y][p->x]='i';
	for(i1=H-1;i1>=0;i1--)//��---���� 
	{
		for(i2=0;i2<W;i2++)//��---���� 
		{
			putchar(p->walls[i1][i2]);
		}
		printf("\n");
	}
	printf("the loaction:%d,%d\n",p->x,p->y);
}
void demo_cube()//���ķ��� ��ģ���Թ� 
{
	int i1,i2;
	for(i1=H-1;i1>=0;i1--)
	{
		for(i2=0;i2<W;i2++)
		//putchar(p->walls[i1][12]);
		p->walls[i1][i2]='*';
	}
	for(i1=H-2;i1>=1;i1--)
	{
		for(i2=1;i2<W-1;i2++)
		//putchar(p->walls[i1][12]);
		p->walls[i1][i2]=' ';
	}
}
void move()//"wasd"�ƶ�������1������������-1���˳�ѭ����Ҫ���ڵ���ʱ���Ǵ˽ṹ�� 
{
	int x0=p->x,y0=p->y;
	//printf("the original loaction:%d,%d\n",x0,y0);
	char d;
	printf("input the direction:") ;
	d=getchar();
	getchar();
	switch(d)
	{
		case 'w':if(p->y<H-1 && p->walls[p->y+1][p->x]!='*')p->y++;break;
		case 'a':if(p->x>0 && p->walls[p->y][p->x-1]!='*')p->x--;break;
		case 's':if(p->y>0 && p->walls[p->y-1][p->x]!='*')p->y--;break;
		case 'd':if(p->x<W-1 && p->walls[p->y][p->x+1]!='*')p->x++;break;
		//case 'p':return -1;//ֹͣ���� 
	}
	p->walls[y0][x0]=' ';
	p->walls[p->y][p->x]='i';
	//return 1;
}
void l_x_y(int x,int y) //�Զ�����
{
	p->x=x;
	p->y=y;
} 
void makeup_walls()
{
	int i;
	for(i=0;i<7;i++)
	{
		p->walls[7][i]='*';
	}
	for(i=W-1;i>3;i--)
	{
		p->walls[3][i]='*';
	}
}
void end_and_exit()
{
	if(p->x==8 && p->y==1)
	printf("wow!\nyou have succeeded!\nnow,I'going to tell you a secret!\nAre you ready?\n\n\n\n\nok\n\n\n\n\n\n1+1=3\nhahahaha\n\n\n\n\n\n\n"); 
} 
