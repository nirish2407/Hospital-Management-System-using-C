#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
#define max 10

struct queue
{
	char name[40];
	char fname[40];
	int age;
	char bg[10];
	char gender[10];
	char ph[20];
	char disease[60];
	struct queue *next;
};

struct queue *front = NULL;
struct queue *rear = NULL;

void insert();
void delete();
void peek1();
void display1();

struct node
{
	int pat_no;
	char name[40];
	char fname[40];
	int age;
	char bg[10];
	char gender[10];
	char ph[10];
	char disease[60];
	char doc_name[40];
	char date[10];
	char treatment[40];
	char med[40];
	struct node *next;
};

struct node *start=NULL;
struct node *create_ll(struct node *);
struct node *display2(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_after(struct node *);
struct node *sort_list(struct node *);
struct node *delete_list(struct node *);
char st[max][50];
int top=-1;

void push(char st[][50]);
void pop(char st[][50]);
void peek3(char st[][50]);
void display3(char st[][50]);
void bubble_sort(char st[][50],int top);
void linear_search(char st[][50],int top);
void binary_search(char st[][50],int top);

struct imptree
{
	char name[40];
	char fname[40];
	int age;
	char gender[10];
	char ph[50];
	char desig[60];
	char sal[40];
	char lab_no[40];
	struct imptree *left;
	struct imptree *right;
};

struct imptree *tree=NULL; 
struct imptree *insert_element(struct imptree *);
struct imptree *search_element(struct imptree *);
int totalNodes(struct imptree *);
struct imptree *deleteTree(struct imptree *);

void main()
{
	int choice,value;
	int choice1,value1;
	int choice2,value2;
	int choice3,value3;
	int choice4,value4;
	choice=0;
	system("setterm -bold on");
	printf("\n\n\n\t\t\t\t\t\t\t ***** Welcome To Jupiter Hospital *****\n\n\n\n\n");
	system("setterm -bold off");

	while(choice!=5)
	{
		printf("*****Main Menu*****\n");
		printf("1. Appointment Registration\n");
		printf("2. Pateint List\n");
		printf("3. Doctor Availability List\n");
		printf("4. Staff Members Details List\n");
		printf("5. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);

		switch(choice)
		{

			case 1:

				choice1=0;
				printf("\n\n");
				printf("*****Doctor's Appointment Registration Form*****\n");
				printf("\n\n");

				while(choice1!=5)
				{

					printf("******Main Menu******\n");
					printf("1. Add Pateint in the Queue\n");
					printf("2. Remove Pateint from the Queue\n");
					printf("3. Next Pateint Information\n");
					printf("4. Display all Pateints in the Queue\n");
					printf("5. Exit\n");
					printf("Enter your choice: ");
					scanf("%d",&choice1);

					switch(choice1)
					{
						case 1:
							insert();
							break;
						case 2: 
							delete(); 
							break;
						case 3:
							peek1();
							break;
						case 4:
							display1(); 
							break;
						case 5: 
							printf("Exiting Application\n");
							printf("\n");
							break;
						default: 
							printf("Invalid Choice\n");
							break;
					}
				}
				break;

			case 2:

				choice2=0;
				printf("\n\n");
				printf("*****Pateint List*****\n");
				printf("\n\n");

				while(choice2!=12)
				{
					printf("*****Main Menu*****\n");
					printf("1. Create a Pateint's list\n");
					printf("2. Display the Pateint's list\n");
					printf("3. Add a Pateint at the beginning\n");
					printf("4. Add a Pateint at the end\n");
					printf("5. Add a Pateint before a given Pateint\n");
					printf("6. Add a Pateint after a given Pateint\n");
					printf("7. Delete a Pateint at the beginning\n");
					printf("8. Delete a Pateint at the end\n");
					printf("9. Delete a given Pateint\n");
					printf("10. Delete a Pateint after a given Pateint\n");
					printf("11. Delete the entire Pateint's list\n");
					printf("12. Exit\n");
					printf("Enter your choice ");
					scanf("%d",&choice2);

					switch(choice2)
					{

						case 1:
							start=create_ll(start);
							printf("Linked List Created \n");
							break;
						case 2:
							start=display2(start);
							break;
						case 3:
							start=insert_beg(start);
							break;
						case 4:
							start=insert_end(start);
							break;
						case 5:
							start=insert_before(start);
							break;
						case 6:
							start=insert_after(start);
							break;
						case 7:
							start=delete_beg(start);
							break;
						case 8:
							start=delete_end(start);
							break;
						case 9:
							start=delete_node(start);
							break;
						case 10:
							start=delete_after(start);
							break;
						case 11:
							start=delete_list(start);
							break;
						case 12:
							printf("Exiting Application\n");
							printf("\n");
							break;
						default:
							printf("Invalid Choice\n");
							break;
					} 
				}
				break;

			case 3:

				choice3=0;
				printf("\n\n");
				printf("*****Doctor Availablity List*****\n");
				printf("\n\n");

				while(choice3!=8)
				{
					printf("*****Main Menu*****\n");
					printf("1. Enter a Doctor in Doctor Availablity List\n"); 
					printf("2. Appoint a Doctor from Doctor Avalibility List \n");
					printf("3. Next Doctor available for appointment\n");
					printf("4. Display all Doctors available\n");
					printf("5. Sort the Doctor Availability List\n");
					printf("6. Search the Doctor's name using Linear Search\n");
					printf("7. Search the Doctor's name using Binary Search\n");
					printf("8. Exit\n");
					printf("Enter your option ");
					scanf("%d",&choice3);

					switch(choice3)
					{
						case 1:
							push(st);
							break;
						case 2:
							pop(st);
							break;
						case 3:
							peek3(st);
							break;
						case 4:
							display3(st);
							break;
						case 5:
							bubble_sort(st,top);
							break;
						case 6:
							linear_search(st,top);
							break;
						case 7:
							binary_search(st,top);
							break;
						case 8:
							printf("The program is terminated\n");
							printf("\n");
							break;
						default :
							printf("You have entered an invalid option\n");
							break;
					}
				}
				break;

			case 4:

				choice4=0;
				printf("\n\n");
				printf("*****Staff Member Management Portal*****\n");
				printf("\n\n");
				while(choice4!=5)
				{
					printf("*****Main Menu*****\n");
					printf("1. Insert Staff Member\n");
					printf("2. Search Staff Member\n");
					printf("3. Find Total Staff Members in the Hospital\n");
					printf("4. Delete all Staff Member's Records\n");
					printf("5. Exit\n");
					printf("Enter your choice ");
					scanf("%d",&choice4);
					switch(choice4)
					{
						case 1:
							tree=insert_element(tree);
							break;
						case 2:
							tree=search_element(tree);
							break;
						case 3:
							printf("Total Staff Members in the Hospital is %d\n",totalNodes(tree));
							break;
						case 4:
							tree=deleteTree(tree);
							break;
						case 5:
							printf("Exiting Application\n");
							printf("\n");
							break;
						default:
							printf("Invalid Choice\n");
							break;
					}
				}
				break;

			case 5:

				printf("Exiting Application\n");
				break;

			default:

				printf("Invalid Choice\n");
				break;
		}
	}
}

void insert(int value)
{
	struct queue *new_node;
	new_node = (struct queue*)malloc(sizeof(struct queue));
	printf("\n");
	while(getchar() != '\n');
	printf("Enter the data of the pateint :\n");
	printf("Enter the Pateint's Name ");
	gets(new_node->name);
	printf("Enter the Pateint's Full Name ");
	gets(new_node->fname);
	printf("Enter the Pateint's Age ");
	scanf("%d",&new_node->age);
	while(getchar() != '\n');
	printf("Enter the Pateint's Blood Group ");
	gets(new_node->bg);
	printf("Enter the Pateint's Gender ");
	gets(new_node->gender);
	printf("Enter the Pateint's Phone Number ");
	gets(new_node->ph);
	printf("Enter the Pateint's Disease ");
	gets(new_node->disease);
	new_node->next = NULL;
	if(front == NULL)
	{
		front=new_node;
		rear=new_node;
	}
	else
	{
		rear->next=new_node;
		rear=new_node;
	}
	printf("\n");
	printf("Success!!! Your Appointment is fixed with the Doctor.\n");
	printf("You will soon receive a message regarding the same conveying the time of appoinment.\n");
	printf("Thanks for choosing Jupiter Hospital.\n");
	printf("\n");
}

void delete()
{
	printf("\n");
	if(front==NULL)
	{
		printf("Pateint Queue is Empty!!!\n");
	}
	else
	{
		struct queue *temp=front;
		front = front->next;
		printf("The Next Pateint to be examined is\n");
		printf("\n");
		printf("Pateint's Name : %s\n",temp->name);
		printf("Pateint's Full Name : %s\n",temp->fname);
		printf("Pateint's Age : %d\n",temp->age);
		printf("Pateint's Blood Group : %s\n",temp->bg);
		printf("Pateint's Gender : %s\n",temp->gender);
		printf("Pateint's Phone Number : %s\n",temp->ph);
		printf("Pateint's Disease : %s\n",temp->disease);
		free(temp);
	}
	printf("\n");
}

void peek1()
{
	printf("\n");
	struct queue *temp=front;
	if(front==NULL)
	{
		printf("Pateint Queue is empty\n");
	}
	else
	{
		printf("The Next Pateint in the Queue is\n");
		printf("\n");
		printf("Pateint's Name : %s\n",temp->name);
		printf("Pateint's Full Name : %s\n",temp->fname);
		printf("Pateint's Age : %d\n",temp->age);
		printf("Pateint's Blood Group : %s\n",temp->bg);
		printf("Pateint's Gender : %s\n",temp->gender);
		printf("Pateint's Phone Number : %s\n",temp->ph);
		printf("Pateint's Disease : %s\n",temp->disease);
	}
	printf("\n");
}

void display1()
{
	printf("\n");
	if(front == NULL)
	{
		printf("\nPateint Queue is Empty!!!");
	}
	else
	{
		struct queue *temp=front;
		while(temp!= NULL)
		{
			printf("Pateint's Name : %s\n",temp->name);
			printf("Pateint's Full Name : %s\n",temp->fname);
			printf("Pateint's Age : %d\n",temp->age);
			printf("Pateint's Blood Group : %s\n",temp->bg);
			printf("Pateint's Gender : %s\n",temp->gender);
			printf("Pateint's Phone Number : %s\n",temp->ph);
			printf("Pateint's Disease : %s\n",temp->disease);
			printf("\n");
			temp = temp->next;
		}
	}
	printf("\n");
}    

struct node *create_ll(struct node *start)
{
	struct node *new_node,*ptr;
	int num;
	char a[100],value;
	printf("Enter -1 to end\n");
	printf("Enter the Pateint Number : ");
	scanf("%d",&num);
	while(num!=-1)
	{
		new_node=(struct node *)malloc(sizeof(struct node));
		new_node->pat_no=num;
		while(getchar() != '\n');
		printf("Enter the data of the pateint :\n");
		printf("Enter the Pateint's Name ");
		gets(new_node->name);
		printf("Enter the Pateint's Full Name ");
		gets(new_node->fname);
		printf("Enter the Pateint's Age ");
		scanf("%d",&new_node->age);
		while(getchar() != '\n');
		printf("Enter the Pateint's Blood Group ");
		gets(new_node->bg);
		printf("Enter the Pateint's Gender ");
		gets(new_node->gender);
		printf("Enter the Pateint's Phone Number ");
		gets(new_node->ph);
		printf("Enter the Pateint's Disease ");
		gets(new_node->disease);
		printf("Enter the Pateint's allocated Doctor's Name ");
		gets(new_node->doc_name);
		printf("Enter the Pateint's date of admission ");
		gets(new_node->date);
		printf("Enter the Pateint's treatment type ");
		gets(new_node->treatment);
		printf("Enter the Pateint's medicines ");
		gets(new_node->med);
		if(start==NULL)
		{
			new_node->next=NULL;
			start=new_node;
		}
		else
		{
			ptr=start;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
		ptr->next=new_node;
		new_node->next=NULL;
		}

		printf("Enter the Pateint Number : ");
		scanf("%d",&num);
	}
	return start;
}

struct node *display2(struct node *start)
{
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("Pateint's Number : %d\n",ptr->pat_no);
		printf("Pateint's Name : %s\n",ptr->name);
		printf("Pateint's Full Name : %s\n",ptr->fname);
		printf("Pateint's Age : %d\n",ptr->age);
		printf("Pateint's Blood Group : %s\n",ptr->bg);
		printf("Pateint's Gender : %s\n",ptr->gender);
		printf("Pateint's Phone Number : %s\n",ptr->ph);
		printf("Pateint's Disease : %s\n",ptr->disease);
		printf("Pateint's allocated Doctor's Name : %s\n",ptr->doc_name);
		printf("Pateint's date of admission : %s\n",ptr->date);
		printf("Pateint's treatment type : %s\n",ptr->treatment);
		printf("Pateint's medicines : %s\n",ptr->med);
		printf("\n");
		ptr=ptr->next;
	}
	return start;
}

struct node *insert_beg(struct node *start)
{
	struct node *new_node;
	int num;
	printf("Enter the Pateint Number : ");
	scanf("%d",&num);
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->pat_no=num;
	while(getchar() != '\n');
	printf("Enter the data of the pateint :\n");
	printf("Enter the Pateint's Name ");
	gets(new_node->name);
	printf("Enter the Pateint's Full Name ");
	gets(new_node->fname);
	printf("Enter the Pateint's Age ");
	scanf("%d",&new_node->age);
	while(getchar() != '\n');
	printf("Enter the Pateint's Blood Group ");
	gets(new_node->bg);
	printf("Enter the Pateint's Gender ");
	gets(new_node->gender);
	printf("Enter the Pateint's Phone Number ");
	gets(new_node->ph);
	printf("Enter the Pateint's Disease ");
	gets(new_node->disease);
	printf("Enter the Pateint's allocated Doctor's Name ");
	gets(new_node->doc_name);
	printf("Enter the Pateint's date of admission ");
	gets(new_node->date);
	printf("Enter the Pateint's treatment type ");
	gets(new_node->treatment);
	printf("Enter the Pateint's medicines ");
	gets(new_node->med);
	new_node->next=start;
	start=new_node;
	return start;
}

struct node *insert_end(struct node *start)
{
	struct node *ptr,*new_node;
	int num;
	printf("Enter the Pateint Number : ");
	scanf("%d",&num);
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->pat_no=num;
	while(getchar() != '\n');
	printf("Enter the data of the pateint :\n");
	printf("Enter the Pateint's Name ");
	gets(new_node->name);
	printf("Enter the Pateint's Full Name ");
	gets(new_node->fname);
	printf("Enter the Pateint's Age ");
	scanf("%d",&new_node->age);
	while(getchar() != '\n');
	printf("Enter the Pateint's Blood Group ");
	gets(new_node->bg);
	printf("Enter the Pateint's Gender ");
	gets(new_node->gender);
	printf("Enter the Pateint's Phone Number ");
	gets(new_node->ph);
	printf("Enter the Pateint's Disease ");
	gets(new_node->disease);
	printf("Enter the Pateint's allocated Doctor's Name ");
	gets(new_node->doc_name);
	printf("Enter the Pateint's date of admission ");
	gets(new_node->date);
	printf("Enter the Pateint's treatment type ");
	gets(new_node->treatment);
	printf("Enter the Pateint's medicines ");
	gets(new_node->med);
	new_node->next=NULL;
	ptr=start;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=new_node;
	return start;
}

struct node *insert_before(struct node *start)
{
	struct node *new_node,*ptr,*preptr;
	int num,val;
	printf("Enter the Pateint Number : ");
	scanf("%d",&num);
	printf("Enter the Pateint Number before which the new Pateint has to be added : ");
	scanf("%d",&val);
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->pat_no=num;
	while(getchar() != '\n');
	printf("Enter the data of the pateint :\n");
	printf("Enter the Pateint's Name ");
	gets(new_node->name);
	printf("Enter the Pateint's Full Name ");
	gets(new_node->fname);
	printf("Enter the Pateint's Age ");
	scanf("%d",&new_node->age);
	while(getchar() != '\n');
	printf("Enter the Pateint's Blood Group ");
	gets(new_node->bg);
	printf("Enter the Pateint's Gender ");
	gets(new_node->gender);
	printf("Enter the Pateint's Phone Number ");
	gets(new_node->ph);	
	printf("Enter the Pateint's Disease ");
	gets(new_node->disease);
	printf("Enter the Pateint's allocated Doctor's Name ");
	gets(new_node->doc_name);
	printf("Enter the Pateint's date of admission ");
	gets(new_node->date);
	printf("Enter the Pateint's treatment type ");
	gets(new_node->treatment);
	printf("Enter the Pateint's medicines ");
	ptr=start;
	while(ptr->pat_no!=val)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=new_node;
	new_node->next=ptr;
	return start;
}

struct node *insert_after(struct node *start)
{
	struct node *new_node,*ptr,*preptr;
	int num,value;
	printf("Enter the Pateint Number : ");
	scanf("%d",&num);
	printf("Enter the Pateint Number after which the new Pateint has to be inserted : ");
	scanf("%d",&value);
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->pat_no=num;
	while(getchar() != '\n');
	printf("Enter the data of the pateint :\n");
	printf("Enter the Pateint's Name ");
	gets(new_node->name);
	printf("Enter the Pateint's Full Name ");
	gets(new_node->fname);
	printf("Enter the Pateint's Age ");
	scanf("%d",&new_node->age);
	while(getchar() != '\n');
	printf("Enter the Pateint's Blood Group ");
	gets(new_node->bg);
	printf("Enter the Pateint's Gender ");
	gets(new_node->gender);
	printf("Enter the Pateint's Phone Number ");
	gets(new_node->ph);
	printf("Enter the Pateint's Disease ");
	gets(new_node->disease);
	printf("Enter the Pateint's allocated Doctor's Name ");
	gets(new_node->doc_name);
	printf("Enter the Pateint's date of admission ");
	gets(new_node->date);
	printf("Enter the Pateint's treatment type ");
	gets(new_node->treatment);
	printf("Enter the Pateint's medicines ");
	gets(new_node->med);
	ptr=start;
	preptr=ptr;
	while(preptr->pat_no!=value)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=new_node;
	new_node->next=ptr;
	return start;
}

struct node *delete_beg(struct node *start)
{
	struct node *ptr;
	ptr=start;
	start=start->next;
	free(ptr);
	return start;
}

struct node *delete_end(struct node *start)
{
	struct node *ptr,*preptr;
	ptr=start;
	while(ptr->next!=NULL)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=NULL;
	free(ptr);
	return start;
}

struct node *delete_node(struct node *start)
{
	struct node *ptr,*preptr;
	int value;
	printf("Enter the Pateint Number which has to be deleted ");
	scanf("%d",&value);
	ptr=start;
	if(ptr->pat_no==value)
	{
		start=delete_beg(start);
		return start;
	}
	else
	{
		while(ptr->pat_no!=value)
		{
			preptr=ptr;
			ptr=ptr->next;
		}
		preptr->next=ptr->next;
		free(ptr);
		return start;
	}
}

struct node *delete_after(struct node *start)
{
	struct node *ptr,*preptr;
	int value;
	printf("Enter the Pateint Number after which the Pateint has to be deleted : ");
	scanf("%d",&value);
	ptr=start;
	preptr=ptr;
	while(preptr->pat_no!=value)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=ptr->next;
	free(ptr);
	return start;
}

struct node *delete_list(struct node *start)
{ 
	struct node *ptr;
	if(start!=NULL)
	{
		ptr=start;
		while(ptr!=NULL)
		{
			printf("%s is the Pateint Name to be deleted next\n",ptr->name);
			start=delete_beg(ptr);
			ptr=start;
		}
	}
	return start;
}

void push(char st[][50])
{
	if(top==max-1)
	{
		printf("Doctor Availablity List Stack Overflow\n");
		printf("The Doctor's Name is not stored\n");
	}
	else
	{
		top=top+1;
		printf("Enter the Name of Available Doctor : ");
		scanf("%s",st[top]);
	}
}

void pop(char st[][50])
{
	if(top==-1)
	{
		printf("Doctor Availablity List Stack Underflow\n");
	}
	else
	{
		printf("The Doctor appointed is : %s\n",st[top]);
		top=top-1;
	}
}

void peek3(char st[][50])
{
	if(top==-1)
	{
		printf("Doctor Availablity List Stack is empty\n");
	}
	else
	{
		printf("The next Doctor to be appointed is : %s\n",st[top]);
	}
}

void display3(char st[][50])
{
	int i;
	if(top==-1)
	{
		printf("Doctor Availablity List Stack is empty\n");
	}
	else
	{
		printf("The available Doctors are :\n");
		for(i=top;i>=0;i--)
		{
			printf("%s\n",st[i]);
		}
	}
}

void bubble_sort(char st[][50],int top)
{
	int i,j,n;
	char sorted[50][50];
	char temp[50][50];
	n=top;
	for(i=0;i<=n;i++)
	{
		strcpy(sorted[i],st[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n-1-i;j++)
		{
			if(strcmp(sorted[j],sorted[j+1])>0)
			{
				strcpy(temp[0],sorted[j]);
				strcpy(sorted[j],sorted[j+1]);
				strcpy(sorted[j+1],temp[0]);
			}
		}
	}
	printf("The Doctor Availability List in sorted order is\n");
	for(i=0;i<=n;i++)
	{
		printf("%s\n",sorted[i]);
	}
}

void linear_search(char st[][50],int top)
{
	int n,found,i;
	char target[50][50];
	n=top;
	found=0;
	printf("Enter the name of the Doctor to be searched ");
	scanf("%s",target[0]);
	for(i=0;i<=n;i++)
	{
		if(strcmp(st[i],target[0])==0)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("The Doctor %s's name is found at location a[%d]\n",target[0],i);
	}
	else
	{
		printf("The Doctor %s's name is not found in the list\n",target[0]);
	}
}

void binary_search(char st[][50],int top)
{
	int i,j,n,beg,end,mid,found;
	found=0;
	beg=0;
	end=top;
	char target[50][50];
	char sorted[50][50];
	char temp[50][50];
	n=top;
	for(i=0;i<=n;i++)
	{
		strcpy(sorted[i],st[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n-1-i;j++)
		{
			if(strcmp(sorted[j],sorted[j+1])>0)
			{
				strcpy(temp[0],sorted[j]);
				strcpy(sorted[j],sorted[j+1]);
				strcpy(sorted[j+1],temp[0]);
			}
		}
	}
	printf("Enter the name of the Doctor to be searched ");
	scanf("%s",target[0]);
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(strcmp(sorted[mid],target[0])==0)
		{
			printf("Doctor %s's name is present at the array position a[%d]\n",target[0],mid);
			found=1;
			break;
		}
		else if(strcmp(sorted[mid],target[0])>0)
		{
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
	}
	if(beg>end || found==0)
	{
		printf("Doctor %s's name does not exist in the List\n",target[0]);
	}
}

struct imptree *insert_element(struct imptree *tree)
{
	int value;
	struct imptree *ptr,*nodeptr,*parentptr;
	ptr=(struct imptree *)malloc(sizeof(struct imptree));
	while(getchar() != '\n');
	printf("Enter the details of the Staff Members :\n");
	printf("Enter the Staff's Name ");
	gets(ptr->name);
	printf("Enter the Staff's Full Name ");
	gets(ptr->fname);
	printf("Enter the Staff's Age ");
	scanf("%d",&ptr->age);
	while(getchar() != '\n');
	printf("Enter the Staff's Gender ");
	gets(ptr->gender);
	printf("Enter the Staff's Phone Number ");
	gets(ptr->ph);
	printf("Enter the Staff's Designation ");
	gets(ptr->desig);
	printf("Enter the Staff's Salary ");
	gets(ptr->sal);
	printf("Enter the Staff's allocated Lab's Number ");
	gets(ptr->lab_no);
	ptr->left=NULL;
	ptr->right=NULL;
	if(tree==NULL)
	{
		tree=ptr;
		tree->left=NULL;
		tree->right=NULL;
	}
	else
	{
		parentptr=NULL;
		nodeptr=tree;
		while(nodeptr!=NULL)
		{
			parentptr=nodeptr;
			if(strcmp(nodeptr->name,ptr->name)>0)
			{
				nodeptr=nodeptr->left;
			}
			else
			{
				nodeptr=nodeptr->right;
			}
		}
		if(strcmp(parentptr->name,ptr->name)>0)
		{
			parentptr->left=ptr;
		}
		else
		{
			parentptr->right=ptr;
		}
	}
	return tree;
}

struct imptree *search_element(struct imptree *tree)
{
	struct imptree *ptr,*nodeptr,*parentptr;
	char target[50][50];
	parentptr=NULL;
	nodeptr=tree;
	printf("Please Enter the Staff Member to be searched ");
	scanf("%s",target[0]);
	if(tree==NULL)
	{
		printf("The Staff Member List is Empty\n");
		return tree;
	}
	while(strcmp(nodeptr->name,target[0])!=0)
	{
		parentptr=nodeptr;
		if(strcmp(nodeptr->name,target[0])>0)
		{
			nodeptr=nodeptr->left;
		}
		else
		{
			nodeptr=nodeptr->right;
		}
	}
	printf("\n");
	if(strcmp(nodeptr->name,target[0])==0)
	{
		printf("Staff's Name : %s\n",nodeptr->name);
		printf("Staff's Full Name : %s\n",nodeptr->fname);
		printf("Staff's Age : %d\n",nodeptr->age);
		printf("Staff's Gender : %s\n",nodeptr->gender);
		printf("Staff's Phone Number : %s\n",nodeptr->ph);
		printf("Staff's Designation : %s\n",nodeptr->desig);
		printf("Staff's Salary : %s\n",nodeptr->sal);
		printf("Staff's allocated Lab Number : %s\n",nodeptr->lab_no);
	}
	else
	{
		printf("The Staff Mamber Name %s is not found\n",target[0]);
	}
	return tree;
}

int totalNodes(struct imptree *tree)
{
	if(tree==NULL)
	{
		return 0;
	}
	else
	{
		return (totalNodes(tree->left)+totalNodes(tree->right)+1);
	}
}

struct imptree *deleteTree(struct imptree *tree)
{
	if(tree!=NULL)
	{
		deleteTree(tree->left);
		deleteTree(tree->right);
		free(tree);
	}
	tree=NULL;
	return tree;
}
