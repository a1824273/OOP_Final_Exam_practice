/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Week-4-1-5.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:47:33 by tytang            #+#    #+#             */
/*   Updated: 2022/06/20 18:52:22 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

class A{
private:
	int _x;
public:
	A(int x):x(x){
		//initaliser list
	}
	A():A(0){
	}
	int get_x(){
		return _x;
	}
};

int main(){
	A a;
	cout < a.get_x() << endl;

	return 0;
}
