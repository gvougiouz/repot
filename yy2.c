#include <stdio.h>



int tade[2][2];

void 
out2(sfd)
int sfd;
{
	printf("(%d)\n",sfd);
}


int main()
{
	void bla(int inp[2][2]){
		int i,j;
		for (i=0;i<2;i++){
			for (j=0;j<2;j++){
				printf("%d\n",inp[i][j]);
			}
		}
	}

	int i,j;
	int k=1;
	for (i=0;i<2;i++){
			for (j=0;j<2;j++){
				tade[i][j]=k++;
			}
		}

	//bla(tade);
	out2(1);
	return (-1);
}