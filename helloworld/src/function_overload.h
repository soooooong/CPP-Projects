/*
 * function_overload.h
 *
 *  Created on: 2018Äê11ÔÂ29ÈÕ
 *      Author: song
 */

#ifndef FUNCTION_OVERLOAD_H_
#define FUNCTION_OVERLOAD_H_

namespace std {

class function_overload {
public:
	function_overload();
	virtual ~function_overload();
	void print(int a);
	void print(double a);
	void print(char a[]);
};

} /* namespace std */

#endif /* FUNCTION_OVERLOAD_H_ */
