/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Week-3-1-3.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:35:31 by tytang            #+#    #+#             */
/*   Updated: 2022/06/20 17:48:34 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

struct Book{
	string title;
	string author;
	int year;
	int* book_id = new int;
};

int main(){
	Book b1, b2;
	*b1.book_id = 100;
	//the address of b1 was copied into b2
	//b1 and b2 are pointing to the same place in memory
	b2 = b1;
	cout << *b2.book_id << endl;
	*b1.book_id = 500;
	cout << *b2.book_id << endl;
	return 0;
}
