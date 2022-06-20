/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Week-3-2-1.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:06:34 by tytang            #+#    #+#             */
/*   Updated: 2022/06/20 18:20:38 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//program to manage a library of books
#include <iostream>

using namespace std;

struct Book{
	string title;
	string author;
	int ISBN;
	string keyword;
};

int main(){
	Book *b1 = new Book;
	b1->title = "POop";
	b1->author = "Sir Cartier";
	b1->ISBN = 1234;
	b1->keyword = "The exploration of fecal matter";

	cout << b1->title <<  " by "<< b1->author << " ISBN: " << b1->ISBN << " keyword " << b1->keyword << endl;

	return 0;
}
