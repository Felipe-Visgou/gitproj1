/***************************************************************************
*  $MCI Módulo de implementação: Gerador de numeroes aleatorios restrito ao
*								 numero de faces 
*
*  Arquivo gerado:              DADO.c
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
*	  1.0     tbm   02/set/2015	Início do desenvolvimento
*
***************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include "DADO.H"  
#include "GERAALT.H"

#define DADO_OWN
#include "DADOPONTOS.h"
#undef DADO_OWN

/***********************************************************************
*
*  $TC Tipo de dados: DADPnt Descritor do dados de ponto.
*
*  $ED Descrição do tipo
*		Descreve a estrutura do dados ponto
***********************************************************************/

   typedef struct tgDadoPontos {
		int valor;
		/*Valor atual do dado de pontos*/
		struct Jogador * Jogador;
		/*Ponteiro para o jogador que pode usar o dado
		*$EED Assertivas Estruturais
		*	É NULL se o jogo esta no começo e ninguem fez nenhuma dobra */

		
   } tpDadoPontos ;

/*****  Dados encapsulados no módulo  *****/


/*****  Código das funções exportadas pelo módulo  *****/

/***************************************************************************
*
*  Função: DADPnt Criar Dado de Pontos
*  ****/

DADPnt_tpCondRet DADPtn_CriarDado(tppDadoPontos * Dado)
{
	tpDadoPontos * DadoNovo = (tpDadoPontos*)malloc(sizeof(tpDadoPontos));
	DadoNovo->valor = 2;
	/*Valor Inicial do Dado de Pontos*/
	DadoNovo->Jogador = NULL;
	/*Quando o dado é criado, todos os jogadores podem usa-lo o inicio*/
	return  DADPnt_CondRetOK;
}
/***************************************************************************
*
*  Função: DADPnt Dobrar Dado de Pontos
*  ****/

DADPnt_tpCondRet DADPtn_DobrarDado(tppDadoPontos Dado);

/***************************************************************************
*
*  Função: DADPnt Mudar "Dono" do Dado de Pontos
*  ****/

DADPnt_tpCondRet DADPtn_MudDono(tppDadoPontos Dado);

/***************************************************************************
*
*  Função: DADPnt Destruir Dado de Pontos
*  ****/

DADPnt_tpCondRet DADPtn_DestruirDado(tppDadoPontos Dado);

/*********** Fim do módulo de implementação: Módulo DadoPontos **************/
