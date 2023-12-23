/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include "auxiliar.h"


void imp_cabezera(){
	printf("REPORTE DE DIBUJOS\n");
	for(int i=0; i<100; i++)	printf("=");
	printf("\n");
}

bool is_whitespace(char c){
	return (c==' ' or c=='\t' or c=='\n' or c=='\r');
}

bool is_delimiter(char c){
	return (is_whitespace(c) or c==':' or c=='.');
}

char delete_whitespace(){
	char c;
	do{
		c = getchar();
	}while(is_whitespace(c));
	return c;
}

char imp_datos_persona(int n_alum){
	printf("ALUMNO %d: ", n_alum);
	char c;
	bool flag=false;
	c = delete_whitespace();
	while(c!=':'){
		if(is_whitespace(c)){
			c = delete_whitespace();
			putchar(' ');
		}
		else{
			putchar(c);
			c = getchar();
		}
	}
	printf("\n");
	for(int i=0; i<100; i++)	printf("-");
	printf("\n");
	
	c = delete_whitespace();
	return c;
}


char imp_metadatos(char c){
	int cant_imag = 0 ;

	// bucle para cada uno de los estudiantes
	while(1){
		cant_imag++;
		printf("IMAGEN %d\tEXT.\t\tCREACION\tMODIFICACION\t\t\tETIQUETAS\n",cant_imag);
		// bucle para cada imagen
	    /*Lee nombre imagen*/
		while(c!='.'){
			putchar(c);
			c = getchar();			
		}
		printf("\t");// espaciado
		
		/*Lee la extension*/
		while(not(is_whitespace(c))){
			putchar(c);
			c = getchar();
		}
		printf("\t");// espaciado

		for (int i=0; i<2; i++){/*Leer creacion y modificacion*/
			// FECHA
			int dd,mm,aa;
			scanf("%d/%d/%d",&dd,&mm,&aa);// dia
			int hr,min,seg;
			char h;
			scanf("%d:%d:%d%cM",&hr,&min,&seg,&h);
			/*Impresion de la fecha y hora*/
			printf("%02d/%02d/%02d  %02d:%02d:%02d",dd,mm,aa,(h=='P')?hr+12:hr,min,seg);
			printf("\t");
		}

		// Leemos las etiquetas
		c = delete_whitespace();
		while( (c<'0' or c>'9') ){ // hasta leer un numero
                        if(c==' ') c=delete_whitespace();
                        else if(c==','){
				putchar(c);
				putchar(' ');
				c = getchar();
			}else{
				putchar(c);
				c = getchar();
			}
		}
		printf("\n");
		return c;
	}
}


int imp_imagen(int ancho, int alto){
	int pix_pin=0;
	char c = delete_whitespace();
	for(int i=0; i<ancho; i++){
		for(int j=0; j<alto; j++){
			if(c=='0'){
				pix_pin++;
				printf("# ");
			}else printf("  ");
			c = getchar();
		}
                printf("\n");
	}

	return pix_pin;
}