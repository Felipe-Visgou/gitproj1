/***************************************************************************
*
*  $MCD Módulo de definição: Módulo Dado
*
*  Arquivo gerado:              Dado.H
*  Letras identificadoras:      DAD
*
*  Nome da base de software:    Exemplo de teste automatizado
*
*  Projeto: Disciplinas INF 1628 / 1301
*  Gestor:  DI/PUC-Rio
*  Autores: avs - Arndt von Staa
*			fvc - Felipe Vieira Côrtes
*			tbm - Tássio Borges de Miranda
*			db  - Daniela Brazão

*
*  $HA Histórico de evolução:
*     Versão  Autor    Data     Observações
*       1.00   avs   15/08/2001 Início do desenvolvimento
*
*  $ED Descrição do módulo
*     Este módulo implementa um conjunto simples de funções para gerar o resultado
*	  do dado "lançado".
*
***************************************************************************/
 
#if defined( DADO_OWN )
   #define DADO_EXT
#else
   #define DADO_EXT extern
#endif

#include "GERAALT.H"

/***********************************************************************
*
*  $FC Função: DAD  &Gerar o numero de casas a serem paladas
*
*  $ED Descrição da função
*
*  $EP Parâmetros
*
***********************************************************************/

int DAD_NumPular( void*) ;