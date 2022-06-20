/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Week-4-1-4.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:33:36 by tytang            #+#    #+#             */
/*   Updated: 2022/06/20 18:47:28 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

class A{
private:
	int _x;
public:
	A(int x){
		_x = x;
	}
	int get_x(){
		return (_x);
	}
};

int main(){
	//no default constructor
	A a;
	cout << a.get_x() << endl;

	return 0;
}
