
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <queue>
using namespace std;

struct Process {
  int pid;
  int burst_time;
  int arrival_time;
  int priority; 
  int completion_time;
  int waiting_time;
  int turnaround_time;
};

void multiLevelQueue(vector<Process>& processes);
void calculateWaitingTime(vector<Process>& processes, int& total_waiting_time);
void calculateTurnaroundTime(vector<Process>& processes, int& total_turnaround_time);
void displayProcesses(const vector<Process>& processes);

int main() {
  int n;
  cout << "Enter the number of processes: ";
  cin >> n;
  vector<Process> processes(n);
  for (int i = 0; i < n; i++) {
    cout << "Enter burst time for process " << i + 1 << ": ";
    cin >> processes[i].burst_time;
    cout << "Enter arrival time for process " << i + 1 << ": ";
    cin >> processes[i].arrival_time;
    cout << "Enter priority for process " << i + 1 << ": ";
    cin >> processes[i].priority;
    processes[i].pid = i + 1;
  }

  multiLevelQueue(processes);

  return 0;
}

void multiLevelQueue(vector<Process>& processes) {
  // Implement multi-level queue scheduling algorithm here
}

void calculateWaitingTime(vector<Process>& processes, int& total_waiting_time) {
  for (int i = 0; i < processes.size(); i++) {
    processes[i].waiting_time = processes[i].completion_time - processes[i].burst_time - processes[i].arrival_time;
    total_waiting_time += processes[i].waiting_time;
  }
}

void calculateTurnaroundTime(vector<Process>& processes, int& total_turnaround_time) {
  for (int i = 0; i < processes.size(); i++) {
    processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
    total_turnaround_time += processes[i].turnaround_time;
  }

}

void displayProcesses(const vector<Process>& processes) {
  cout << "PID\tBurst Time\tArrival Time\tPriority\tCompletion Time\tWaiting Time\tTurnaround Time\n";
  for (const auto& process : processes) {
    cout << process.pid << "\t" << process.burst_time << "\t\t" << process.arrival_time << "\t\t" << process.priority << "\t\t" << process.completion_time << "\t\t" << process.waiting_time << "\t\t" << process.turnaround_time << endl;
  }
}