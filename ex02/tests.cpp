// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"


int		main( void ) {

	typedef std::vector<Account::t>							  accounts_t;//cree un alias pour creer un tableau de classes Account
	typedef std::vector<int>								  ints_t;//cree un alias pour creer un tableau de int
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;//cree un alias pour creer une pair d'iterateur

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };//cree un tableau de int ou chaque int sera le depot de depart d'un Account
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );//calcul la taille du tableau de int
	accounts_t				accounts( amounts, amounts + amounts_size );//cree les comptes avec des depots de depart dans un vecteur de class Account;
	accounts_t::iterator	acc_begin	= accounts.begin();//determine l'iterateur de debut du vecteur
	accounts_t::iterator	acc_end		= accounts.end();//determine l'iterateur de fin du vecteur

	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };//cree un tableau de int dont chaque int sera un depot pour le Account correspondant au meme rang
	size_t const		d_size( sizeof(d) / sizeof(int) );//taille du tableau de int
	ints_t				deposits( d, d + d_size );//cree un vecteur de int du 1er depot au dernier
	ints_t::iterator	dep_begin	= deposits.begin();//determine l'iterateur de debut de vecteur
	ints_t::iterator	dep_end		= deposits.end();//determine l'iterateur de fin de vecteur

	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };//cree un tableau de int dont chaque int sera un retrait
	size_t const		w_size( sizeof(w) / sizeof(int) );//taille du tableau de int
	ints_t				withdrawals( w, w + w_size );//cree un vecteur de int pour les retraits
	ints_t::iterator	wit_begin	= withdrawals.begin();//determine l'iterateur de debut de vecteur
	ints_t::iterator	wit_end		= withdrawals.end();//determine l'iterateur de fin de vecteur

	Account::displayAccountsInfos();//print les infos de l'ensemble des comptes
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );//appelle la fonction displayStatus pour chaque instance

	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) );//tant qu'on n'a pas atteint la fin du vecteur account ou deposit, on fait le depot i sur l'account i
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, wit_begin );//cree une paire d'iterateur avec le 1er iterateur de Account et le 1er iterateur de retrait
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) );
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
