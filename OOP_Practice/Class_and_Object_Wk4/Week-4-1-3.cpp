/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Week-4-1-3.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:29:10 by tytang            #+#    #+#             */
/*   Updated: 2022/06/20 18:33:02 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

class A{
	private:
		int _x;
	public:
		//_x is still private and still cant be accessed outside the class
		A(int x){
			_x = x;
		}
};

int main(){
	A a(5);
	cout << a._x << endl;

	return 0;
}
