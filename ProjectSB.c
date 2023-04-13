int add(){
	int n;
	printf("Enter number of stock to be added");
	scanf("%d",&n);
	return n;
}
int remove(){
	int n;
	printf("Enter number of stock to be removed");
	scanf("%d",&n);
	return n;
}
void disp(int a){
	printf("Stock in the inventory is: %d\n",a);
}
int dispstatus(int a[]){
	
	int s;int i;
	for(i=0;a[i]!=0;i++){
		printf("%d,",a[i]);
		s+=a[i];
	}
	printf("\nTotal sale= %d\n",s);
}
int main(){
	int stock=500;
	int e=0;
	int s[100],k=0;
	while(e!=1){
	    int ch;
	    printf("Enter Add(1), Remove(2), Check current stock vale(3), See details of sales(4)\n");
	    scanf("%d",&ch);
	    switch(ch){
	 	  case 1: stock+=add();
	 	  break;
	 	  case 2:s[k]=remove();
		  stock-=s[k++];
	 	  break;
	 	  
	 	  case 3: disp(stock);
	 	  break;
	 	  case 4: dispstatus(s);
	 	  break;
	 	  default: printf("Wrong choice\n");
		}
	    printf("Do you want to exit?(0/1)");
		scanf("%d",&e);
	}
	 return 1;
}
