#include "processor.h"

Processor::Processor(){
  TotalTime_ = LinuxParser::Jiffies();
  IdleTime_ = LinuxParser::IdleJiffies();  
}
// TODO: Return the aggregate CPU utilization
float Processor::Utilization() { 
    
  float TotalTime_b = TotalTime_;
  float IdleTime_b = IdleTime_;  
  TotalTime_  = LinuxParser::Jiffies();
  IdleTime_ = LinuxParser::IdleJiffies();

  float rValue= (((TotalTime_-TotalTime_b)-(IdleTime_-IdleTime_b)) / (TotalTime_-TotalTime_b));

  return (rValue>0.0)? rValue : 0.0;
 }