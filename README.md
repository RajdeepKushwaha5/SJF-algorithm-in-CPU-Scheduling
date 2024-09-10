# SJF-algorithm-in-CPU-Scheduling
The shortest job first (SJF) or shortest job next, is a scheduling policy that selects the waiting process with the smallest execution time to execute next. SJN, also known as Shortest Job Next (SJN), can be preemptive or non-preemptive.  

Characteristics of SJF Scheduling:

Shortest Job first has the advantage of having a minimum average waiting time among all scheduling algorithms.
It is a Greedy Algorithm.
It may cause starvation if shorter processes keep coming. This problem can be solved using the concept of ageing.
It is practically infeasible as Operating System may not know burst times and therefore may not sort them. While it is not possible to predict execution time, several methods can be used to estimate the execution time for a job, such as a weighted average of previous execution times. 
SJF can be used in specialized environments where accurate estimates of running time are available.
Algorithm: 

Sort all the processes according to the arrival time. 
Then select that process that has minimum arrival time and minimum Burst time. 
After completion of the process make a pool of processes that arrives afterward till the completion of the previous process and select that process among the pool which is having minimum Burst time. 
