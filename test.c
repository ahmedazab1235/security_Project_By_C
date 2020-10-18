#include<stdio.h>

#include"config.h"


/**********************************************************************************/

void oneRoundFestiel(char plaintextF[], char key[]);

void swap(char plaintextF[]);


/**********************************************************************************/

void CaesarCipherEn(char plaintext[] , char alphabet[] , char r);

void CaesarCipherDe(char ciphertext[] , char alphabet[] , char r);

/**********************************************************************************/

void vigenerCipherEn(char plaintext[] ,char key[] ,char alphabet[],char ciphertext[],char size1 );

void vigenerCipherDe(char plaintext[] ,char key[] ,char alphabet[],char ciphertext[],char size1 );

/**********************************************************************************/

void RailFenceEn(char plaintext[],char ciphertext[],char size2,char depth);

void RailFenceDe(char plaintext[],char ciphertext[],char size2,char depth);

/*********************************************************************************/

char enorde = 0 ;
	
char technique = 0 ;

void main (void)
{
	char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k',
	                  'l','m','n','o','p','q'
					  ,'r','s','t','u','v','w'
					  ,'x','y','z'};
	
	char plaintext[50];
	
	char key[50];
	
	char ciphertext[50];
	
	char size=0;
	
	char enorde = 0 ;
	
	char technique = 0 ;
	
	long int pass= 1212;
	
	long int passtry = 0 ;
	
	char depth = 0;
	
	
	
	/***********************************************************/
	
	char plaintextF[8];
	
	char key1[4];
	
	char key22[4];
	
	char key3[4];
	
	char key4[4];
	
	char key5[4];
	
	char key6[4];
	
	char key7[4];
	
	char key8[4];
	
	char key9[4];
	
	char key10[4];
	
	char i =0 ;
	
	
	
	/**********************************************************/
	
	printf("Hi how are you Ahmed Azab :D \n");
	
	printf("Kindly enter you password :)\n");
	
	scanf("%d",&passtry);
	
if(passtry == pass)
{
/************************************************************************************/
	  
	  printf("please choose one what you want :3 \n") ;
	  
	  printf("1 - Encryption \n") ;
	  
	  printf("2 - Decryption \n") ;
	  
	  
/***********************************************************************************/

	scanf("%d",&enorde);
	
/***********************************************************************************/
	if (enorde== 1)//Encryption
	{
		printf("please choose one of these techniques :3 \n") ;
	  
	    printf("1 - Caesar Cipher En\n") ;
		
		printf("2 - Vigener Cipher En\n") ;
		
		printf("3 - One timePad En\n") ;
		
		printf("4 - Rail Fence En\n") ;
		
		printf("5 - Feistel En\n") ;
		
		scanf("%d",&technique);
	  
		if( technique == 1 )	//CaesarCipher En
		{
				printf("please enter the plaintext :) \n") ;
					
				scanf("%s",plaintext);
	
				while(!(plaintext[size]=='\0'))size++;
						
				CaesarCipherEn(plaintext,alphabet,size);
	
				printf("Cipher text is : <  %s  >\n",plaintext); 
				
				printf("I Hope you the message arrives well"); 
	
		}
		else if (technique == 2) //vigenerCipher En
		{
			printf("please enter the plaintext :) \n") ;
					
			scanf("%s",plaintext);
			
			printf("please enter the Key :) \n") ;
			
			scanf("%s",key);
	
			while(!(plaintext[size]=='\0'))size++;
			
			vigenerCipherEn(plaintext , key ,alphabet, ciphertext ,size );
			
			printf("Cipher text is : <  %s  >\n",ciphertext); 
				
			printf("I Hope you the message arrives well"); 
		}
		else if (technique == 3) //One timePad En
		{
			printf("please enter the plaintext :) \n") ;
					
			scanf("%s",plaintext);
			
			printf("please enter the Key :) \n") ;
			
			scanf("%s",key);
	
			while(!(plaintext[size]=='\0'))size++;
			
			vigenerCipherEn(plaintext , key ,alphabet, ciphertext ,size );
			
			printf("Cipher text is : <  %s  >\n",ciphertext); 
				
			printf("I Hope you the message arrives well"); 
		}
		else if (technique == 4)//Rail Fence En
		{
			printf("please enter the plaintext :) \n") ;
					
			scanf("%s",plaintext);
			
			printf("please enter the depth :) \n") ;
			
			printf("please take care the depth can be 2 or 3 only :) \n") ;
			
			scanf("%d",&depth);
	
			while(!(plaintext[size]=='\0'))size++;
			
			RailFenceEn(plaintext,ciphertext,size,depth);
			
			printf("Cipher text is : <  %s  >\n",ciphertext); 
				
			printf("I Hope you the message arrives well"); 
				
		}
		
		else if (technique == 5)//festiel En
		{
			
			printf("please enter the plaintext :) \n") ;
			
			for(i=0;i<8;i++)
			{
		
			printf("PTBit(%d) = ",i);
	
			scanf("%d",&plaintextF[i]);
			}
			
		/************************************************************/
		/************************************************************/
		/************************************************************/
		
		if(round==1)
	{
			for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
	
			oneRoundFestiel(plaintextF,key1);
			
			swap(plaintextF);
			
	}
			
	else if (round==2)
	{	
	
	for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
			oneRoundFestiel(plaintextF,key1);
	
	
	for(i=0;i<4;i++)
	{
	printf("Key2Bit(%d) = ",i);
	
	scanf("%d",&key22[i]);
	}
	
	oneRoundFestiel(plaintextF,key22);
	
	swap(plaintextF);
	
	}
	
	else if (round==3)
	{	
	for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
	    oneRoundFestiel(plaintextF,key1);
	
	
	for(i=0;i<4;i++)
	{
	printf("Key2Bit(%d) = ",i);
	
	scanf("%d",&key22[i]);
	}
	
	oneRoundFestiel(plaintextF,key22);
	
	for(i=0;i<4;i++)
				{
				printf("Key3Bit(%d) = ",i);
	
				scanf("%d",&key3[i]);
	
				}
	    oneRoundFestiel(plaintextF,key3);
	
	swap(plaintextF);
}	
	else if (round==4)
	{	
	for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
	    oneRoundFestiel(plaintextF,key1);
	
	
	for(i=0;i<4;i++)
	{
	printf("Key2Bit(%d) = ",i);
	
	scanf("%d",&key22[i]);
	}
	
	oneRoundFestiel(plaintextF,key22);
	
	for(i=0;i<4;i++)
				{
				printf("Key3Bit(%d) = ",i);
	
				scanf("%d",&key3[i]);
	
				}
	    oneRoundFestiel(plaintextF,key3);
		
	for(i=0;i<4;i++)
				{
				printf("Key4Bit(%d) = ",i);
	
				scanf("%d",&key4[i]);
	
				}
	    oneRoundFestiel(plaintextF,key4);
	
	swap(plaintextF);
	
	
}	
	else if (round==5)
	{	
	for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
	    oneRoundFestiel(plaintextF,key1);
	
	
	for(i=0;i<4;i++)
	{
	printf("Key2Bit(%d) = ",i);
	
	scanf("%d",&key22[i]);
	}
	
	oneRoundFestiel(plaintextF,key22);
	
	for(i=0;i<4;i++)
				{
				printf("Key3Bit(%d) = ",i);
	
				scanf("%d",&key3[i]);
	
				}
	    oneRoundFestiel(plaintextF,key3);
		
	for(i=0;i<4;i++)
				{
				printf("Key4Bit(%d) = ",i);
	
				scanf("%d",&key4[i]);
	
				}
	    oneRoundFestiel(plaintextF,key4);
		
	for(i=0;i<4;i++)
				{
				printf("Key5Bit(%d) = ",i);
	
				scanf("%d",&key5[i]);
	
				}
	    oneRoundFestiel(plaintextF,key5);
	
	swap(plaintextF);
}
	else if (round==6)
	{
	for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
	    oneRoundFestiel(plaintextF,key1);
	
	
	for(i=0;i<4;i++)
	{
	printf("Key2Bit(%d) = ",i);
	
	scanf("%d",&key22[i]);
	}
	
	oneRoundFestiel(plaintextF,key22);
	
	for(i=0;i<4;i++)
				{
				printf("Key3Bit(%d) = ",i);
	
				scanf("%d",&key3[i]);
	
				}
	    oneRoundFestiel(plaintextF,key3);
		
	for(i=0;i<4;i++)
				{
				printf("Key4Bit(%d) = ",i);
	
				scanf("%d",&key4[i]);
	
				}
	    oneRoundFestiel(plaintextF,key4);
		
	for(i=0;i<4;i++)
				{
				printf("Key5Bit(%d) = ",i);
	
				scanf("%d",&key5[i]);
	
				}
	    oneRoundFestiel(plaintextF,key5);
		
	for(i=0;i<4;i++)
				{
				printf("Key6Bit(%d) = ",i);
	
				scanf("%d",&key6[i]);
	
				}
	    oneRoundFestiel(plaintextF,key6);
	
	
	swap(plaintextF);
}
	
	else if (round==7)
	{	
	for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
	    oneRoundFestiel(plaintextF,key1);
	
	
	for(i=0;i<4;i++)
	{
	printf("Key2Bit(%d) = ",i);
	
	scanf("%d",&key22[i]);
	}
	
	oneRoundFestiel(plaintextF,key22);
	
	for(i=0;i<4;i++)
				{
				printf("Key3Bit(%d) = ",i);
	
				scanf("%d",&key3[i]);
	
				}
	    oneRoundFestiel(plaintextF,key3);
		
	for(i=0;i<4;i++)
				{
				printf("Key4Bit(%d) = ",i);
	
				scanf("%d",&key4[i]);
	
				}
	    oneRoundFestiel(plaintextF,key4);
		
	for(i=0;i<4;i++)
				{
				printf("Key5Bit(%d) = ",i);
	
				scanf("%d",&key5[i]);
	
				}
	    oneRoundFestiel(plaintextF,key5);
		
	for(i=0;i<4;i++)
				{
				printf("Key6Bit(%d) = ",i);
	
				scanf("%d",&key6[i]);
	
				}
	    oneRoundFestiel(plaintextF,key6);
		
		for(i=0;i<4;i++)
				{
				printf("Key7Bit(%d) = ",i);
	
				scanf("%d",&key7[i]);
	
				}
	    oneRoundFestiel(plaintextF,key7);
	
	
	
	swap(plaintextF);
}	
	else if (round==8)
	{	
	for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
	    oneRoundFestiel(plaintextF,key1);
	
	
	for(i=0;i<4;i++)
	{
	printf("Key2Bit(%d) = ",i);
	
	scanf("%d",&key22[i]);
	}
	
	oneRoundFestiel(plaintextF,key22);
	
	for(i=0;i<4;i++)
				{
				printf("Key3Bit(%d) = ",i);
	
				scanf("%d",&key3[i]);
	
				}
	    oneRoundFestiel(plaintextF,key3);
		
	for(i=0;i<4;i++)
				{
				printf("Key4Bit(%d) = ",i);
	
				scanf("%d",&key4[i]);
	
				}
	    oneRoundFestiel(plaintextF,key4);
		
	for(i=0;i<4;i++)
				{
				printf("Key5Bit(%d) = ",i);
	
				scanf("%d",&key5[i]);
	
				}
	    oneRoundFestiel(plaintextF,key5);
		
	for(i=0;i<4;i++)
				{
				printf("Key6Bit(%d) = ",i);
	
				scanf("%d",&key6[i]);
	
				}
	    oneRoundFestiel(plaintextF,key6);
		
		for(i=0;i<4;i++)
				{
				printf("Key7Bit(%d) = ",i);
	
				scanf("%d",&key7[i]);
	
				}
	    oneRoundFestiel(plaintextF,key7);
		
	for(i=0;i<4;i++)
				{
				printf("Key8Bit(%d) = ",i);
	
				scanf("%d",&key8[i]);
	
				}
	    oneRoundFestiel(plaintextF,key8);
	
	
	
	swap(plaintextF);
	
	
}	
else if (round==9)
{	
	for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
	    oneRoundFestiel(plaintextF,key1);
	
	
	for(i=0;i<4;i++)
	{
	printf("Key2Bit(%d) = ",i);
	
	scanf("%d",&key22[i]);
	}
	
	oneRoundFestiel(plaintextF,key22);
	
	for(i=0;i<4;i++)
				{
				printf("Key3Bit(%d) = ",i);
	
				scanf("%d",&key3[i]);
	
				}
	    oneRoundFestiel(plaintextF,key3);
		
	for(i=0;i<4;i++)
				{
				printf("Key4Bit(%d) = ",i);
	
				scanf("%d",&key4[i]);
	
				}
	    oneRoundFestiel(plaintextF,key4);
		
	for(i=0;i<4;i++)
				{
				printf("Key5Bit(%d) = ",i);
	
				scanf("%d",&key5[i]);
	
				}
	    oneRoundFestiel(plaintextF,key5);
		
	for(i=0;i<4;i++)
				{
				printf("Key6Bit(%d) = ",i);
	
				scanf("%d",&key6[i]);
	
				}
	    oneRoundFestiel(plaintextF,key6);
		
		for(i=0;i<4;i++)
				{
				printf("Key7Bit(%d) = ",i);
	
				scanf("%d",&key7[i]);
	
				}
	    oneRoundFestiel(plaintextF,key7);
		
	for(i=0;i<4;i++)
				{
				printf("Key8Bit(%d) = ",i);
	
				scanf("%d",&key8[i]);
	
				}
	    oneRoundFestiel(plaintextF,key8);
		
		for(i=0;i<4;i++)
				{
				printf("Key9Bit(%d) = ",i);
	
				scanf("%d",&key9[i]);
	
				}
	    oneRoundFestiel(plaintextF,key9);
	
	
	
	swap(plaintextF);

}
		else if (round==10)
		{
	for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
	    oneRoundFestiel(plaintextF,key1);
	
	
	for(i=0;i<4;i++)
	{
	printf("Key2Bit(%d) = ",i);
	
	scanf("%d",&key22[i]);
	}
	
	oneRoundFestiel(plaintextF,key22);
	
	for(i=0;i<4;i++)
				{
				printf("Key3Bit(%d) = ",i);
	
				scanf("%d",&key3[i]);
	
				}
	    oneRoundFestiel(plaintextF,key3);
		
	for(i=0;i<4;i++)
				{
				printf("Key4Bit(%d) = ",i);
	
				scanf("%d",&key4[i]);
	
				}
	    oneRoundFestiel(plaintextF,key4);
		
	for(i=0;i<4;i++)
				{
				printf("Key5Bit(%d) = ",i);
	
				scanf("%d",&key5[i]);
	
				}
	    oneRoundFestiel(plaintextF,key5);
		
	for(i=0;i<4;i++)
				{
				printf("Key6Bit(%d) = ",i);
	
				scanf("%d",&key6[i]);
	
				}
	    oneRoundFestiel(plaintextF,key6);
		
		for(i=0;i<4;i++)
				{
				printf("Key7Bit(%d) = ",i);
	
				scanf("%d",&key7[i]);
	
				}
	    oneRoundFestiel(plaintextF,key7);
		
	for(i=0;i<4;i++)
				{
				printf("Key8Bit(%d) = ",i);
	
				scanf("%d",&key8[i]);
	
				}
	    oneRoundFestiel(plaintextF,key8);
		
		for(i=0;i<4;i++)
				{
				printf("Key9Bit(%d) = ",i);
	
				scanf("%d",&key9[i]);
	
				}
	    oneRoundFestiel(plaintextF,key9);
	
	for(i=0;i<4;i++)
				{
				printf("KeyBit(%d) = ",i);
	
				scanf("%d",&key10[i]);
	
				}
	    oneRoundFestiel(plaintextF,key10);
	
	
	swap(plaintextF);
	

	
	}
	
	printf("Cipher text is : < "); 
	
	
	for(i=7;i>=0;i--)
	{
	
	printf("%d",plaintextF[i]);
	}
	
	printf(" >\n"); 
	
	printf("I Hope you the message arrives well"); 	
			
		}
			
	}
	else if (enorde== 2)//Decryption
	{
		printf("please choose one of these techniques :3 \n") ;
	  
	    printf("1 - Caesar Cipher De\n") ;
		
		printf("2 - Vigener Cipher De\n") ;
		
		printf("3 - One TimePad De\n") ;
		
		printf("4 - Rail Fence De\n") ;
		
		printf("5 - Feistel De\n") ;
		
		scanf("%d",&technique);
		
		if( technique == 1 )	//CaesarCipher De
		{
				printf("please enter the Ciphertext :) \n") ;
					
				scanf("%s",ciphertext);
	
				while(!(ciphertext[size]=='\0'))size++;
						
				CaesarCipherDe(ciphertext,alphabet,size);
	
				printf("Plaintext text is : <  %s  >\n",ciphertext); 
				
				printf("I Hope you the message arrives well"); 
	
		}
		else if (technique == 2)//vigenerCipher De
		{
			printf("please enter the Ciphertext :) \n") ;
					
				scanf("%s",ciphertext);
			
			printf("please enter the Key :) \n") ;
			
			scanf("%s",key);
	
				while(!(ciphertext[size]=='\0'))size++;
				
				vigenerCipherDe( plaintext ,key ,alphabet,ciphertext, size );
				
				printf("Plaintext text is : <  %s  >\n",plaintext); 
				
				printf("I Hope you the message arrives well"); 
						
			
		}
		else if (technique == 3)//One TimePad De
		{
			printf("please enter the Ciphertext :) \n") ;
					
				scanf("%s",ciphertext);
			
			printf("please enter the Key :) \n") ;
			
			scanf("%s",key);
	
				while(!(ciphertext[size]=='\0'))size++;
				
				vigenerCipherDe( plaintext ,key ,alphabet,ciphertext, size );
				
				printf("Plaintext text is : <  %s  >\n",plaintext); 
				
				printf("I Hope you the message arrives well"); 
						
			
		}
		else if (technique == 4)//Rail Fence
			
		{
			printf("please enter the Ciphertext :) \n") ;
					
			scanf("%s",ciphertext);
			
			printf("please enter the depth :) \n") ;
			
			printf("please take care the depth can be 2 or 3 only :) \n") ;
			
			scanf("%d",&depth);
	
			while(!(ciphertext[size]=='\0'))size++;
			
			RailFenceDe(plaintext,ciphertext,size,depth);
			
			printf("Cipher text is : <  %s  >\n",plaintext); 
				
			printf("I Hope you the message arrives well"); 
				
		}
		else if (technique == 5)//Feistel De
		{
			printf("please enter the ciphertext :) \n") ;
			
			for(i=0;i<8;i++)
			{
		
			printf("PTBit(%d) = ",i);
	
			scanf("%d",&plaintextF[i]);
			}
			
		/************************************************************/
		/************************************************************/
		/************************************************************/
		
		
		if(round==1)
	{
			for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
	
			oneRoundFestiel(plaintextF,key1);
			
			swap(plaintextF);
			
	}
			
	else if (round==2)
	{	
	
	for(i=0;i<4;i++)
				{
				printf("Key2Bit(%d) = ",i);
	
				scanf("%d",&key22[i]);
	
				}
			oneRoundFestiel(plaintextF,key22);
	
	
	for(i=0;i<4;i++)
	{
	printf("Key1Bit(%d) = ",i);
	
	scanf("%d",&key1[i]);
	}
	
	oneRoundFestiel(plaintextF,key1);
	
	swap(plaintextF);
	
	}
	
	else if (round==3)
	{	
	for(i=0;i<4;i++)
				{
				printf("Key3Bit(%d) = ",i);
	
				scanf("%d",&key3[i]);
	
				}
	    oneRoundFestiel(plaintextF,key3);
	
	
	for(i=0;i<4;i++)
	{
	printf("Key2Bit(%d) = ",i);
	
	scanf("%d",&key22[i]);
	}
	
	oneRoundFestiel(plaintextF,key22);
	
	for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
	    oneRoundFestiel(plaintextF,key1);
	
	swap(plaintextF);
}	
	else if (round==4)
	{	
	for(i=0;i<4;i++)
				{
				printf("Key4Bit(%d) = ",i);
	
				scanf("%d",&key4[i]);
	
				}
	    oneRoundFestiel(plaintextF,key4);
	
	
	for(i=0;i<4;i++)
	{
	printf("Key3Bit(%d) = ",i);
	
	scanf("%d",&key3[i]);
	}
	
	oneRoundFestiel(plaintextF,key3);
	
	for(i=0;i<4;i++)
				{
				printf("Key2Bit(%d) = ",i);
	
				scanf("%d",&key22[i]);
	
				}
	    oneRoundFestiel(plaintextF,key22);
		
	for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
	    oneRoundFestiel(plaintextF,key1);
	
	swap(plaintextF);
	
	
}	
	else if (round==5)
	{	
	for(i=0;i<4;i++)
				{
				printf("Key5Bit(%d) = ",i);
	
				scanf("%d",&key5[i]);
	
				}
	    oneRoundFestiel(plaintextF,key5);
	
	
	for(i=0;i<4;i++)
	{
	printf("Key4Bit(%d) = ",i);
	
	scanf("%d",&key4[i]);
	}
	
	oneRoundFestiel(plaintextF,key4);
	
	for(i=0;i<4;i++)
				{
				printf("Key3Bit(%d) = ",i);
	
				scanf("%d",&key3[i]);
	
				}
	    oneRoundFestiel(plaintextF,key3);
		
	for(i=0;i<4;i++)
				{
				printf("Key2Bit(%d) = ",i);
	
				scanf("%d",&key22[i]);
	
				}
	    oneRoundFestiel(plaintextF,key22);
		
	for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
	    oneRoundFestiel(plaintextF,key1);
	
	swap(plaintextF);
}
	else if (round==6)
	{
	for(i=0;i<4;i++)
				{
				printf("Key6Bit(%d) = ",i);
	
				scanf("%d",&key6[i]);
	
				}
	    oneRoundFestiel(plaintextF,key6);
	
	
	for(i=0;i<4;i++)
	{
	printf("Key5Bit(%d) = ",i);
	
	scanf("%d",&key5[i]);
	}
	
	oneRoundFestiel(plaintextF,key5);
	
	for(i=0;i<4;i++)
				{
				printf("Key4Bit(%d) = ",i);
	
				scanf("%d",&key4[i]);
	
				}
	    oneRoundFestiel(plaintextF,key4);
		
	for(i=0;i<4;i++)
				{
				printf("Key3Bit(%d) = ",i);
	
				scanf("%d",&key3[i]);
	
				}
	    oneRoundFestiel(plaintextF,key3);
		
	for(i=0;i<4;i++)
				{
				printf("Key2Bit(%d) = ",i);
	
				scanf("%d",&key22[i]);
	
				}
	    oneRoundFestiel(plaintextF,key22);
		
	for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
	    oneRoundFestiel(plaintextF,key1);
	
	
	swap(plaintextF);
}
	
	else if (round==7)
	{	
	for(i=0;i<4;i++)
				{
				printf("Key7Bit(%d) = ",i);
	
				scanf("%d",&key7[i]);
	
				}
	    oneRoundFestiel(plaintextF,key7);
	
	
	for(i=0;i<4;i++)
	{
	printf("Key6Bit(%d) = ",i);
	
	scanf("%d",&key6[i]);
	}
	
	oneRoundFestiel(plaintextF,key6);
	
	for(i=0;i<4;i++)
				{
				printf("Key5Bit(%d) = ",i);
	
				scanf("%d",&key5[i]);
	
				}
	    oneRoundFestiel(plaintextF,key5);
		
	for(i=0;i<4;i++)
				{
				printf("Key4Bit(%d) = ",i);
	
				scanf("%d",&key4[i]);
	
				}
	    oneRoundFestiel(plaintextF,key4);
		
	for(i=0;i<4;i++)
				{
				printf("Key3Bit(%d) = ",i);
	
				scanf("%d",&key3[i]);
	
				}
	    oneRoundFestiel(plaintextF,key3);
		
	for(i=0;i<4;i++)
				{
				printf("Ke2yBit(%d) = ",i);
	
				scanf("%d",&key22[i]);
	
				}
	    oneRoundFestiel(plaintextF,key22);
		
		for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
	    oneRoundFestiel(plaintextF,key1);
	
	
	
	swap(plaintextF);
}	
	else if (round==8)
	{	
	for(i=0;i<4;i++)
				{
				printf("Key8Bit(%d) = ",i);
	
				scanf("%d",&key8[i]);
	
				}
	    oneRoundFestiel(plaintextF,key8);
	
	
	for(i=0;i<4;i++)
	{
	printf("Key7Bit(%d) = ",i);
	
	scanf("%d",&key7[i]);
	}
	
	oneRoundFestiel(plaintextF,key7);
	
	for(i=0;i<4;i++)
				{
				printf("Key6Bit(%d) = ",i);
	
				scanf("%d",&key6[i]);
	
				}
	    oneRoundFestiel(plaintextF,key6);
		
	for(i=0;i<4;i++)
				{
				printf("Key5Bit(%d) = ",i);
	
				scanf("%d",&key5[i]);
	
				}
	    oneRoundFestiel(plaintextF,key5);
		
	for(i=0;i<4;i++)
				{
				printf("Key4Bit(%d) = ",i);
	
				scanf("%d",&key4[i]);
	
				}
	    oneRoundFestiel(plaintextF,key4);
		
	for(i=0;i<4;i++)
				{
				printf("Key3Bit(%d) = ",i);
	
				scanf("%d",&key3[i]);
	
				}
	    oneRoundFestiel(plaintextF,key3);
		
		for(i=0;i<4;i++)
				{
				printf("Key2Bit(%d) = ",i);
	
				scanf("%d",&key22[i]);
	
				}
	    oneRoundFestiel(plaintextF,key22);
		
	for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
	    oneRoundFestiel(plaintextF,key1);
	
	
	
	swap(plaintextF);
	
	
}	
else if (round==9)
{	
	for(i=0;i<4;i++)
				{
				printf("Key9Bit(%d) = ",i);
	
				scanf("%d",&key9[i]);
	
				}
	    oneRoundFestiel(plaintextF,key9);
	
	
	for(i=0;i<4;i++)
	{
	printf("Key8Bit(%d) = ",i);
	
	scanf("%d",&key8[i]);
	}
	
	oneRoundFestiel(plaintextF,key8);
	
	for(i=0;i<4;i++)
				{
				printf("Key7Bit(%d) = ",i);
	
				scanf("%d",&key7[i]);
	
				}
	    oneRoundFestiel(plaintextF,key7);
		
	for(i=0;i<4;i++)
				{
				printf("Key6Bit(%d) = ",i);
	
				scanf("%d",&key6[i]);
	
				}
	    oneRoundFestiel(plaintextF,key6);
		
	for(i=0;i<4;i++)
				{
				printf("Key5Bit(%d) = ",i);
	
				scanf("%d",&key5[i]);
	
				}
	    oneRoundFestiel(plaintextF,key5);
		
	for(i=0;i<4;i++)
				{
				printf("Key4Bit(%d) = ",i);
	
				scanf("%d",&key4[i]);
	
				}
	    oneRoundFestiel(plaintextF,key4);
		
		for(i=0;i<4;i++)
				{
				printf("Key3Bit(%d) = ",i);
	
				scanf("%d",&key3[i]);
	
				}
	    oneRoundFestiel(plaintextF,key3);
		
	for(i=0;i<4;i++)
				{
				printf("Key2Bit(%d) = ",i);
	
				scanf("%d",&key22[i]);
	
				}
	    oneRoundFestiel(plaintextF,key22);
		
		for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
	    oneRoundFestiel(plaintextF,key1);
	
	
	
	swap(plaintextF);

}
		else if (round==10)
		{
	for(i=0;i<4;i++)
				{
				printf("Key10Bit(%d) = ",i);
	
				scanf("%d",&key10[i]);
	
				}
	    oneRoundFestiel(plaintextF,key10);
	
	
	for(i=0;i<4;i++)
	{
	printf("Key9Bit(%d) = ",i);
	
	scanf("%d",&key9[i]);
	}
	
	oneRoundFestiel(plaintextF,key9);
	
	for(i=0;i<4;i++)
				{
				printf("Key8Bit(%d) = ",i);
	
				scanf("%d",&key8[i]);
	
				}
	    oneRoundFestiel(plaintextF,key8);
		
	for(i=0;i<4;i++)
				{
				printf("Key7Bit(%d) = ",i);
	
				scanf("%d",&key7[i]);
	
				}
	    oneRoundFestiel(plaintextF,key7);
		
	for(i=0;i<4;i++)
				{
				printf("Key6Bit(%d) = ",i);
	
				scanf("%d",&key6[i]);
	
				}
	    oneRoundFestiel(plaintextF,key6);

		for(i=0;i<4;i++)
				{
				printf("Key5Bit(%d) = ",i);
	
				scanf("%d",&key5[i]);
	
				}
	    oneRoundFestiel(plaintextF,key5);
		
	for(i=0;i<4;i++)
				{
				printf("Key4Bit(%d) = ",i);
	
				scanf("%d",&key4[i]);
	
				}
	    oneRoundFestiel(plaintextF,key4);
		
		for(i=0;i<4;i++)
				{
				printf("Key3Bit(%d) = ",i);
	
				scanf("%d",&key3[i]);
	
				}
	    oneRoundFestiel(plaintextF,key3);
	
	for(i=0;i<4;i++)
				{
				printf("Key2Bit(%d) = ",i);
	
				scanf("%d",&key22[i]);
	
				}
	    oneRoundFestiel(plaintextF,key22);
		
		for(i=0;i<4;i++)
				{
				printf("Key1Bit(%d) = ",i);
	
				scanf("%d",&key1[i]);
	
				}
	    oneRoundFestiel(plaintextF,key1);
	
	
	swap(plaintextF);
	

	
	}
	
	printf("plaintext is : < "); 
	
	
	for(i=7;i>=0;i--)
	{
	
	printf("%d",plaintextF[i]);
	}
	
	printf(" >\n"); 
	
	printf("I Hope you the message arrives well"); 	
			
	
	
		}
		
	}
	else
	{
		printf("you enter a wrong nummber ");
	}
}
/*************************************************************************************/













/**************************************************************************************/
/*************************************************************************************/
	
else
	{
		printf("you can not access the system");
	}
	

	
}
/**********************************Functions*******************************/

/******************************CaesarCipherEN****************************/
void CaesarCipherEn(char plaintext[] , char alphabet[] , char r)
{
	char i,j;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<26;j++)
		{   
			if (plaintext[i] == alphabet[j])
			{
				
				if(j<23)plaintext[i] = alphabet[j+3];
				if(j==23)plaintext[i] ='a';
				if(j==24)plaintext[i] ='b';
				if(j==25)plaintext[i] ='c';
				break ;
			}
			
			
		}
	
	}

	
}
/***************************************End*****************************/

/***********************************************************************/

/******************************CaesarCipherDe****************************/
void CaesarCipherDe(char ciphertext[] , char alphabet[] , char r)
{
	char i,j;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<26;j++)
		{   
			if (ciphertext[i] == alphabet[j])
			{
				
				if((j<26 )&& (j > 2))ciphertext[i] = alphabet[j-3];
				if(j==0)ciphertext[i] ='x';
				if(j==1)ciphertext[i] ='y';
				if(j==2)ciphertext[i] ='z';
				break ;
			}
			
			
		}	
	}
}
/***************************************End*****************************/

/***********************************************************************/

void vigenerCipherEn(char plaintext[] ,char key[] ,char alphabet[],char ciphertext[],char size1 )
{

	char i,j;

	char holder =0 ;
	
	char number1[50];
	
	char number2[50];
	
	char number3[50];

	
	for(i=0;i<size1;i++)
	{
		for(j=0;j<26;j++)
		{   
			if (plaintext[i] == alphabet[j])
			{
				number1[i] = j;
				break;
			}
			
			
		}
	}
	
for(i=0;i<size1;i++)
	{
		for(j=0;j<26;j++)
		{   
			if (key[i] == alphabet[j])
			{
				number2[i] = j;
				break;
			}
			
			
		}
	}
	


for(i=0;i<size1;i++)
{
	number3[i]=number1[i]+number2[i] ;
	
	if(number3[i]>=26)number3[i]=number3[i]%26 ;
	
	
}


for(i=0;i<size1;i++)
{
	holder=number3[i];
	
	ciphertext[i]=alphabet[holder] ;
	
	
}
	
	
}
/*********************************************************************************/

void vigenerCipherDe(char plaintext[] ,char key[] ,char alphabet[],char ciphertext[],char size1 )
{

	char i,j;

	char holder =0 ;
	
	char number1[50];
	
	char number2[50];
	
	signed char number3[50];

	
	for(i=0;i<size1;i++)
	{
		for(j=0;j<26;j++)
		{   
			if (ciphertext[i] == alphabet[j])
			{
				number1[i] = j;
				break;
			}
			
			
		}
	}
	
for(i=0;i<size1;i++)
	{
		for(j=0;j<26;j++)
		{   
			if (key[i] == alphabet[j])
			{
				number2[i] = j;
				break;
			}
			
			
		}
	}
	


for(i=0;i<size1;i++)
{
	number3[i]=number1[i]- number2[i] ;
	
	if(number3[i]< 0)number3[i]=number3[i]+26;
	
	
}


for(i=0;i<size1;i++)
{
	holder=number3[i];
	
	plaintext[i]=alphabet[holder] ;
	
	
}
	
	
}
/*****************************************************************************/
/**********************RailFenceEn*******************************************/
	
void RailFenceEn(char plaintext[],char ciphertext[],char size2,char depth)
{	
		char i =0 ;
		
		char sizeperline = 0 ;
		
		char fl =0 ;
		
		char j =0;
		
		char n =1;
		
		char f =2;
		
		char third = 0 ;
		
		
		
		
		
		sizeperline = size2 /depth;
	
		if(size2%depth>0)
		{
		sizeperline++;
		fl++;
		}
		
		if(depth == 2)
			
		{
	
		for(i=0;i<sizeperline;i++)
		{
			
			ciphertext[i]=plaintext[j];
			
			j=j+depth;
		}
		for(i=sizeperline;i<size2;i++)
		{
			
			ciphertext[i]=plaintext[n];
			
			n=n+depth;
		}
		}
		else if (depth == 3)
		{
			for(i=0;i<sizeperline;i++)
		{
			
			ciphertext[i]=plaintext[j];
			
			j=j+depth;
		}
		
		third = size2-(sizeperline-1) ;
		
		for(i=sizeperline;i<third;i++)
		{
			
			ciphertext[i]=plaintext[n];
			
			n=n+depth;
		}
		for(i=third;i<size2;i++)
		{
			
			ciphertext[i]=plaintext[f];
			
			f=f+depth;
		}
		}
	ciphertext[size2]='\0';
	
}	

/********************************************************************************/
/**********************RailFenceDe***********************************************/
	
void RailFenceDe(char plaintext[],char ciphertext[],char size2,char depth)
{	
		char i =0 ;
		
		char sizeperline = 0 ;
		
		char fl =0 ;
		
		char j =0;
		
		char n =1;
		
		char f =2;
		
		char third = 0 ;
		
		
		
		
		
		sizeperline = size2 /depth;
	
		if(size2%depth>0)
		{
		sizeperline++;
		fl++;
		}
		
		if(depth == 2)
			
		{
	
		for(i=0;i<sizeperline;i++)
		{
			
			plaintext[j]=ciphertext[i];
			
			j=j+depth;
		}
		for(i=sizeperline;i<size2;i++)
		{
			
			plaintext[n]=ciphertext[i];
			
			n=n+depth;
		}
		}
		else if (depth == 3)
		{
			for(i=0;i<sizeperline;i++)
		{
			
			plaintext[j]=ciphertext[i];
			
			j=j+depth;
		}
		
		third = size2-(sizeperline-1) ;
		
		for(i=sizeperline;i<third;i++)
		{
			
			plaintext[n]=ciphertext[i];
			
			n=n+depth;
		}
		for(i=third;i<size2;i++)
		{
			
			plaintext[f]=ciphertext[i];
			
			f=f+depth;
		}
		}
	plaintext[size2]='\0';
	
}	

/****************************************************************************************/

void oneRoundFestiel(char plaintextF[],char key[])
{
	
	
	char i ;
	
	char holder[4] ;
	
	for(i=0;i<4;i++)
	{
	holder[i] = plaintextF[i] ;
	}
/***************************************************************************/

for(i=0;i<4;i++)
		{
		plaintextF[i] =( plaintextF[i] )fanction (key[i] );
		}
		
for(i=0;i<4;i++)
	{
	plaintextF[i] = plaintextF[i] ^ plaintextF[i+4] ;
	}
	
for(i=0;i<4;i++)
	{
	plaintextF[i+4] = holder[i] ;
	}
	
}

void swap(char plaintextF[])
{
	
	char holder2[4] ;
	
	char i = 0;
	
	
	for(i=0;i<4;i++)
	{
	holder2[i] = plaintextF[i] ;
	}
	
	for(i=0;i<4;i++)
	{
	plaintextF[i] = plaintextF[i+4] ;
	}
	
	for(i=0;i<4;i++)
	{
	plaintextF[i+4] = holder2[i] ;
	}
	
	
	
	
	
}
/**********************************************************************************/
	
