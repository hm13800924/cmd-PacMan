//Developed By Hamed Mohammadi


#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(NULL));
	char a[20][20];
	char move;
	int x=1,y=1,bx=1,by=18,b=0,px=1,py=15,p=0,ix=1,iy=12,cx=1,cy=9,c=0,q=1,score=0,map,difficulity;//x,y baraye pacman		bx,by baraye Blinky		px,py baraye Pinky		ix,iy baraye Inky		cx,cy baraye Clyde		b,p,i,c baraye harekat random har ghost
	int hb=0,gb=0,hp=0,gp=0,hi=0,gi=0,hc=0,gc=0;//g fasele amudi VA h fasle ofoghi
	int i=0,j=0,z=0;//i,j baraye for haye dakhel bazi		z baraye shemordan tedad harakat bazikon
	while (map!=1&&map!=2&&map!=3)//entekhab map
	{
		cout<<"choose the map"<<endl<<"1-map1"<<endl<<"2-map2"<<endl<<"3-map3"<<endl;
		cin>>map;
		system("cls");
	}
	while (difficulity!=1&&difficulity!=2)//entekhab daraje sakhti
	{
		cout<<"choose difficulity"<<endl<<"1-Easy"<<endl<<"2-Medium"<<endl;
		cin>>difficulity;
		system("cls");
	}
	switch (map)//map ra moshakhas mikonad.
	{
		case 1:
		{
			for (j=0;j<20;j++)
			{
				a[0][j]='#';
				a[19][j]='#';
			}
			for (j=0;j<20;j++)
			{
				a[j][0]='#';
				a[j][19]='#';
			}
			for (j=1;j<19;j++)
			{
				for (i=1;i<19;i++)
				{
					a[j][i]=' ';
				}
			}
			a[2][4]=a[3][4]=a[4][4]=a[5][4]=a[2][12]=a[3][12]=a[4][12]=a[5][12]=a[10][7]=a[10][8]=a[10][9]=a[10][10]=a[10][11]=a[10][12]=a[8][7]=a[8][8]=a[8][9]=a[8][10]=a[8][11]=a[8][12]=a[11][10]=a[12][10]=a[13][10]=a[16][5]=a[16][6]=a[16][7]=a[16][8]=a[16][9]=a[16][10]='#';
			a[2][8]=a[3][8]=a[4][8]=a[5][8]=a[9][8]=a[9][9]=a[9][10]=a[9][11]=a[15][15]=a[16][15]=a[17][15]=a[18][15]='$';
			a[1][1]='M';//where the pacman starts
			break;
		}
		case 2:
		{
			for (j=0;j<20;j++)
			{
				a[0][j]='#';
				a[19][j]='#';
			}
			for (j=0;j<20;j++)
			{
				a[j][0]='#';
				a[j][19]='#';
			}
			for (j=1;j<19;j++)
			{
				for (i=1;i<19;i++)
				{
					a[j][i]=' ';
				}
			}
			a[2][5]=a[3][5]=a[4][5]=a[5][5]=a[8][12]=a[9][13]=a[10][14]=a[11][15]=a[15][9]=a[15][10]=a[15][11]=a[15][12]=a[15][13]=a[15][14]=a[15][15]=a[15][16]=a[15][17]=a[15][18]=a[17][1]=a[17][2]=a[17][3]=a[17][4]=a[17][5]=a[17][6]='#';
			a[6][10]=a[6][11]=a[6][12]=a[6][13]=a[18][1]=a[18][2]=a[18][3]=a[18][4]=a[16][14]=a[16][15]=a[17][14]=a[17][15]='$';
			a[1][1]='M';//where the pacman starts
			break;
		}
		case 3:
		{
			for (j=0;j<20;j++)
			{
				a[0][j]='#';
				a[19][j]='#';
			}
			for (j=0;j<20;j++)
			{
				a[j][0]='#';
				a[j][19]='#';
			}
			for (j=1;j<19;j++)
			{
				for (i=1;i<19;i++)
				{
					a[j][i]=' ';
				}
			}
			a[2][1]=a[3][2]=a[4][3]=a[5][4]=a[6][5]=a[7][6]=a[4][13]=a[4][14]=a[4][15]=a[4][16]=a[4][17]=a[4][18]=a[5][13]=a[6][13]=a[7][13]=a[8][13]=a[8][14]=a[8][15]=a[13][1]=a[13][2]=a[13][3]=a[13][4]=a[13][5]=a[13][6]=a[12][13]=a[13][14]=a[14][15]=a[15][16]=a[16][17]=a[17][18]='#';
			a[3][1]=a[6][10]=a[5][15]=a[5][16]=a[5][17]=a[6][16]=a[7][15]=a[7][16]=a[7][17]=a[15][6]=a[16][6]=a[16][18]='$';
			a[1][1]='M';//where the pacman starts
			break;
		}
	}
	while (q!=0)//main loop
	{
		system("cls");
		for (i=0;i<20;i++)//map print
		{
			for (j=0;j<20;j++)
			{
				cout<<a[i][j];
				if (j==19)
				{
					cout<<endl;
				}
			}
		}		
		cout<<"pos: "<<"M("<<x<<','<<y<<')'<<' '<<"B("<<bx<<','<<by<<')'<<' '<<"P("<<px<<','<<py<<')'<<' '<<"I("<<ix<<','<<iy<<')'<<' '<<"C("<<cx<<','<<cy<<')'<<endl<<"score:"<<score<<endl;
		if (q==2)
		{
			cout<<"No Move!"<<endl;
		}
		else
		{
			cout<<"Please Move The PacMan!(use arrows)"<<endl;	
		}
		q=1;
		move=0;//agar in nabashad pacman vaghti yek jahat migiriad ta be divar bokhorad be harekat edame midahad.
		while (move!=72&&move!=80&&move!=75&&move!=77)//gereftan arrow ha az karbar
		{
			move=getch();
			if (move==224)
			{
				move=getch();
			}
		}
		switch(move)//makes the players move       //=72 up, =80 down, =77 right, =75 left
		{
			case 72://up
			{
				if (a[x-1][y]!='#')
				{
					if (a[x-1][y]=='$')
					{
						a[x][y]=' ';
						a[x-1][y]='M';
						x-=1;
						score+=1;
						break;
					}
					else
					{
						a[x][y]=' ';
						a[x-1][y]='M';
						x-=1;
						break;	
					}
				}
				else
				{
					q=2;
					break;
				}
			}
			case 80://down
			{
				if (a[x+1][y]!='#')
				{
					if (a[x+1][y]=='$')
					{
						a[x][y]=' ';
						a[x+1][y]='M';
						x+=1;
						score+=1;
						break;
					}
					else
					{
						a[x][y]=' ';
						a[x+1][y]='M';
						x+=1;
						break;
					}
				}
				else
				{
					q=2;
					break;
				}
			}
			case 75://left
			{
				if (a[x][y-1]!='#')
				{
					if (a[x][y-1]=='$')
					{
						a[x][y]=' ';
						a[x][y-1]='M';
						y-=1;
						score+=1;
						break;
					}
					else
					{
						a[x][y]=' ';
						a[x][y-1]='M';
						y-=1;
						break;
					}
				}
				else
				{
					q=2;
					break;
				}
			}
			case 77://right
			{
				if (a[x][y+1]!='#')
				{
					if (a[x][y+1]=='$')
					{
						a[x][y]=' ';
						a[x][y+1]='M';
						y+=1;
						score+=1;
						break;
					}
					else
					{
						a[x][y]=' ';
						a[x][y+1]='M';
						y+=1;
						break;
					}
				}
				else
				{
					q=2;
					break;
				}
			}
			default:
			{
				q=2;
				break;
			}
		}
		if (z==2)//vorood avvalin ghost
		{
			a[bx][by]='B';
		}
		if (z>2)
		{
			if (difficulity==2)//Medium
			{
				gb=bx-x;
				hb=by-y;
				if (abs(gb)>abs(hb))
				{
					if (gb>0)
					{
						b=0;
					}
					else if (gb<0)
					{
						b=1;
					}
				}
				else if (abs(gb)<abs(hb))
				{
					if (hb>0)
					{
						b=3;
					}
					else if (hb<0)
					{
						b=2;
					}
				}
				else if (abs(gb)==abs(hb))
				{
					if (hb>0)
					{
						b=3;
					}
					else if (hb<0)
					{
						b=2;
					}
				}
			}
			else if (difficulity==1)//Easy
			{
				b=rand()%4;
			}
			switch (b)//ghost move		// =0 up, =1 down, =2 right, =3 left
			{
				case 0:
				{
					if (a[bx-1][by]!='#'&&a[bx-1][by]!='$'&&a[bx-1][by]!='P'&&a[bx-1][by]!='I'&&a[bx-1][by]!='C')
					{
						if (a[bx][by]=='$')
						{
							a[bx-1][by]='B';
							bx-=1;
							break;
						}
						else if (a[bx][by]=='B')
						{
							a[bx][by]=' ';
							a[bx-1][by]='B';
							bx-=1;
							break;
						}
					}
					else if (a[bx-1][by]!='#'&&a[bx-1][by]=='$'&&a[bx-1][by]!='P'&&a[bx-1][by]!='I'&&a[bx-1][by]!='C')
					{
						if (a[bx][by]=='$')
						{
							bx-=1;
							break;
						}
						else if (a[bx][by]=='B')
						{
							a[bx][by]=' ';
							bx-=1;
							break;
						}
					}
					else
					{
						break;
					}
				}
				case 1:
				{
					if (a[bx+1][by]!='#'&&a[bx+1][by]!='$'&&a[bx+1][by]!='P'&&a[bx+1][by]!='I'&&a[bx+1][by]!='C')
					{
						if (a[bx][by]=='$')
						{
							a[bx+1][by]='B';
							bx+=1;
							break;
						}
						else if (a[bx][by]=='B')
						{
							a[bx][by]=' ';
							a[bx+1][by]='B';
							bx+=1;
							break;
						}
					}
					else if (a[bx+1][by]!='#'&&a[bx+1][by]=='$'&&a[bx+1][by]!='P'&&a[bx+1][by]!='I'&&a[bx+1][by]!='C')
					{
						if (a[bx][by]=='$')
						{
							bx+=1;
							break;
						}
						else if (a[bx][by]=='B')
						{
							a[bx][by]=' ';
							bx+=1;
							break;
						}
					}
					else
					{
						break;
					}
				}
				case 2:
				{
					if (a[bx][by+1]!='#'&&a[bx][by+1]!='$'&&a[bx][by+1]!='P'&&a[bx][by+1]!='I'&&a[bx][by+1]!='C')
					{
						if (a[bx][by]=='$')
						{
							a[bx][by+1]='B';
							by+=1;
							break;
						}
						else if (a[bx][by]=='B')
						{
							a[bx][by]=' ';
							a[bx][by+1]='B';
							by+=1;
							break;
						}
					}
					else if (a[bx][by+1]!='#'&&a[bx][by+1]=='$'&&a[bx][by+1]!='P'&&a[bx][by+1]!='I'&&a[bx][by+1]!='C')
					{
						if (a[bx][by]=='$')
						{
							by+=1;
							break;
						}
						else if (a[bx][by]=='B')
						{
							a[bx][by]=' ';
							by+=1;
							break;
						}
					}
					else
					{
						break;
					}
				}
				case 3:
				{
					if (a[bx][by-1]!='#'&&a[bx][by-1]!='$'&&a[bx][by-1]!='P'&&a[bx][by-1]!='I'&&a[bx][by-1]!='C')
					{
						if (a[bx][by]=='$')
						{
							a[bx][by-1]='B';
							by-=1;
							break;
						}
						else if (a[bx][by]=='B')
						{
							a[bx][by]=' ';
							a[bx][by-1]='B';
							by-=1;
							break;
						}
					}
					else if (a[bx][by-1]!='#'&&a[bx][by-1]=='$'&&a[bx][by-1]!='P'&&a[bx][by-1]!='I'&&a[bx][by-1]!='C')
					{
						if (a[bx][by]=='$')
						{
							by-=1;
							break;
						}
						else if (a[bx][by]=='B')
						{
							a[bx][by]=' ';
							by-=1;
							break;
						}
					}
					else
					{
						break;
					}
				}
			}
		}
		if (z==3)
		{
			a[px][py]='P';
		}
		if (z>3)
		{
			if (difficulity==2)
			{
				gp=px-x;
				hp=py-y;
				if (abs(gp)>abs(hp))
				{
					if (gp>0)
					{
						p=0;
					}
					else if (gp<0)
					{
						p=1;
					}
				}
				else if (abs(gp)<abs(hp))
				{
					if (hp>0)
					{
						p=3;
					}
					else if (hp<0)
					{
						p=2;
					}
				}
				else if (abs(gp)==abs(hp))
				{
					if (hp>0)
					{
						p=3;
					}
					else if (hp<0)
					{
						p=2;
					}
				}
			}
			else if (difficulity==1)
			{
				p=rand()%4;
			}
			switch (p)// =0 up, =1 down, =2 right, =3 left
			{
				case 0:
				{
					if (a[px-1][py]!='#'&&a[px-1][py]!='$'&&a[px-1][py]!='B'&&a[px-1][py]!='I'&&a[px-1][py]!='C')
					{
						if (a[px][py]=='$')
						{
							a[px-1][py]='P';
							px-=1;
							break;
						}
						else if (a[px][py]=='P')
						{
							a[px][py]=' ';
							a[px-1][py]='P';
							px-=1;
							break;
						}
					}
					else if (a[px-1][py]!='#'&&a[px-1][py]=='$'&&a[px-1][py]!='B'&&a[px-1][py]!='I'&&a[px-1][py]!='C')
					{
						if (a[px][py]=='$')
						{
							px-=1;
							break;
						}
						else if (a[px][py]=='P')
						{
							a[px][py]=' ';
							px-=1;
							break;
						}
					}
					else
					{
						break;
					}
				}
				case 1:
				{
					if (a[px+1][py]!='#'&&a[px+1][py]!='$'&&a[px+1][py]!='B'&&a[px+1][py]!='I'&&a[px+1][py]!='C')
					{
						if (a[px][py]=='$')
						{
							a[px+1][py]='P';
							px+=1;
							break;
						}
						else if (a[px][py]=='P')
						{
							a[px][py]=' ';
							a[px+1][py]='P';
							px+=1;
							break;
						}
					}
					else if (a[px+1][py]!='#'&&a[px+1][py]=='$'&&a[px+1][py]!='B'&&a[px+1][py]!='I'&&a[px+1][py]!='C')
					{
						if (a[px][py]=='$')
						{
							px+=1;
							break;
						}
						else if (a[px][py]=='P')
						{
							a[px][py]=' ';
							px+=1;
							break;
						}
					}
					else
					{
						break;
					}
				}
				case 2:
				{
					if (a[px][py+1]!='#'&&a[px][py+1]!='$'&&a[px][py+1]!='B'&&a[px][py+1]!='I'&&a[px][py+1]!='C')
					{
						if (a[px][py]=='$')
						{
							a[px][py+1]='P';
							py+=1;
							break;
						}
						else if (a[px][py]=='P')
						{
							a[px][py]=' ';
							a[px][py+1]='P';
							py+=1;
							break;
						}
					}
					else if (a[px][py+1]!='#'&&a[px][py+1]=='$'&&a[px][py+1]!='B'&&a[px][py+1]!='I'&&a[px][py+1]!='C')
					{
						if (a[px][py]=='$')
						{
							py+=1;
							break;
						}
						else if (a[px][py]=='P')
						{
							a[px][py]=' ';
							py+=1;
							break;
						}
					}
					else
					{
						break;
					}
				}
				case 3:
				{
					if (a[px][py-1]!='#'&&a[px][py-1]!='$'&&a[px][py-1]!='B'&&a[px][py-1]!='I'&&a[px][py-1]!='C')
					{
						if (a[px][py]=='$')
						{
							a[px][py-1]='P';
							py-=1;
							break;
						}
						else if (a[px][py]=='P')
						{
							a[px][py]=' ';
							a[px][py-1]='P';
							py-=1;
							break;
						}
					}
					else if (a[px][py-1]!='#'&&a[px][py-1]=='$'&&a[px][py-1]!='B'&&a[px][py-1]!='I'&&a[px][py-1]!='C')
					{
						if (a[px][py]=='$')
						{
							py-=1;
							break;
						}
						else if (a[px][py]=='P')
						{
							a[px][py]=' ';
							py-=1;
							break;
						}
					}
					else
					{
						break;
					}
				}
			}
		}
		if (z==4)
		{
			a[ix][iy]='I';
		}
		if (z>4)
		{
			if (difficulity==2)
			{
				gi=ix-x;
				hi=iy-y;
				if (abs(gi)>abs(hi))
				{
					if (gi>0)
					{
						i=0;
					}
					else if (gi<0)
					{
						i=1;
					}
				}
				else if (abs(gi)<abs(hi))
				{
					if (hi>0)
					{
						i=3;
					}
					else if (hi<0)
					{
						i=2;
					}
				}
				else if (abs(gi)==abs(hi))
				{
					if (hi>0)
					{
						i=3;
					}
					else if (hi<0)
					{
						i=2;
					}
				}
			}
			else if (difficulity==1)
			{
				i=rand()%4;
			}
			switch (i)// =0 up, =1 down, =2 right, =3 left
			{
				case 0:
				{
					if (a[ix-1][iy]!='#'&&a[ix-1][iy]!='$'&&a[ix-1][iy]!='P'&&a[ix-1][iy]!='B'&&a[ix-1][iy]!='C')
					{
						if (a[ix][iy]=='$')
						{
							a[ix-1][iy]='I';
							ix-=1;
							break;
						}
						else if (a[ix][iy]=='I')
						{
							a[ix][iy]=' ';
							a[ix-1][iy]='I';
							ix-=1;
							break;
						}
					}
					else if (a[ix-1][iy]!='#'&&a[ix-1][iy]=='$'&&a[ix-1][iy]!='P'&&a[ix-1][iy]!='B'&&a[ix-1][iy]!='C')
					{
						if (a[ix][iy]=='$')
						{
							ix-=1;
							break;
						}
						else if (a[ix][iy]=='I')
						{
							a[ix][iy]=' ';
							ix-=1;
							break;
						}
					}
					else
					{
						break;
					}
				}
				case 1:
				{
					if (a[ix+1][iy]!='#'&&a[ix+1][iy]!='$'&&a[ix+1][iy]!='B'&&a[ix+1][iy]!='P'&&a[ix+1][iy]!='C')
					{
						if (a[ix][iy]=='$')
						{
							a[ix+1][iy]='I';
							ix+=1;
							break;
						}
						else if (a[ix][iy]=='I')
						{
							a[ix][iy]=' ';
							a[ix+1][iy]='I';
							ix+=1;
							break;
						}
					}
					else if (a[ix+1][iy]!='#'&&a[ix+1][iy]=='$'&&a[ix+1][iy]!='P'&&a[ix+1][iy]!='B'&&a[ix+1][iy]!='C')
					{
						if (a[ix][iy]=='$')
						{
							ix+=1;
							break;
						}
						else if (a[ix][iy]=='I')
						{
							a[ix][iy]=' ';
							ix+=1;
							break;
						}
					}
					else
					{
						break;
					}
				}
				case 2:
				{
					if (a[ix][iy+1]!='#'&&a[ix][iy+1]!='$'&&a[ix][iy+1]!='B'&&a[ix][iy+1]!='P'&&a[ix][iy+1]!='C')
					{
						if (a[ix][iy]=='$')
						{
							a[ix][iy+1]='I';
							iy+=1;
							break;
						}
						else if (a[ix][iy]=='I')
						{
							a[ix][iy]=' ';
							a[ix][iy+1]='I';
							iy+=1;
							break;
						}
					}
					else if (a[ix][iy+1]!='#'&&a[ix][iy+1]=='$'&&a[ix][iy+1]!='P'&&a[ix][iy+1]!='B'&&a[ix][iy+1]!='C')
					{
						if (a[ix][iy]=='$')
						{
							iy+=1;
							break;
						}
						else if (a[ix][iy]=='I')
						{
							a[ix][iy]=' ';
							iy+=1;
							break;
						}
					}
					else
					{
						break;
					}
				}
				case 3:
				{
					if (a[ix][iy-1]!='#'&&a[ix][iy-1]!='$'&&a[ix][iy-1]!='B'&&a[ix][iy-1]!='P'&&a[ix][iy-1]!='C')
					{
						if (a[ix][iy]=='$')
						{
							a[ix][iy-1]='I';
							iy-=1;
							break;
						}
						else if (a[ix][iy]=='I')
						{
							a[ix][iy]=' ';
							a[ix][iy-1]='I';
							iy-=1;
							break;
						}
					}
					else if (a[ix][iy-1]!='#'&&a[ix][iy-1]=='$'&&a[ix][iy-1]!='P'&&a[ix][iy-1]!='B'&&a[ix][iy-1]!='C')
					{
						if (a[ix][iy]=='$')
						{
							iy-=1;
							break;
						}
						else if (a[ix][iy]=='I')
						{
							a[ix][iy]=' ';
							iy-=1;
							break;
						}
					}
					else
					{
						break;
					}
				}
			}
		}
		if (z==5)
		{
			a[cx][cy]='C';
		}
		if (z>5)
		{
			if (difficulity==2)
			{
				gc=cx-x;
				hc=cy-y;
				if (abs(gc)>abs(hc))
				{
					if (gc>0)
					{
						c=0;
					}
					else if (gc<0)
					{
						c=1;
					}
				}
				else if (abs(gc)<abs(hc))
				{
					if (hc>0)
					{
						c=3;
					}
					else if (hc<0)
					{
						c=2;
					}
				}
				else if (abs(gc)==abs(hc))
				{
					if (hc>0)
					{
						c=3;
					}
					else if (hc<0)
					{
						c=2;
					}
				}
			}
			else if (difficulity==1)
			{
				c=rand()%4;
			}
			switch (c)// =0 up, =1 down, =2 right, =3 left
			{
				case 0:
				{
					if (a[cx-1][cy]!='#'&&a[cx-1][cy]!='$'&&a[cx-1][cy]!='P'&&a[cx-1][cy]!='B'&&a[cx-1][cy]!='I')
					{
						if (a[cx][cy]=='$')
						{
							a[cx-1][cy]='C';
							cx-=1;
							break;
						}
						else if (a[cx][cy]=='C')
						{
							a[cx][cy]=' ';
							a[cx-1][cy]='C';
							cx-=1;
							break;
						}
					}
					else if (a[cx-1][cy]!='#'&&a[cx-1][cy]=='$'&&a[cx-1][cy]!='P'&&a[cx-1][cy]!='B'&&a[cx-1][cy]!='I')
					{
						if (a[cx][cy]=='$')
						{
							cx-=1;
							break;
						}
						else if (a[cx][cy]=='C')
						{
							a[cx][cy]=' ';
							cx-=1;
							break;
						}
					}
					else
					{
						break;
					}
				}
				case 1:
				{
					if (a[cx+1][cy]!='#'&&a[cx+1][cy]!='$'&&a[cx+1][cy]!='B'&&a[cx+1][cy]!='P'&&a[cx+1][cy]!='I')
					{
						if (a[cx][cy]=='$')
						{
							a[cx+1][cy]='C';
							cx+=1;
							break;
						}
						else if (a[cx][cy]=='C')
						{
							a[cx][cy]=' ';
							a[cx+1][cy]='C';
							cx+=1;
							break;
						}
					}
					else if (a[cx+1][cy]!='#'&&a[cx+1][cy]=='$'&&a[cx+1][cy]!='B'&&a[cx+1][cy]!='P'&&a[cx+1][cy]!='I')
					{
						if (a[cx][cy]=='$')
						{
							cx+=1;
							break;
						}
						else if (a[cx][cy]=='C')
						{
							a[cx][cy]=' ';
							cx+=1;
							break;
						}
					}
					else
					{
						break;
					}
				}
				case 2:
				{
					if (a[cx][cy+1]!='#'&&a[cx][cy+1]!='$'&&a[cx][cy+1]!='B'&&a[cx][cy+1]!='P'&&a[cx][cy+1]!='I')
					{
						if (a[cx][cy]=='$')
						{
							a[cx][cy+1]='C';
							cy+=1;
							break;
						}
						else if (a[cx][cy]=='C')
						{
							a[cx][cy]=' ';
							a[cx][cy+1]='C';
							cy+=1;
							break;
						}
					}
					else if (a[cx][cy+1]!='#'&&a[cx][cy+1]=='$'&&a[cx][cy+1]!='B'&&a[cx][cy+1]!='P'&&a[cx][cy+1]!='I')
					{
						if (a[cx][cy]=='$')
						{
							cy+=1;
							break;
						}
						else if (a[cx][cy]=='C')
						{
							a[cx][cy]=' ';
							cy+=1;
							break;
						}
					}
					else
					{
						break;
					}
				}
				case 3:
				{
					if (a[cx][cy-1]!='#'&&a[cx][cy-1]!='$'&&a[cx][cy-1]!='B'&&a[cx][cy-1]!='P'&&a[cx][cy-1]!='I')
					{
						if (a[cx][cy]=='$')
						{
							a[cx][cy-1]='C';
							cy-=1;
							break;
						}
						else if (a[cx][cy]=='C')
						{
							a[cx][cy]=' ';
							a[cx][cy-1]='C';
							cy-=1;
							break;
						}
					}
					else if (a[cx][cy-1]!='#'&&a[cx][cy-1]=='$'&&a[cx][cy-1]!='B'&&a[cx][cy-1]!='P'&&a[cx][cy-1]!='I')
					{
						if (a[cx][cy]=='$')
						{
							cy-=1;
							break;
						}
						else if (a[cx][cy]=='C')
						{
							a[cx][cy]=' ';
							cy-=1;
							break;
						}
					}
					else
					{
						break;
					}
				}
			}
		}
		z+=1;
		if (a[x][y]=='B')//check kardan inke bakhte ya na
		{
			system("cls");
			cout<<"Blinky Caught PacMan!"<<endl<<"Game Over!";
			q=0;
		}
		if (a[x][y]=='P')
		{
			system("cls");
			cout<<"Pinky Caught PacMan!"<<endl<<"Game Over!";
			q=0;
		}
		if (a[x][y]=='I')
		{
			system("cls");
			cout<<"Inky Caught PacMan!"<<endl<<"Game Over!";
			q=0;
		}
		if (a[x][y]=='C')
		{
			system("cls");
			cout<<"Clyde Caught PacMan!"<<endl<<"Game Over!";
			q=0;
		}
		if (a[bx][by]=='M')
		{
			system("cls");
			cout<<"Blinky Caught PacMan!"<<endl<<"Game Over!";
			q=0;
		}
		if (a[px][py]=='M')
		{
			system("cls");
			cout<<"Pinky Caught PacMan!"<<endl<<"Game Over!";
			q=0;
		}
		if (a[ix][iy]=='M')
		{
			system("cls");
			cout<<"Inky Caught PacMan!"<<endl<<"Game Over!";
			q=0;
		}
		if (a[cx][cy]=='M')
		{
			system("cls");
			cout<<"Clyde Caught PacMan!"<<endl<<"Game Over!";
			q=0;
		}
		if (score==12)//check kardan inke barande shode ya na
		{
			system("cls");
			cout<<endl<<"You Won!";		
			q=0;
		}
	}
	cout<<endl<<"press any button to exit the game";
	getch();
}
