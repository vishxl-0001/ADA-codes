import matplotlib.pyplot as plt

n = [1000, 3000, 6000, 10000, 15000, 20000, 25000]
time = [0.000403, 0.001703, 0.003121, 0.005581, 0.010627, 0.014511, 0.017573]

plt.plot(n, time, marker='o', color='black')
plt.xlabel('Number of Elements (n)')
plt.ylabel('Time Taken (seconds)')
plt.title('Quick Sort Time vs n')
plt.grid(True)
plt.show()
