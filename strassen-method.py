import matplotlib.pyplot as plt

matrix_sizes = [64, 128, 256]
execution_times = [0.002469, 0.025674, 0.162562]

plt.figure(figsize=(8,6))
plt.plot(matrix_sizes, execution_times, marker='o', linestyle='-', color='blue')
plt.xlabel('Matrix Size (n x n)')
plt.ylabel('Execution Time (seconds)')
plt.title('Strassen Matrix Multiplication Execution Time')
plt.grid(True)
plt.show()
