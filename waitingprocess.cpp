#include <stdio.h>

// Define the process structure
struct Process {
    int id;
    int arrival_time;
    int burst_time;
};
    // Function to perform Shortest Job First scheduling
void SJF(struct Process processes[], int n)
 {
    int current_time = 0;

    while (1) {
        int shortest_job = -1;
        int shortest_burst = INT_MAX;

        // Find the process with the shortest burst time
        for (int i = 0; i < n; i++)
		 {
            if (processes[i].arrival_time <= current_time && processes[i].burst_time < shortest_burst) {
                shortest_job = i;
                shortest_burst = processes[i].burst_time;
            }
        }

        // If no process is found, break the loop
        if (shortest_job == -1) 
		{
            if (current_time < n)
			 {
                current_time++;
            } 
			else
			 {
                break;
            }
        } 
		else 
		{
            // Execute the shortest job
            printf("Executing Process %d\n", processes[shortest_job].id);
            current_time += processes[shortest_job].burst_time;
            processes[shortest_job].burst_time

