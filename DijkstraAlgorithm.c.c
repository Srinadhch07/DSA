    #include <stdio.h>
    void main()
    {
        int i,j,a,b,n,source, number[30],indices[30];
        printf("Enter the Number of nodes:\n");
        scanf("%d", &n);
        printf("Enter the distances of Each node: \n");
        for (i = 0; i < n; ++i)
		 {	printf("\nNode %d Distance :",i+1);
        	indices[i]=i+1;
        	scanf("%d", &number[i]);
		}
        printf("Enter the Source Node :\n");
        scanf("%d",&source);
        number[source-1]=0;
        for (i = 0; i < n; ++i){
            for (j = i + 1; j < n; ++j){
                if (number[i] > number[j]) {
 					b=indices[i];
 					indices[i]=indices[j];
 					indices[j]=b;
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }}}
        printf("Path of Visited Nodes: \n");
        for (i = 0; i < n; ++i){
			printf(" -> N%d", indices[i]);
		}
 
    }