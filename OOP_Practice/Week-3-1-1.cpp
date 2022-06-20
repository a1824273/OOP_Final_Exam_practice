/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Week-3-1-1.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:23:44 by tytang            #+#    #+#             */
/*   Updated: 2022/06/20 17:47:46 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

struct Book{
	string title;
	string author;
	int year;
	int book_id;
};

int main(){
	Book b1, b2;
	b1.title = "BOOK1";
	//values of b1 were copied into b2 
	b2 = b1;
	cout << b2.title << endl;
	return 0;
}
