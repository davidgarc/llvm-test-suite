/************************************************************************/
/*  author :   Mikkel Damsgaard                                         */
/*             Kirsebaerhaven 85b                                        */
/*                                                                      */
/*             DK-8520 Lystrup                                          */
/*             email mikdam@daimi.aau.dk                                */
/*                                                                      */
/*  files :                                                             */
/*  Divsol.c           QRfact.h           Divsol.h           Jacobi.c   */     
/*  Jacobi.h           Triang.c           print.c            MM.c       */   
/*  Triang.h           print.h            MM.h               QRfact.c   */   
/*  main.c             main.h                                           */
/*                                                                      */
/*  It calculates the eigenvalues for 4 different matrixes. It does not */
/*  take any input; those 4 matrixes are calculated by MakeMatrix       */
/*  function. Output is given as 4 files: val2, val3, val4, val5, that  */
/*  contains the eigenvalues for each of the matrixes.                  */
/*                                                                      */
/************************************************************************/
#ifndef __MM__H__
#define __MM__H__

#include "main.h"

Matrix MakeMatrix(int i);
Matrix newMatrix(void);
Vector newVector(void);
void matrixMult(Matrix C,Matrix A,Matrix B);
void matrixTranspose(Matrix A);
Matrix newIdMatrix(void);
void MakeID(Matrix A);
void freeMatrix(Matrix A);
double NormInf(Matrix A);
double NormOne(Matrix A);

#endif


