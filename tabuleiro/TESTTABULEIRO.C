/***************************************************************************
*  $MCI Módulo de implementação: Módulo de teste específico

*	Módulo modificado para operar matrizes que armazenam listas!
*
*  Arquivo gerado:              TESTPECA.C
*  Letras identificadoras:      TPec
*
*  Nome da base de software:    Exemplo de teste automatizado
*
*  Projeto: Disciplinas INF 1628 / 1301
*  Gestor:  DI/PUC-Rio
*  Autores: avs - Arndt von Staa
			fvc	- Felipe Vieira Cortes
*			tbm - Tássio Borges de Miranda
*			db  - Daniela Brazão
*
*  $HA Histórico de evolução:
*     Versão  Autor    Data     Observações
		4.00   fvc	 23/08/2015 Módulo modificado para operar matrizes
*       3.00   avs   28/02/2003 Uniformização da interface das funções e
*                               de todas as condições de retorno.
*       2.00   avs   03/08/2002 Eliminação de código duplicado, reestruturação
*       1.00   avs   15/08/2001 Início do desenvolvimento
*
*  $ED Descrição do módulo
*     Este módulo contém as funções específicas para o teste do
*     módulo Matriz. Ilustra como redigir um interpretador de comandos
*     de teste específicos utilizando o arcabouço de teste para C.
*
*  $EIU Interface com o usuário pessoa
*     Comandos de teste específicos para testar o módulo Matriz:
*
*     =criarpeca		<inxpec>	<cor>	<CondRet>				- Chama a função Pec_tpCondRet Pec_CriarPeca(tppPeca * PecCriado);
*	  =destruirpeca		<inxpec>	<CondRet>							  - Chama a função Pec_tpCondRet Pec_DestruirPeca(tppPeca  Peca);
*     =obtercorpeca		<inxpec>	<cor Esperada> <CondRet	>			 - Chama a função Pec_tpCondRet Pec_ObterCor(tppPeca  Peca, char *cor);
***************************************************************************/

#include    <string.h>
#include    <stdio.h>
#include    <malloc.h>
#include    "TST_ESPC.H"
#include    "GENERICO.h"
#include    "lerparm.h"

#include	"TABULEIRO.H"

/* Tabela dos nomes dos comandos de teste específicos */
#define     CRIAR_TABULEIRO_CMD			"=criartabuleiro"
#define     DESTRUIR_TABULEIRO_CMD      "=destruirtabuleiro"
#define     MOVER_PECA_CMD				"=moverpeca"

TAB_tppTabuleiro Tab;
/*****  Código das funções exportadas pelo módulo  *****/

/***** Protótipos das funções encapuladas no módulo *****/

   static void DestruirValor( void * pValor ) ;

/*****  Código das funções exportadas pelo módulo  *****/


/***********************************************************************
*
*  $FC Função: TPec Efetuar operações de teste específicas para o Modulo Peca
*
*  $ED Descrição da função
*     Efetua os diversos comandos de teste específicos para o módulo
*     Peca sendo testado.
*
*  $EP Parâmetros
*     $P ComandoTeste - String contendo o comando
*
*  $FV Valor retornado
*     Ver TST_tpCondRet definido em TST_ESPC.H
*
***********************************************************************/

   TST_tpCondRet TST_EfetuarComando( char * ComandoTeste )
   {

      int CondRetObtido   = TAB_CondRetOK ;
      int CondRetEsperada = TAB_CondRetFaltouMemoria ;
                                      /* inicializa para qualquer coisa */
      char ValorEsperado = '?'  ;
      char ValorObtido   = '!'  ;
      char ValorDado     = '\0' ;
	  char corEsperada	= 'x';

      int  NumLidos = -1 ;
	  int i = 0;
	  int PosicaoReferencia, PosicaoFinal;
	
      /* Testar  Criar Tabuleiro */
         if ( strcmp( ComandoTeste , CRIAR_TABULEIRO_CMD ) == 0 )
         {

            NumLidos = LER_LerParametros( "i" ,
									 &CondRetEsperada ) ;
            if ( NumLidos != 1 )
            {
               return TST_CondRetParm ;
            } /* if */

            CondRetObtido = TAB_CriarTabuleiro(&Tab, DestruirValor);

            return TST_CompararInt( CondRetEsperada , CondRetObtido ,
                                    "Retorno errado ao criar o tabuleiro." );

         } /* fim ativa: Testar Criar Tabuleiro */

		 /* Testar  Destruir Tabuleiro*/
		 else	if ( strcmp( ComandoTeste , DESTRUIR_TABULEIRO_CMD ) == 0 )
         {

			NumLidos = LER_LerParametros( "i" ,
                              &CondRetEsperada ) ;
            if ( NumLidos != 1 )
            {
               return TST_CondRetParm ;
            } /* if */

			CondRetObtido = TAB_DestruirTabuleiro(Tab) ;

			return TST_CompararInt( CondRetEsperada , CondRetObtido ,
                                    "Retorno errado ao destruir o tabuleiro" );
			
         } /* fim ativa: Testar destruir tabuleiro */

		/* Testar  Tabuleiro Mover Peca*/
		 else	if ( strcmp( ComandoTeste , MOVER_PECA_CMD ) == 0 )
         {

			NumLidos = LER_LerParametros( "iii" ,
                             &PosicaoReferencia,&PosicaoFinal , &CondRetEsperada ) ;
            if ( NumLidos != 3)
            {
               return TST_CondRetParm ;
            } /* if */

			CondRetObtido = TAB_MoverPeca(Tab,  PosicaoReferencia, PosicaoFinal ) ;

			return TST_CompararInt(CondRetObtido, CondRetEsperada, "Retorno errado ao mover a peca");

         } /* fim ativa: Testar  Tabuleiro Mover Peca */
      return TST_CondRetNaoConhec ;

   } /* Fim função: Tab Efetuar operações de teste específicas para Tabuleiro */

   /***********************************************************************
*
*  $FC Função: TLIS -Destruir valor
*
***********************************************************************/

void DestruirValor( void * pValor )
   {

      free( pValor ) ;

   } /* Fim função: TLIS -Destruir valor */