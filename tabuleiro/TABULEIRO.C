/***************************************************************************
*  $MCI Módulo de implementação: LIS  Lista duplamente encadeada
*
*  Arquivo gerado:              LISTA.c
*  Letras identificadoras:      LIS
*
*  Nome da base de software:    Arcabouço para a automação de testes de programas redigidos em C
*  Arquivo da base de software: D:\AUTOTEST\PROJETOS\LISTA.BSW
*
*  Projeto: INF 1301 / 1628 Automatização dos testes de módulos C
*  Gestor:  LES/DI/PUC-Rio
*  Autores: avs
*
*  $HA Histórico de evolução:
*     Versão  Autor    Data     Observações
*     4       avs   01/fev/2006 criar linguagem script simbólica
*     3       avs   08/dez/2004 uniformização dos exemplos
*     2       avs   07/jul/2003 unificação de todos os módulos em um só projeto
*     1       avs   16/abr/2003 início desenvolvimento
*
***************************************************************************/

#include   <stdio.h>
#include   <string.h>
#include   <memory.h>
#include   <malloc.h>
#include   <assert.h>

#define TABULEIRO_OWN
#include "LISTA.H"
#include "GENERICO.H"
#include "PECA.h"
#include "TABULEIRO.H"

#undef TABULEIRO_OWN

/***********************************************************************
*
*  $TC Tipo de dados: TAB Tabuleiro
*
*
***********************************************************************/

typedef struct tagTabuleiro {

	LIS_tppLista Casa;

} TAB_tpTabuleiro;


/*****  Código das funções exportadas pelo módulo  *****/

/***************************************************************************
*
*  Função: LIS  &Criar Tabuleiro
*  ****/

   TAB_tpCondRet TAB_CriarTabuleiro(TAB_tppTabuleiro * pTab,
             void   ( * ExcluirValor ) ( void * pDado ) )
   {

	   *pTab = (TAB_tppTabuleiro)malloc(sizeof(TAB_tpTabuleiro));
	   (*pTab)->Casa = LIS_CriarLista(ExcluirValor);

