/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* File:   main.cpp
 * Author: Jean
 * Created on 1 de septiembre de 2018, 20:39
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include "auxiliar.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv){
	imp_cabezera();
	
	int n_alum;
	char c;

	while(scanf("%d",&n_alum)==1){
		c = imp_datos_persona(n_alum);
		
                c = imp_metadatos(c);

		/*JUSTO CUANDO TERMINE DE LEER LAS ETIQUETAS 
		SI EN ESE PROCESO ENCUENTRA UN NUMERO QUIERE
		DECIR QUE LLEGO AL TAMAÑO DE LA IMAGEN*/

		int ancho=c-'0';
                int alto=0;
		int pix_pin;
		/*LEER LOS PIXELES ANCHO Y ALTO*/
		while(1){
			c = getchar();
			if(c=='*') break;
			else ancho = ancho*10 + (c-'0'); 
		}
		while(1){
			c = getchar();
			if(c==' ') break;
			else alto = alto*10 + (c-'0'); 
		}
                //printf("\n\n--> ancho %d alto %d\n\n",ancho, alto);
		pix_pin = imp_imagen(ancho, alto);
                printf("\n\n--> pixeles pintados %d\n\n",pix_pin);
	}

	return 0;
}




