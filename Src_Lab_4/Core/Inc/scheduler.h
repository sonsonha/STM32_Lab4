/*
 * scheduler.h
 *
 *  Created on: Dec 3, 2023
 *      Author: sonha
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include <stdint.h>

typedef struct
{
	void (*pTask)(void);
	uint32_t Delay;
	uint32_t Period;
	uint8_t RunMe;
	uint32_t TaskID;
}sTask;

#define SCH_MAX_TASKS 5


void SCH_Init(void);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
unsigned char SCH_Add_Task(void(*pFunction)(), unsigned int DELAY, unsigned int PERIOD);
unsigned char SCH_Delete_Task(uint32_t TASK_INDEX);
void SCH_Go_To_Sleep(void);

#endif /* INC_SCHEDULER_H_ */
