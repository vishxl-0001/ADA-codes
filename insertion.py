import matplotlib.pyplot as plt

n = [1000, 3000, 6000, 10000, 15000, 20000, 25000]
time = [0.000501, 0.004219, 0.016502, 0.045612, 0.105798, 0.187453, 0.238117]  # Example: replace with your C output

plt.plot(n, time, marker='o', color='black')
plt.xlabel('Number of Elements (n)')
plt.ylabel('Time Taken (seconds)')
plt.title('Insertion Sort Time vs n')
plt.grid(True)
plt.show()
