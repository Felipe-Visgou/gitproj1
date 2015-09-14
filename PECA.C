/***************************************************************************
*  $MCI Módulo de implementação: PEC Estrutura Peca
*
*  Arquivo gerado:              PECA.C
*  Letras identificadoras:      PEC
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
*	  1.0     tbm   14/set/2015	Início do desenvolvimento
*
***************************************************************************/


#include   <stdio.h>
#include   <string.h>
#include   <malloc.h>

#define PECA_OWN
#include "PECA.h"
#undef PECA_OWN

/***********************************************************************
*
*  $TC Tipo de dados: PECPnt Descritor do dados de ponto.
*
*  $ED Descrição do tipo
*		Descreve a estrutura de peça
***********************************************************************/

typedef struct tgPeca{
	int *posicao;
	/*Pontei para a posicao da peca, ainda deve ser alterado pelo tipo correto.*/
	int *cor;
	/*Devemos usar um inteiro para facilitar a manipulacao da peça pela cor? Porem a cor tambem determia qual jogador 
	tem a posse da peca*/
	struct tpp * jogador;
} tpPeca;


/*****  Dados encapsulados no módulo  *****/


/*****  Código das funções exportadas pelo módulo  *****/

/***************************************************************************
*
*  Função: Pec Criar Peça
*  ****/

Pec_tpCondRet Pec_CriarPeca(tppPec * PecCriado);

/***************************************************************************
*
*  Função: PEC Destruir Peça
*  ****/

Pec_tpCondRet Pec_DestruirPeca(tppPec * Peca);

/***************************************************************************
*
*  Função: PEC Obter Cor
*  ****/

Pec_tpCondRet Pec_ObterCor(tppPec * Peca);

/*********** Fim do módulo de implementação: Módulo DadoPontos **************/
