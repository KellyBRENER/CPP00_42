// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once//to avoid multiple inclusion of Account.hpp
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;//cree un alias t pour utilise une instance de Account, on peut utiliser directement t dans la classe mais Account::t en dehors.

	static int	getNbAccounts( void );//nb de compte
	static int	getTotalAmount( void );//somme total
	static int	getNbDeposits( void );//nb de depot
	static int	getNbWithdrawals( void );//nb de retrait
	static void	displayAccountsInfos( void );

	Account( int initial_deposit );//permet de creer une instance de Account avec un depot
	~Account( void );

	void	makeDeposit( int deposit );//faire un depot sur le compte
	bool	makeWithdrawal( int withdrawal );//faire un retrait
	int		checkAmount( void ) const;//quel diff avec gettotalamount
	void	displayStatus( void ) const;


private://les membres prives d'une classe sont marques par un '_'

	static int	_nbAccounts;//les variables statiques d'une classe sont communes a toutes les instances de la classe
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	static void	_displayTimestamp( void );

	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

	Account( void );//fonction membre constructor pour initialise une instance de Account sans depot initial

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
