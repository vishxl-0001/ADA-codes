import matplotlib.pyplot as plt

n = [10, 100, 500, 1000, 10000, 50000, 100000, 500000, 1000000]
time = [0.000013, 0.000022, 0.000027, 0.000030, 0.000049,0.000058,0.000062,0.000072,0.000076]

plt.plot(n, time, marker='o',color='black')
plt.xlabel('Number of Elements (n)')
plt.ylabel('Time Taken (seconds)')
plt.title('Binary Search Time vs n')
plt.grid(True)
plt.show()