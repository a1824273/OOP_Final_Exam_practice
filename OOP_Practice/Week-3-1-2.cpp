/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Week-3-1-2.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:29:19 by tytang            #+#    #+#             */
/*   Updated: 2022/06/20 17:47:49 by tytang           ###   ########.fr       */
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
	b2 = b1;
	cout << *b2.book_id << endl;

	return 0;
}
