/*
 * tuizi.h
 *
 *  Created on: 2019Äê1ÔÂ30ÈÕ
 *      Author: song
 */

#ifndef TUIZI_H_
#define TUIZI_H_
#include "config.h"
#include "chizi.h"


namespace std {

class tuizi {
private:
	int tuizi_no=0;
	int tuizipai[MO_KIND_MAX][TUI_PAI_NUM_MAX]={};
	int t_num=0;
	int b_num=0;
	int w_num=0;
public:
	tuizi(int no);
	virtual ~tuizi();

	int set_tuizipai(int pai);
	int get_tuizi_no();
	int init_jie(chizi * chizi);
	int print_all();

	int jie(chizi * chizi);


};

} /* namespace std */

#endif /* TUIZI_H_ */
