
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <queue>

using namespace std;

struct Process
{
  int pid;
  int burst_time;
  int arrival_time;
  int priority;
  int completion_time;
  int waiting_time;
  int turnaround_time;
};

void fcfs(vector<Process> &processes);
void calculateWaitingTime(vector<Process> &processes, int &total_waiting_time);
void calculateTurnaroundTime(vector<Process> &processes, int &total_turnaround_time);
void displayProcesses(const vector<Process> &processes);

int main()
{
  int n;
  cout << "Enter the number of processes: ";
  cin >> n;
  vector<Process> processes(n);
  for (int i = 0; i < n; i++)
  {
    cout << "Enter burst time for process " << i + 1 << ": ";
    cin >> processes[i].burst_time;
    cout << "Enter arrival time for process " << i + 1 << ": ";
    cin >> processes[i].arrival_time;
    processes[i].pid = i + 1;
  }

  fcfs(processes);

  return 0;
}

void fcfs(vector<Process> &processes)
{
  int current_time = 0;
  int total_waiting_time = 0;
  int total_turnaround_time = 0;

  // Calculate completion time for each process and waiting time
  for (int i = 0; i < processes.size(); i++)
  {
    processes[i].waiting_time = max(0, current_time - processes[i].arrival_time);
    current_time = max(current_time, processes[i].arrival_time) + processes[i].burst_time;
    processes[i].completion_time = current_time;
  }

  calculateTurnaroundTime(processes, total_turnaround_time);

  cout << "\nFCFS Scheduling\n";
  displayProcesses(processes);

  double avg_waiting_time = 0;
  for (const auto &process : processes)
  {
    avg_waiting_time += process.waiting_time;
  }
  avg_waiting_time /= processes.size();

  double avg_turnaround_time = static_cast<double>(total_turnaround_time) / processes.size();

  cout << "Average Waiting Time: " << avg_waiting_time << endl;
  cout << "Average Turnaround Time: " << avg_turnaround_time << endl;
}

void calculateWaitingTime(vector<Process> &processes, int &total_waiting_time)
{
  for (int i = 0; i < processes.size(); i++)
  {
    processes[i].waiting_time = processes[i].completion_time - processes[i].burst_time - processes[i].arrival_time;
    total_waiting_time += processes[i].waiting_time;
  }
}

void calculateTurnaroundTime(vector<Process> &processes, int &total_turnaround_time)
{
  for (int i = 0; i < processes.size(); i++)
  {
    processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
    total_turnaround_time += processes[i].turnaround_time;
  }
}

void displayProcesses(const vector<Process> &processes)
{
  cout << "PID\tBurst Time\tArrival Time\tPriority\tCompletion Time\tWaiting Time\tTurnaround Time\n";
  for (const auto &process : processes)
  {
    cout << process.pid << "\t" << process.burst_time << "\t\t" << process.arrival_time << "\t\t" << process.priority << "\t\t" << process.completion_time << "\t\t" << process.waiting_time << "\t\t" << process.turnaround_time << endl;
  }
}