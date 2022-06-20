/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Week-4-1-2.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:22:49 by tytang            #+#    #+#             */
/*   Updated: 2022/06/20 18:29:06 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

class A{
	//x is currently private and cannot be accessed outside of the class A
	int x;
};

int main(){
	A a;
	cout << a.x << endl;
	
	return 0;
}
