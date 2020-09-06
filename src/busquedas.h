/*
 * busquedas.h
 *
 *  Created on: 5 sep. 2020
 *      Author: ramil
 */

#ifndef SRC_BUSQUEDAS_H_
#define SRC_BUSQUEDAS_H_

//PRE: Recibe un vector, el tamanio del vector, y el valor a encontrar en el vector
//POST: Devuelve la posicion del vector donde se encontró el valor
int secuencial(int* vector, int tamanio, int valor);

//PRE: Recibe un vector, el tamanio del vector, y el valor a encontrar en el vector
//POST: Devuelve la posicion del vector donde se encontró el valor
int binaria(int* vector, int tamanio, int valor);


#endif /* SRC_BUSQUEDAS_H_ */
