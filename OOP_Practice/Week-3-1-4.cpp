/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Week-3-1-4.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:40:38 by tytang            #+#    #+#             */
/*   Updated: 2022/06/20 17:47:30 by tytang           ###   ########.fr       */
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
	//when using pointer we need to allocate memory using new
	Book *b1 = new Book;
	b1->title = "Book1";
	cout << b1->title << endl;
	return 0;
}
