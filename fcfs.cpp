#include <stdio.h>

struct Process {
    int id;
    int arrival_time;
    int burst_time;
};

void fcfs_schedule(struct Process processes[], int num_processes)
 {
    int completion_time = 0;
    
    printf("Process\tCompletion Time\n");
    
    for (int i = 0; i < num_processes; i++) 
	{
        completion_time += processes[i].burst_time;
        printf("P%d\t%d\n", processes[i].id, completion_time);
    }
}

int main() 
{
	  int num_processes;
    printf("Enter the number of processes: ");
    scanf("%d", &num_processes);
    
    struct Process processes[num_processes];
    
    for (int i = 0; i < num_processes; i++) {
        processes[i].id = i + 1;
        processes[i].arrival_time = 0;
        printf("Enter burst time for P%d: ", i + 1);
        scanf("%d", &processes[i].burst_time);
    }
    
    fcfs_schedule(processes, num_processes);
}

