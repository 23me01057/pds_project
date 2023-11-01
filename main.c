#include<stdio.h>  
#include<string.h>  
#include<ctype.h>  
#include<conio.h>
#include<stdlib.h>
/*PDS LAB CAPSTONE PROJECT */
struct login{
    char fname[100];
    char lname[20];
    char username[20];
    char password[20];

}l;
void login(){
    char username[200],password[20];
    FILE *log;
    log=fopen("login12.txt","r");
    struct login l;
    printf("USERID:");
    scanf("%s",&username);
    printf("PASSWORD:");
    scanf("%s",&password);
    while(fread(&l,sizeof(l),1,log)){
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0){
            printf("\nsuccessful login\n");
            return;
        }
        else{
            printf("incorrect loginID or password");
            break;
        }}
        fclose(log);
    }
void registe() {
    FILE * log;
    log=fopen("login12.txt","w");
    struct login l;
    printf("enter first name:");scanf("%s",l.fname);
    printf("Enter Last name:");scanf("%s",l.lname);
    printf("enter username:"); scanf("%s",l.username);
    printf("enter password(put a strong password of atleast 6 characters):"); scanf("%s",l.password);
    fwrite(&l,sizeof(l),1,log);
    fclose(log);
    printf("\nyour username is your userid\nnow login with userID and password\npress any key to continue.....");
    getch();
    system("CLS");
    login();}
struct ad  
{  
    char name[130];  
    char brand[30];
    char img[350];  
    int price,sno;  
} x[100]; 
struct consumer  
{  
    char name[30];  
    char city[30];  
    int mobile,uno;  
} x1[100];
struct kart  
{  
    char name[30];  
    char brand[30];  
    int price,quantity;  
} x2[100];      
int n,i,j=0,a=0,sum=0,g,flag,num;  
void read();  
void add();  
void view();  
void search();  
void edit();  
void del();  
void show();  
struct item  
{  
    int productno;  
    char productname[10];  
    int quantity;  
    int price;  
}  
item;  
struct customer  
{  
    int productno;  
    char productname[10];  
    int quantity;  
    int price;  
    int amount;  
}  ;
void Search()  
{  
    int s,h,f;  
    char u[100];  
    printf("By what do you want to search ?\n");  
    printf("1.Serial no.\n2.Name\n3.brand\n\nOption = ");  
    scanf("%d",&h);  
    if(h==1)  
    {  
        printf("Enter Serial number of the product=");  
        scanf("%d",&s);  
        if(s<num)  
        {  
            printf("\n");  
            printf("Serial Number=%d\n",s);  
            printf("Name = ");  
            puts(x[s].name);
            printf("image = ");  
            puts(x[i].img);  
            printf("brand = ");  
            puts(x[s].brand);  
            printf("serial no = %d\nprice = %d",x[s].sno,x[s].price);  
            printf("\n\n");
            int kl,kl2,kl3;char address[70];
            printf(" do you want to buy(1/0):");
            scanf("%d",&kl);
            if(kl==1){
                printf("\nenter choice:");
                scanf("%d",&kl2);
                printf("\nenter quantity:");
                scanf("%d",&kl3);
                printf("\nenter address:");
                scanf("%s",&address);
                printf("*******************************************invoice************************************");
                printf("\nthanks for shopping with us\nyour order's on the way\ndo come again\ntotal amount =%d",kl3*(x[s].price));
                return;
    }
            else{
                return;
    }  
        }  
        else  
            printf("\n\nNot Found\n\n");  
    }  
    else if(h==2)  
    {  
        int f=1;  
        fflush(stdin);  
        printf("Enter name=");  
        gets(u);  
        fflush(stdin);  
        for(g=0; g<num; g++)  
        {  
            if(strcmp(u,x[g].name)==0)  
            {  
                printf("\n");  
                printf("Serial Number=%d\n",g);  
                printf("Name = ");  
                puts(x[g].name);
                printf("image = ");  
                puts(x[i].img);  
                printf("brand = ");  
                puts(x[g].brand);  
                printf("serial no = %d\nprice= %d",x[g].sno,x[g].price);  
                printf("\n\n");  
                f=0;
                int kl,kl2,kl3;char address[70];
                printf(" do you want to buy(1/0):");
                scanf("%d",&kl);
                if(kl==1){
                    printf("\nenter choice:");
                    scanf("%d",&kl2);
                    printf("\nenter quantity:");
                    scanf("%d",&kl3);
                    printf("\nenter address:");
                    scanf("%s",&address);
                    printf("*******************************************invoice************************************");
                    printf("\nthanks for shopping with us\nyour order's on the way\ncome again\ntotal amount =%d",kl3*x[g].price);
                return;
                    return;
    }
                else{
                    return;
    }    
  
            }  
        }  
        if(f==1)  
            printf("\nNot Found\n");  
  
  
  
    }  
    else if(h==3)  
    {  
        int f3=1;  
        fflush(stdin);  
        printf("Enter brand = ");  
        gets(u);  
        fflush(stdin);  
        for(g=0; g<num; g++)  
        {  
            if(strcmp(u,x[g].brand)==0)  
            {  
                printf("\n");  
                printf("Serial Number=%d\n",g);  
                printf("Name = ");  
                puts(x[g].name); 
                printf("image = ");  
                puts(x[i].img); 
                printf("brand = ");  
                puts(x[g].brand);  
                printf("serial no = %d\nprice = %d",x[g].sno,x[g].price);  
                printf("\n\n");  
                f3=0; 
                int kl,kl2,kl3;char address[70];
                printf(" do you want to buy(1/0):");
                scanf("%d",&kl);
                if(kl==1){
                    printf("\nenter choice:");
                    scanf("%d",&kl2);
                    printf("\nenter quantity:");
                    scanf("%d",&kl3);
                    printf("\nenter address:");
                    scanf("%s",&address);
                    printf("*******************************************invoice************************************");
                    printf("\nthanks for shopping with us\ncome again\ntotal amount =%d",kl3*x[g].price);
                return;
                    return;
    }
                else{
                    return;
    }   
            }  
  
  
        }  
        if(f3==1)  
            printf("\nNot Found\n");  
  
  
    }   
    else  
        printf("\n\nInvalid input\n\n");  
}  
void search_c()  
{  
    int s,h,f2;  
    char u[100];   
    printf("Enter user no.=");  
    scanf("%d",&s);   
    f2=1;  
    fflush(stdin);  
    printf("Enter name=");  
    gets(u);  
    fflush(stdin);  
    for(g=0; g<num; g++)  
        {  
        if(strcmp(u,x[g].name)==0)  
            {  
            return ;
            }   
        else  
            printf("\nNot Found\n"); }   
    if(f2!=1) 
        printf("\n\nInvalid input\n\n");  
}  
void Del()  
{  
    int f,h;  
    printf("Enter the serial number of the product that you want to delete=");  
    scanf("%d",&f);  
    if(f<num)  
    {  
        printf("What do you want ?\n");  
        printf("1.Remove the entire item \n2.change quantity \nOption = ");  
        scanf("%d",&h);  
        if(h==1)  
        {  
            while(f<num)  
            {  
                strcpy(x2[f].name,x2[f+50].name);  
                strcpy(x2[f].brand,x2[f+50].brand);
                x2[f].price=x2[f+50].price; 
                x2[f].quantity=x2[f+50].quantity; 
                f++;  
            }  
            num--;  
        }  
        else if(h==2)  
            {  
                fflush(stdin);  
                printf("Enter the new quantity=");  
                scanf("%d",&x2[f].quantity);  
            }    
          
        else  
        {  
            printf("\n\nInvalid Serial \nTry Again !!\n\n");  
        } }   
    else  
        printf("\n\nInvalid Serial number\n");  
  
}  
void Read()  
{  
    FILE *fp = fopen("cart.txt","r");  
    if(fp == NULL)  
    {  
        fp = fopen("cart.txt","w");  
        fclose(fp);  
        printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");  
        return ;  
    }  
  
    num = fread(x, sizeof(struct ad),100, fp);  
    fclose(fp);  
}  
void Write()  
{  
    FILE *fp = fopen("consumer.txt","w");  
    if(fp == NULL)  
    {  
        printf("Error");  
        exit(1);  
    }  
    fwrite(x, sizeof(struct ad),num, fp);  
  
    fclose(fp);  
} 
void add()  
{  
    printf("\n\n");  
    printf("Already data inputed on the database =%d\n\n",num);//how many inputs  
    printf("How many entries do you want to add=\n");  
    scanf("%d",&n);  
    sum=n+num;  
  
    for(i=num,j=0; i<sum; i++)  
    {  
        printf("\n");  
        fflush(stdin);  
        printf("Enter product's Name = ");  
        gets(x[i].name);  
        fflush(stdin);  
        printf("Enter brand = ");  
        gets(x[i].brand);  
        fflush(stdin);
        printf("Enter product's image link = ");  
        gets(x[i].img);  
        fflush(stdin);    
        printf("Enter price = ");  
        scanf("%d",&x[i].price);  
        fflush(stdin);  
        printf("Enter serial no = ");  
        scanf("%d",&x[i].sno);  
        fflush(stdin);  
        printf("\n");  
        j++;  
        a++;  
        num++;  
    }  
}  
  
void View()  
{  
    for(i=0; i<num; i++)  
    {  
        printf("\n");  
        printf("Serial Number=%d\n",i);  
        printf("Name = ");  
        puts(x[i].name);
        printf("image = ");  
        puts(x[i].img);  
        printf("brand = ");  
        puts(x[i].brand);  
        printf("serial no. = %d\nprice=%d",x[i].sno,x[i].price);  
        printf("\n\n");}
    int kl,kl2,kl3;char address[70];
    printf(" do you want to buy(1/0):");
    scanf("%d",&kl);
    if(kl==1){
        printf("\nenter choice:");
        scanf("%d",&kl2);
        printf("\nenter quantity:");
        scanf("%d",&kl3);
        printf("\nenter address:");
        scanf("%s",&address);
        printf("*******************************************invoice************************************");
        printf("\nthanks for shopping with us\ncome again\ntotal amount =%d",kl3*x[kl2].price);
        return;
    }
    else{
        return;
    }   
  
}  
void view()  
{  
    for(i=0; i<num; i++)  
    {  
        printf("\n");  
        printf("Serial Number=%d\n",i);  
        printf("Name = ");  
        puts(x[i].name);
        printf("image = ");  
        puts(x[i].img);  
        printf("brand = ");  
        puts(x[i].brand);  
        printf("serial no. = %d\nprice=%d",x[i].sno,x[i].price);  
        printf("\n\n");  
    }  
}  
void edit()  
{  
    int q,p;  
    fflush(stdin);  
    printf("What do you want to edit ?\n");  
    printf("Enter your option\n");  
    printf("1.Name\n2.brand\n3.price\n");  
    printf("Option=");  
    scanf("%d",&q);//option  
    if(q<=5)  
    {  
        printf("Enter the serial no.= (0 - %d)=",num-1);  
        scanf("%d",&p);//serial number  
        if(p<num)  
        {  
            if(q==1)  
            {  
                fflush(stdin);  
                printf("Enter the new name=");  
                gets(x[p].name);  
  
            }  
            else if(q==2)  
            {  
                fflush(stdin);  
                printf("Enter the new brand name=");  
                gets(x[p].brand);  
            }  
            else if(q==3)  
            {  
                fflush(stdin);  
                printf("Enter the new price=");  
                scanf("%d",&x[p].price);  
            }  
  
            else if(q==4)  
            {  
                fflush(stdin);  
                printf("Enter the new serial no=");  
                scanf("%d",&x[p].sno);  
            }    
        }  
        else  
        {  
            printf("\n\nInvalid Serial \nTry Again !!\n\n");  
        }  
    }  
    else  
    {  
        printf("\n\nInvalid option\nTry Again!!\n\n");  
    }  
}  
void search()  
{  
    int s,h,f;  
    char u[100];  
    printf("By what do you want to search ?\n");  
    printf("1.Serial no.\n2.Name\n3.brand\n4.price\n\nOption = ");  
    scanf("%d",&h);  
    if(h==1)  
    {  
        printf("Enter Serial number of the product=");  
        scanf("%d",&s);  
        if(s<num)  
        {  
            printf("\n");  
            printf("Serial Number=%d\n",s);  
            printf("Name = ");  
            puts(x[s].name);
            printf("image = ");  
            puts(x[s].img);  
            printf("brand = ");  
            puts(x[s].brand);  
            printf("serial no = %d\nprice = %d",x[s].sno,x[s].price);  
            printf("\n\n");  
        }  
        else  
            printf("\n\nNot Found\n\n");  
    }  
    else if(h==2)//problem is here.........  
    {  
        int f=1;  
        fflush(stdin);  
        printf("Enter name=");  
        gets(u);  
        fflush(stdin);  
        for(g=0; g<num; g++)  
        {  
            if(strcmp(u,x[g].name)==0)  
            {  
                printf("\n");  
                printf("Serial Number=%d\n",g);  
                printf("Name = ");  
                puts(x[g].name);
                printf("image = ");  
                puts(x[g].img);  
                printf("brand = ");  
                puts(x[g].brand);  
                printf("serial no = %d\nprice= %d",x[g].sno,x[g].price);  
                printf("\n\n");  
                f=0;  
  
            }  
        }  
        if(f==1)  
            printf("\nNot Found\n");  
  
  
  
    }  
    else if(h==3)  
    {  
        int f=1;  
        fflush(stdin);  
        printf("Enter brand = ");  
        gets(u);  
        fflush(stdin);  
        for(g=0; g<num; g++)  
        {  
            if(strcmp(u,x[g].brand)==0)  
            {  
                printf("\n");  
                printf("Serial Number=%d\n",g);  
                printf("Name = ");  
                puts(x[g].name); 
                printf("image = ");  
                puts(x[g].img); 
                printf("brand = ");  
                puts(x[g].brand);  
                printf("serial no = %d\nprice = %d",x[g].sno,x[g].price);  
                printf("\n\n");  
                f=0;  
            }  
  
  
        }  
        if(f==1)  
            printf("\nNot Found\n");  
  
  
    }  
    else if(h==4)  
    {  
        int f=1;  
        printf("Enter Cabin number = ");  
        scanf("%d",&f);  
        for(g=0; g<num; g++)  
        {  
            if(f==x[g].sno)  
            {  
                printf("\n");  
                printf("Serial Number=%d\n",g);  
                printf("Name = ");  
                puts(x[g].name);
                printf("image = ");  
                puts(x[g].img);  
                printf("brand = ");  
                puts(x[g].brand);  
                printf("serial no = %d\nprice= %d",x[g].sno,x[g].price);  
                printf("\n\n");  
                f=0;  
            }  
  
        }  
        if(f==1)  
            printf("Not Found\n\n");  
  
    }   
    else  
        printf("\n\nInvalid input\n\n");  
}  
void del()  
{  
    int f,h;  
    printf("Enter the serial number of the product that you want to delete=");  
    scanf("%d",&f);  
    if(f<num)  
    {  
        printf("What do you want ?\n");  
        printf("1.Remove the whole record\n2.Remove Name\n3.Remove brand\n4.remove price\nOption = ");  
        scanf("%d",&h);  
        if(h==1)  
        {  
            while(f<num)  
            {  
                strcpy(x[f].name,x[f+50].name);
                strcpy(x[f].img,x[f+50].img);  
                strcpy(x[f].brand,x[f+50].brand);   
                x[f].sno=x[f+50].sno;  
                f++;  
            }  
            num--;  
        }  
        else if(h==2)  
        {  
            strcpy(x[f].name,"Cleared");  
  
        }  
        else if(h==3)  
        {  
            strcpy(x[f].brand,"Cleared");  
        }  
        else if(h==4)  
        {  
            x[f].price=0;  
        }
    }  
    else  
        printf("\n\nInvalid Serial number\n");  
  
}  
void read()  
{  
    FILE *fp = fopen("product.txt","r");  
    if(fp == NULL)  
    {  
        fp = fopen("product.txt","w");  
        fclose(fp);  
        printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");  
        return ;  
    }  
  
    num = fread(x, sizeof(struct ad),100, fp);  
    fclose(fp);  
}  
void write()  
{  
    FILE *fp = fopen("product.txt","w");  
    if(fp == NULL)  
    {  
        printf("Error");  
        exit(1);  
    }  
    fwrite(x, sizeof(struct ad),num, fp);  
  
    fclose(fp);  
} 
/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/  
int main(){
    int choice;
    int cho;
    printf("\n************************************************WELCOME TO RCM E-SHOPPING SITE************************************************");
    printf("\npress '1' for sign up\npress '2' to login\n");
    scanf("%d",&cho);
    if(cho==1){
        system("CLS");
        registe();
    }
    else if(cho==2){
        system("CLS");
        login();
    }
    printf("\n\nenter choice(1/2) for consumer/vendor:");
    scanf("%d",&choice);
    if(choice==1){ 
        read();  
        int c,i,q;  
        printf("shopping corner\n");  
        int m,n;  
        while(c!=6)  
    {  
  
            printf("\n**Enter your choice**\n\n1. View Information\n2. Search\n3. Exit\n\nOption=");  
            scanf("%d",&c);//choice for option  
            fflush(stdin);//making it clear  
            if(c==1)//add  
        {  
                system("cls");  
                View();  
        }  
            else if(c==2)//search  
        {  
                system("cls");  
                Search();  
        }    
            else if(c==3)  
        {  
                write();  
                return 0;  
        }  
            else  
        {  
                system("cls");  
                printf("\n\nInvalid input , try again by using valid inputs");  
        }  
            printf("\n\n");  
    }
    return 0;
}
    if(choice==2){
        read();  
        int c,i,q;  
        printf("\nproduct inventory management system\n");  
        int m,n;

        while(c!=6 )  
    {  
            printf("**Enter your choice**\n\n1. Add product\n2. View Information\n3. Search\n4. Edit Information\n5. Delete Information\n6. Exit\n\nOption=");  
            scanf("%d",&c);//choice for option  
            fflush(stdin);//making it clear  
            if(c==1)//add  
        {  
                system("cls");  
                add();  
        }  
            else if(c==2)//view  
        {  
                system("cls");  
                view();  
        }  
            else if(c==3)//search  
        {  
                system("cls");  
                search();  
        }  
            else if(c==4)//edit  
        {  
                system("cls");  
                edit
                ();  
        }  
            else if(c==5)//delete  
        {  
                system("cls");  
                del();  
        }  
            else if(c==6)  
        {  
                write();  
                return 0;  
        }  
            else  
        {  
                system("cls");  
                printf("\n\nInvalid input , try again by using valid inputs");  
        }  
            printf("\n\n");  
    }  
    }
    return 0;
}