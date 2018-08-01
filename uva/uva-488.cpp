#include<stdio.h>

int main()
{
    int i,j,n,a,b,m,l,p;
    scanf("%d",&n);
    while(n--){


    scanf("%d%d",&a,&b);
     for(m=0;m<b;m++){
      for(i=1;i<=a;i++){
        for(j=0;j<i;j++){
           printf("%d",i);
    }

    printf("\n");
}
  for(l=a-1;l>=1;l--){
    for(p=1;p<l;p++){
        printf("%d",l);
    }
    printf("\n");
  }
   if(m!=b-1) printf("\n");
  }
  if(n==1)

    printf("\n");
}
  return 0;
}
