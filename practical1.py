import matplotlib.pyplot as plt

n = [10, 100, 500, 1000, 10000, 50000, 100000, 500000, 1000000]
time = [0.000000, 0.000000, 0.000001, 0.000002, 0.000022,0.000093,0.000185,0.000923,0.001844]

plt.plot(n, time, marker='o',color='red')
plt.xlabel('Number of Elements (n)')
plt.ylabel('Time Taken (seconds)')
plt.title('Linear Search Time vs n')
plt.grid(True)
plt.show()