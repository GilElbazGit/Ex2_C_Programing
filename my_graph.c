#include <stdio.h>

int main(){
    int mat [10][10]={};
    char funcChoise;
    int i;
    int j;
    while (funcChoise!='D'){
        scanf("%c",&funcChoise);
        switch (funcChoise){
            case 'A':
                build_mat(mat);
                break;
            case 'B':
                scanf("%d%d",&i,&j);
                if(shortestPath(mat,i,j)<=0||i==j){
                    printf("False\n");
                }
                else{
                    printf("True\n");
                }
                break;
            case 'C':
                scanf("%d%d",&i,&j);
                int ans=shortestPath(mat,i,j);
                if (i==j||ans<0){
                    printf("-1\n");
                }
                else{
                    printf("%d\n",ans);
                }
                break;
            case ('D'||'EOF'):
                break;

        }
    }

}
