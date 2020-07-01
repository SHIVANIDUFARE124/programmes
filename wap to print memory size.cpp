#include<conio.h>
#include<stdio.h>
#include<dos.h>
int main()
{
	struct WORDEGS
	{
		unsigned int ax,bx,cx,dx,si,di,cflags,flags;
	};
	struct BYTEREGS
	{
		unsigned char al,ah,bl,bh,cl,ch,dl,dh;
	};
	union REGS
	{
		struct WORDEGS x;
		struct BYTEREGS H;
	};
	union REGS inregs,outregs;
	int memsize;
	memsize=outregs.x.ax;
	printf("\ntotal memory=%d",memsize);
	getch();
	return 0;
}
