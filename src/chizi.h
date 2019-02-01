/*
 * chizi.h
 *
 *  Created on: 2019Äê1ÔÂ30ÈÕ
 *      Author: song
 */

#ifndef CHIZI_H_
#define CHIZI_H_
#include "config.h"





namespace std {

class chizi {

private:
	int chi[ALL_SPACE]={};
	int guo[ALL_SPACE]={};
	int yifa_num=0;
	int yida_num=0;
public:
	chizi();
	virtual ~chizi();
	int get_pai();
	int put_pai(int pai);
};

} /* namespace std */

#endif /* CHIZI_H_ */
