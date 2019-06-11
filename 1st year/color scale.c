/*WAP to convert the color scale value from RGB to CMYK*/

#include<stdio.h>
void main()
{
	int R,G,B; float r,g,b;
	float W,C,M,Y,K;
	printf("\n Enter the Digital Scale value of Colors RGB(0-255):\n");
	scanf("%d%d%d",&R,&G,&B); //Enter the values of R G and B
	
	r=(R/255.0); g=(G/255.0); b=(B/255.0); //to simplify
	W=(r>g)?(r>b?r:b):(g>b?g:b); //W=MAX(r,g,b)
	
	C=(W-r)/W; //Cyan
	M=(W-g)/W; //Magenta
	Y=(W-b)/W; //yellow
	K=1-W;     //Black
	
	if(R==0&&G==0&&B==0)
		{C=0; M=0; Y=0;}
	
	printf("\n The Real Scale Value of Colors are Cyan=%.3f Magenta=%.3f Yellow=%.3f Black=%.3f",C,M,Y,K);
	
	getch();
	
}
