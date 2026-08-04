// //if else
// //TAKE A POSITIVE INTEGER AS INPUT AND TELL IF IT IS EVEN OR ODD
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a positive integr:";
//     cin>>n;
//     if(n%2==0){
//         cout<<"The Entered number is Even";
//     }
//     else{
//         cout<<"The Entered number is Odd";
//     }

// }


#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

struct Process {
    int id, arrivalTime, burstTime, priority, waitingTime, turnaroundTime, remainingTime, startTime;
};

void calculateTimes(vector<Process> &processes) {
    int time = 0;
    for (auto &p : processes) {
        p.startTime = max(time, p.arrivalTime);
        p.waitingTime = p.startTime - p.arrivalTime;
        p.turnaroundTime = p.waitingTime + p.burstTime;
        time = p.startTime + p.burstTime;
    }
}

void FCFS(vector<Process> &processes) {
    sort(processes.begin(), processes.end(), [](Process a, Process b) {
        return a.arrivalTime < b.arrivalTime;
    });
    calculateTimes(processes);
}

void SJF(vector<Process> &processes) {
    sort(processes.begin(), processes.end(), [](Process a, Process b) {
        return a.burstTime < b.burstTime;
    });
    calculateTimes(processes);
}

void PriorityScheduling(vector<Process> &processes) {
    sort(processes.begin(), processes.end(), [](Process a, Process b) {
        return a.priority < b.priority;
    });
    calculateTimes(processes);
}

void RoundRobin(vector<Process> &processes, int timeQuantum) {
    queue<int> q;
    int time = 0, n = processes.size();
    for (int i = 0; i < n; i++) {
        processes[i].remainingTime = processes[i].burstTime;
        if (processes[i].arrivalTime == 0) q.push(i);
    }

    while (!q.empty()) {
        int i = q.front(); q.pop();
        int execTime = min(timeQuantum, processes[i].remainingTime);
        time += execTime;
        processes[i].remainingTime -= execTime;

        if (processes[i].remainingTime > 0) q.push(i);
        else {
            processes[i].waitingTime = time - processes[i].arrivalTime - processes[i].burstTime;
            processes[i].turnaroundTime = processes[i].waitingTime + processes[i].burstTime;
        }
    }
}

void displayResults(vector<Process> &processes) {
    float totalWT = 0, totalTAT = 0;
    cout << "\nPID\tAT\tBT\tPriority\tWT\tTAT\n";
    for (auto &p : processes) {
        cout << p.id << "\t" << p.arrivalTime << "\t" << p.burstTime << "\t" << p.priority
             << "\t\t" << p.waitingTime << "\t" << p.turnaroundTime << endl;
        totalWT += p.waitingTime;
        totalTAT += p.turnaroundTime;
    }
    cout << "Average Waiting Time: " << totalWT / processes.size() << endl;
    cout << "Average Turnaround Time: " << totalTAT / processes.size() << endl;
}

int main() {
    int n, choice, timeQuantum;
    cout << "Enter number of processes: ";
    cin >> n;
    vector<Process> processes(n);

    for (int i = 0; i < n; i++) {
        processes[i].id = i + 1;
        cout << "Enter Arrival Time, Burst Time, Priority for Process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime >> processes[i].priority;
    }

    cout << "Select Scheduling Algorithm:\n1. FCFS\n2. SJF\n3. Priority Scheduling\n4. Round Robin\n";
    cin >> choice;

    switch (choice) {
        case 1: FCFS(processes); break;
        case 2: SJF(processes); break;
        case 3: PriorityScheduling(processes); break;
        case 4: 
            cout << "Enter Time Quantum: ";
            cin >> timeQuantum;
            RoundRobin(processes, timeQuantum);
            break;
        default: cout << "Invalid Choice!\n"; return 0;
    }

    displayResults(processes);
    return 0;
}
