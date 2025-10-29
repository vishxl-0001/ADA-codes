import matplotlib.pyplot as plt

sizes = [64, 128, 256]
times = [0.006803,0.061315,0.222675]

plt.plot(sizes, times, marker='o', linestyle='-', linewidth=2)
plt.title("Recursive Matrix Multiplication Execution Time")
plt.xlabel("Matrix Size (n x n)")
plt.ylabel("Execution Time (seconds)")
plt.grid(True, linestyle="--", alpha=0.6)
plt.show()
