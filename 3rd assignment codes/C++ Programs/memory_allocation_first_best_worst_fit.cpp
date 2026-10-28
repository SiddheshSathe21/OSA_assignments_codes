#include <iostream>
#include <iomanip>
using namespace std;

void allocateMemory(int blocks[], int b, int process[], int p, int type) {
    int memory[20];
    int allocation[20];

    int totalMemory = 0;
    int allocatedMemory = 0;
    int success = 0;

    for (int i = 0; i < b; i++) {
        memory[i] = blocks[i];
        totalMemory += blocks[i];
    }

    for (int i = 0; i < p; i++)
        allocation[i] = -1;

    for (int i = 0; i < p; i++) {
        int best = -1;

        for (int j = 0; j < b; j++) {
            if (memory[j] >= process[i]) {
                if (type == 1) {
                    best = j;
                    break;
                } else if (type == 2) {
                    if (best == -1 || memory[j] < memory[best])
                        best = j;
                } else if (type == 3) {
                    if (best == -1 || memory[j] > memory[best])
                        best = j;
                }
            }
        }

        if (best != -1) {
            allocation[i] = best;
            memory[best] -= process[i];
            allocatedMemory += process[i];
            success++;
        }
    }

    cout << "\nProcess\tSize\tBlock\n";
    for (int i = 0; i < p; i++) {
        cout << "P" << i + 1 << "\t" << process[i] << "\t";
        if (allocation[i] != -1)
            cout << "B" << allocation[i] + 1;
        else
            cout << "Not Allocated";
        cout << endl;
    }

    int remaining = 0;
    for (int i = 0; i < b; i++)
        remaining += memory[i];

    cout << "\nSuccessfully Allocated Processes: " << success;
    cout << "\nRemaining Free Memory: " << remaining;
    cout << "\nMemory Utilization: "
         << fixed << setprecision(2)
         << (allocatedMemory * 100.0 / totalMemory) << "%\n";
}

int main() {
    int blocks[] = {100, 500, 200, 300, 600};
    int process[] = {212, 417, 112, 426};

    int b = 5;
    int p = 4;

    cout << "========== FIRST FIT ==========\n";
    allocateMemory(blocks, b, process, p, 1);

    cout << "\n========== BEST FIT ==========\n";
    allocateMemory(blocks, b, process, p, 2);

    cout << "\n========== WORST FIT ==========\n";
    allocateMemory(blocks, b, process, p, 3);

    return 0;
}
