/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Kevin PC
 *
 * Created on 24 de mayo de 2018, 05:51 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void printFaultsTable(int faultsTable[2][4]){
    for(int y = 0 ; y < 4 ; ++y){
        for(int x = 0; x<2 ; ++x){
            printf("\t %d", faultsTable[x][y]);
        }
        printf("\n");
    }
}

void readFaults(int faultsTable[2][4]){
    
    //peso
    faultsTable [0][0] = 22; //Nombre de variables
    faultsTable [0][1] = 18; //Magic Numbers
    faultsTable [0][2] = 25; //Excepciones no capturadas
    faultsTable [0][3] = 35; //Codigo Repetido
    
    //cantidad
    faultsTable [1][0] = 1;
    faultsTable [1][1] = 4;
    faultsTable [1][2] = 3;
    faultsTable [1][3] = 2;

}





/*Algoritmos para iniciar el proceso genetico.*/
void createSingular(){
    
}

void applyFitnessAlgorithm(){
    
}
void createInitialPopulation(int generationTable [10][10], int individualQuantity){
    for(int individual = 0 ; individual < individualQuantity ; ++individual){
        createSingular();
        applyFitnessAlgorithm();
    }
}





/*Algoritmos para el proceso genetico.*/

void reproduceIndivual(int firstIndividual, int secondIndividual, int offspringQuantity){
    for(int currentIndividual = 0; currentIndividual < offspringQuantity ; ++currentIndividual){
        
    }
}

/*
 * Toma los indivuos del generationOffsprinBuffer y los reproduce.
 * Almacena los nuevos indivuos en generationTable.
 */
void reproduceIndividuals(int generationTable [10][10], int generationOffspringBuffer [10][10]){
    
}

void cleanPreviousGeneration(int generationTable [10][10]){
    
}

/*
 * Toma los indivuados de la poblacion que se pueden reproducir y los almacena en generationOffsprinBuffer.
 * Limpia los individuos de la poblacion.
 */
void takeReproductiveIndividuals(int generationTable [10][10], int generationOffspringBuffer [10][10]){
    cleanPreviousGeneration(generationTable);
}





/*Algoritmo principal Genetico.*/
void algoritmoGenetico(int generationTable [10][10], int generationOffspringBuffer [10][10]){
    createInitialPopulation(generationTable, 10);
    
    for(int generationNumber = 0 ; generationNumber < 20 ; ++generationNumber){
        takeReproductiveIndividuals(generationTable, generationOffspringBuffer);
        reproduceIndividuals(generationTable, generationOffspringBuffer);
    }
    
}



int main(int argc, char** argv) {
    
    int faultsTable[2][4] = {0};
    
    int generationTable[10][10] = {0};
    int generationOffspringBuffer[10][10] = {0};
    
    
    
    readFaults(faultsTable);
    printFaultsTable(faultsTable);
    
    return (EXIT_SUCCESS);
    
}

