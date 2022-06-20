/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Week-3-1-5.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:49:02 by tytang            #+#    #+#             */
/*   Updated: 2022/06/20 18:01:36 by tytang           ###   ########.fr       */
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
	// there is still no location that the pointer is pointing to and will causea segmentation fault
	Book *b1;
	b1->title = "BOok1";
	cout << b1->title << endl;
	return 0;
}
