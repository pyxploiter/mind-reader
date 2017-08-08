#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void welcome(void);                
void end(char [],int , int);       
void thanks(void);

void main()
{
	int check;
	int counter = 0, i , j;
	int box1[16];
	int box2[16];
	int random;
	
	char column1[6];
	char column2[6];
	char column3[6];
	char column4[6];
	char column5[6];
	
	srand(time(NULL));
	random = 1+rand()%6;

	if (random == 1){
		column1[0] = 'A', column1[1] = 'F', column1[2]= 'K', column1[3] = 'P', column1[4] = 'U', column1[5] = 'Z';
		column2[0] = 'B', column2[1] = 'G', column2[2]= 'L', column2[3] = 'Q', column2[4] = 'V', column2[5] = '.';
		column3[0] = 'C', column3[1] = 'H', column3[2]= 'M', column3[3] = 'R', column3[4] = 'W', column3[5] = '*';
		column4[0] = 'D', column4[1] = 'I', column4[2]= 'N', column4[3] = 'S', column4[4] = 'X', column4[5] = '#';
		column5[0] = 'E', column5[1] = 'J', column5[2]= 'O', column5[3] = 'T', column5[4] = 'Y', column5[5] = ' ';
	}
	else if (random == 2){
		column1[0] = 'A', column1[1] = 'B', column1[2]= 'C', column1[3] = 'D', column1[4] = 'E', column1[5] = ' ';
		column2[0] = 'F', column2[1] = 'G', column2[2]= 'H', column2[3] = 'I', column2[4] = 'J', column2[5] = '.';
		column3[0] = 'K', column3[1] = 'L', column3[2]= 'M', column3[3] = 'N', column3[4] = 'O', column3[5] = '*';
		column4[0] = 'P', column4[1] = 'Q', column4[2]= 'R', column4[3] = 'S', column4[4] = 'T', column4[5] = '#';
		column5[0] = 'U', column5[1] = 'V', column5[2]= 'W', column5[3] = 'X', column5[4] = 'Y', column5[5] = 'Z';
	}
	else if (random == 3){
		column1[0] = 'A', column1[1] = 'G', column1[2]= 'M', column1[3] = 'S', column1[4] = 'Y', column1[5] = ' ';
		column2[0] = 'F', column2[1] = 'B', column2[2]= 'H', column2[3] = 'K', column2[4] = 'J', column2[5] = '.';
		column3[0] = 'I', column3[1] = 'O', column3[2]= 'C', column3[3] = 'N', column3[4] = 'L', column3[5] = 'Z';
		column4[0] = 'P', column4[1] = 'Q', column4[2]= 'R', column4[3] = 'D', column4[4] = 'T', column4[5] = '#';
		column5[0] = 'V', column5[1] = 'U', column5[2]= 'W', column5[3] = 'X', column5[4] = 'E', column5[5] = '*';
	}
	else if (random == 4){
		column1[0] = 'B', column1[1] = 'G', column1[2]= 'U', column1[3] = 'D', column1[4] = 'S', column1[5] = ' ';
		column2[0] = 'F', column2[1] = 'A', column2[2]= 'Y', column2[3] = 'N', column2[4] = 'J', column2[5] = '.';
		column3[0] = 'W', column3[1] = 'L', column3[2]= 'M', column3[3] = 'I', column3[4] = 'O', column3[5] = '*';
		column4[0] = 'Q', column4[1] = 'P', column4[2]= 'R', column4[3] = 'E', column4[4] = 'T', column4[5] = 'Z';
		column5[0] = 'C', column5[1] = 'V', column5[2]= 'K', column5[3] = 'X', column5[4] = 'H', column5[5] = '&';
	}
	else if (random ==5){
		column1[0] = 'E', column1[1] = 'D', column1[2]= 'C', column1[3] = 'I', column1[4] = 'A', column1[5] = ' ';
		column2[0] = 'F', column2[1] = 'H', column2[2]= 'M', column2[3] = 'B', column2[4] = 'J', column2[5] = '.';
		column3[0] = 'K', column3[1] = 'L', column3[2]= 'G', column3[3] = 'N', column3[4] = 'O', column3[5] = '*';
		column4[0] = 'V', column4[1] = 'P', column4[2]= 'R', column4[3] = 'X', column4[4] = 'S', column4[5] = '&';
		column5[0] = 'U', column5[1] = 'Q', column5[2]= 'W', column5[3] = 'T', column5[4] = 'Y', column5[5] = 'Z';
	}
	else {
		column1[0] = 'F', column1[1] = 'D', column1[2]= 'W', column1[3] = 'I', column1[4] = 'B', column1[5] = ' ';
		column2[0] = 'K', column2[1] = 'M', column2[2]= 'G', column2[3] = 'Y', column2[4] = 'J', column2[5] = '.';
		column3[0] = 'E', column3[1] = 'L', column3[2]= 'H', column3[3] = 'N', column3[4] = 'X', column3[5] = '*';
		column4[0] = 'P', column4[1] = 'U', column4[2]= 'C', column4[3] = 'S', column4[4] = 'O', column4[5] = '&';
		column5[0] = 'V', column5[1] = 'Q', column5[2]= 'R', column5[3] = 'T', column5[4] = 'A', column5[5] = 'Z';
	}
	
	char col1[6],col2[6],col3[6],col4[6],col5[6],col6[6],col7[6],col8[6];
	char col9[6], col10[6], col11[6],col12[6],col13[6],col14[6],col15[6];
	char word[15];
	
	welcome();
	system("color a");
	puts("=> Think a word and Enter the column number of each letter of your word given below.");
	puts("=> E.g. If the word is 'ALI', it's 1st letter is in column 1, 2nd letter is in column 2 &\n   3rd letter is in column 4.");
	puts("=> If more than 1 letters of word are in same column,enter that column number again and again");
	puts("\t\t-----------------------------------------");
	puts("\t\t|   1   |   2   |   3   |   4   |   5   |");
	puts("\t\t-----------------------------------------");
	
	for (i=0; i<6;i++){                                       
		for(j=0; j<2;j++){                                   
			if(j%2==0){
				printf("\t\t|%4c   |%4c   |%4c   |%4c   |%4c   |%4c\n",column1[i],column2[i],column3[i],column4[i],column5[i]); 
			}
			else {
				printf("\t\t|       |       |       |       |       |\n");    
			}
		}
	}
	puts("\t\t-----------------------------------------");
	printf("[NOTE] Enter 0 when you'll complete entering the column numbers of your word\n\n");
	
	do {
		printf("==> Enter Column number of letter #%d of your word: ", ++counter);
	    scanf_s("%d",&check);
		if (check != 0)                                    
			box1[counter-1]=check;                        
		else
			counter--;		                              
	} while (check != 0);
	
	system("CLS");
	system("color b"); 

	puts("===> Repeat the previous procedure again\n");
	puts("\t-------------------------------------------------");
	puts("\t|   1   |   2   |   3   |   4   |   5   |   6   |");
	puts("\t-------------------------------------------------");
	
	for(j=0;j<counter;j++){                                    
			if (box1[j] == 1){                                     
				for (i=0; i<6;i++){
					printf("\t|%4c",column1[i]);
					if (j==0)
						col1[i] = column1[i];
					else if (j==1)
						col2[i] = column1[i];
					else if (j==2)
						col3[i] = column1[i];
					else if (j==3)
						col4[i] = column1[i];
					else if (j==4)
						col5[i] = column1[i];
					else if (j==5)
						col6[i] = column1[i];
					else if (j==6)
						col7[i] = column1[i];
					else if (j==7)
						col8[i] = column1[i];
					else if (j==8)
						col9[i] = column1[i];
					else if (j==9)
						col10[i] = column1[i];
					else if (j==10)
						col11[i] = column1[i];
					else if (j==11)
						col12[i] = column1[i];
					else if (j==12)
						col13[i] = column1[i];
					else if (j==13)
						col14[i] = column1[i];
					else if (j==14)
						col15[i] = column1[i];
				}			
				puts("   |");
			}
			else if (box1[j] == 2){                             
				puts("\t");
				for (i=0; i<6;i++){
					printf("\t|%4c",column2[i]);
					if (j==0)
						col1[i] = column2[i];
					else if (j==1)
						col2[i] = column2[i];
					else if (j==2)
						col3[i] = column2[i];
					else if (j==3)
						col4[i] = column2[i];
					else if (j==4)
						col5[i] = column2[i];
					else if (j==5)
						col6[i] = column2[i];
					else if (j==6)
						col7[i] = column2[i];
					else if (j==7)
						col8[i] = column2[i];
					else if (j==8)
						col9[i] = column2[i];
					else if (j==9)
						col10[i] = column2[i];
					else if (j==10)
						col11[i] = column2[i];
					else if (j==11)
						col12[i] = column2[i];
					else if (j==12)
						col13[i] = column2[i];
					else if (j==13)
						col14[i] = column2[i];
					else if (j==14)
						col15[i] = column2[i];
				}
				puts("   |");
			}
			else if (box1[j] == 3){                            
				puts("\t");
				for (i=0; i<6;i++){
					printf("\t|%4c",column3[i]);
					if (j==0)
						col1[i] = column3[i];
					else if (j==1)
						col2[i] = column3[i];
					else if (j==2)
						col3[i] = column3[i];
					else if (j==3)
						col4[i] = column3[i];
					else if (j==4)
						col5[i] = column3[i];
					else if (j==5)
						col6[i] = column3[i];
					else if (j==6)
						col7[i] = column3[i];
					else if (j==7)
						col8[i] = column3[i];
					else if (j==8)
						col9[i] = column3[i];
					else if (j==9)
						col10[i] = column3[i];
					else if (j==10)
						col11[i] = column3[i];
					else if (j==11)
						col12[i] = column3[i];
					else if (j==12)
						col13[i] = column3[i];
					else if (j==13)
						col14[i] = column3[i];
					else if (j==14)
						col15[i] = column3[i];
				}
				puts("   |");
			}
			else if (box1[j] == 4){                            
				puts("\t");
				for (i=0; i<6;i++){
					printf("\t|%4c",column4[i]);
					if (j==0)
						col1[i] = column4[i];
					else if (j==1)
						col2[i] = column4[i];
					else if (j==2)
						col3[i] = column4[i];
					else if (j==3)
						col4[i] = column4[i];
					else if (j==4)
						col5[i] = column4[i];
					else if (j==5)
						col6[i] = column4[i];
					else if (j==6)
						col7[i] = column4[i];
					else if (j==7)
						col8[i] = column4[i];
					else if (j==8)
						col9[i] = column4[i];
					else if (j==9)
						col10[i] = column4[i];
					else if (j==10)
						col11[i] = column4[i];
					else if (j==11)
						col12[i] = column4[i];
					else if (j==12)
						col13[i] = column4[i];
					else if (j==13)
						col14[i] = column4[i];
					else if (j==14)
						col15[i] = column4[i];
				}
				puts("   |");
			}
			else if (box1[j] == 5){                           
				puts("\t");
				for (i=0; i<6;i++){
					printf("\t|%4c",column5[i]);
					if (j==0)
						col1[i] = column5[i];
					else if (j==1)
						col2[i] = column5[i];
					else if (j==2)
						col3[i] = column5[i];
					else if (j==3)
						col4[i] = column5[i];
					else if (j==4)
						col5[i] = column5[i];
					else if (j==5)
						col6[i] = column5[i];
					else if (j==6)
						col7[i] = column5[i];
					else if (j==7)
						col8[i] = column5[i];
					else if (j==8)
						col9[i] = column5[i];
					else if (j==9)
						col10[i] = column5[i];
					else if (j==10)
						col11[i] = column5[i];
					else if (j==11)
						col12[i] = column5[i];
					else if (j==12)
						col13[i] = column5[i];
					else if (j==13)
						col14[i] = column5[i];
					else if (j==14)
						col15[i] = column5[i];
				}
				puts("   |");
			}
	}
	puts("\n\t-------------------------------------------------");
	
	counter = 0;
	do {
		printf("==> Enter Column number of letter #%d of your word: ", ++counter);
	    scanf_s("%d",&check);
			if (check != 0)                                    
				box2[counter-1]=check;                        
			else
				counter--;		                               
	} while (check != 0);
	

	for(j=0;j<counter;j++){                                      
			if (j == 0){                             
				for (i = 1; i <= 6 ; i++){
					if (box2[j] == i)
					word[j] = col1[i-1];
				}
			}
			else if (j == 1){                              
				for (i = 1; i <= 6 ; i++){
					if (box2[j] == i)
					word[j] = col2[i-1];
				}
			}
			else if (j == 2){                             
				for (i = 1; i <= 6 ; i++){
					if (box2[j] == i)
					word[j] = col3[i-1];
				}
			}
			else if (j == 3){                            
				for (i = 1; i <= 6 ; i++){
					if (box2[j] == i)
					word[j] = col4[i-1];
				}
			}
			else if (j == 4){                            
				for (i = 1; i <= 6 ; i++){
					if (box2[j] == i)
					word[j] = col5[i-1];
				}
			}
			else if (j == 5){                            
				for (i = 1; i <= 6 ; i++){
					if (box2[j] == i)
					word[j] = col6[i-1];
				}
			}
			else if (j == 6){                           
				for (i = 1; i <= 6 ; i++){
					if (box2[j] == i)
					word[j] = col7[i-1];
				}
			}
			else if (j == 7){                           
				for (i = 1; i <= 6 ; i++){
					if (box2[j] == i)
					word[j] = col8[i-1];
				}
			}
			else if (j == 8){                            
				for (i = 1; i <= 6 ; i++){
					if (box2[j] == i)
					word[j] = col9[i-1];
				}
			}
			else if (j == 9){                           
				for (i = 1; i <= 6 ; i++){
					if (box2[j] == i)
					word[j] = col10[i-1];
				}
			}
			else if (j == 10){                            
				for (i = 1; i <= 6 ; i++){
					if (box2[j] == i)
					word[j] = col11[i-1];
				}
			}
			else if (j == 11){                            
				for (i = 1; i <= 6 ; i++){
					if (box2[j] == i)
					word[j] = col12[i-1];
				}
			}
			else if (j == 12){                            
				for (i = 1; i <= 6 ; i++){
					if (box2[j] == i)
					word[j] = col13[i-1];
				}
			}
			else if (j == 13){                           
				for (i = 1; i <= 6 ; i++){
					if (box2[j] == i)
					word[j] = col14[i-1];
				}
			}
			else if (j == 14){                            
				for (i = 1; i <= 6 ; i++){
					if (box2[j] == i)
					word[j] = col15[i-1];
				}
			}
	}
	end(word, 15, counter);
	thanks();
}

void welcome(void){
	
	int k;
	char welcome[87] = "\t===> Welcome To Xnonymous Productions :-P\n\n\t===> Have a look on my new software :-)";
	char next[100] = "\n\n\t===> Mind Reader..... Yes, A mind reader \n\n\t     that can read your mind. Won't you believe..?";
	char start[37] = "\t      ===> Okay..... Let's See <===";
	
	system("color 2f");

	/* Xnonymous Logo Start */
    printf("---------------------------------------------------------------------\n");
	printf("*   *   *    *   * *   *    *  *     *  *     *   * *   *   *  ***** \n");
	printf(" * *    * *  *  *   *  * *  *    * *    * * * *  *   *  *   *   *    \n");
	printf("  *     *  * *  *   *  *  * *     *     *  *  *  *   *  *   *     *  \n");
	printf("*   *   *    *   * *   *    *     *     *     *   * *   *****  ***** \n");
	printf("---------------------------------------------------------------------\n");
	/* Xnonymous Logo End */

	puts("\n\n\n\n\n\t--------------------------------------------------\n"); 
	printf("");
	for (k=0;k<87;k++){
		printf("%c", welcome[k]);
		_sleep(40);
	}
	for (k=0; k<100;k++){
		printf("%c", next[k]);
	    _sleep(40);
	}
	puts("\n\n\t--------------------------------------------------");
	_sleep(1000);
	system("CLS");
	puts("\n\n\n\n\n\n\t-------------------------------------------\n");
		for (k=0; k<37;k++){
		printf("%c",start[k]);
		_sleep(40);
	}
	puts("\n\n\t-------------------------------------------");

	_sleep(1000);
	system("CLS");

	puts("\t\t-----------------------------------------"); 
	printf("\t\t|        ====> Mind Reader <====        |\n");
	puts("\t\t-----------------------------------------");
}

void end(char word[], int size, int counter)
{
	system("CLS");
	system("color 4f");

	/* Xnonymous Logo Start */
    printf("---------------------------------------------------------------------\n");
	printf("*   *   *    *   * *   *    *  *     *  *     *   * *   *   *  ***** \n");
	printf(" * *    * *  *  *   *  * *  *    * *    * * * *  *   *  *   *   *    \n");
	printf("  *     *  * *  *   *  *  * *     *     *  *  *  *   *  *   *     *  \n");
	printf("*   *   *    *   * *   *    *     *     *     *   * *   *****  ***** \n");
	printf("---------------------------------------------------------------------\n");
	/* Xnonymous Logo End */

	puts("\n\n\t-------------------------------------------"); 
	printf("\t|===> Mind Reader Created By Asad Ali <===|\n");
	puts("\t-------------------------------------------");

		char result[26] = "\n\t   ===> Your Word is :"; 
	for (int j=0; j<26; j++){
		printf("%c",result[j]);
		_sleep(200);
	}

	for(int i=0; i<counter; i++){
	printf("%c", word[i]);
	_sleep(1000);
	}
	puts("\n\n\t-------------------------------------------\n");
	system("PAUSE");
}

void thanks(void){
	system("CLS");
	system("color 2f");

	puts("\n\n\n\t-----------------");
	char thanks[24] = "\n\t==> Thank You <==";
	for (int i = 0; i<24 ; i++){
		printf("%c", thanks[i]);
		_sleep(200);
	}
	puts("\n\n\t-----------------\n");
	_sleep(2000);
}