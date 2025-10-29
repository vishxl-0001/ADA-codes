import matplotlib.pyplot as plt

sizes = [100, 200, 300, 400, 500]  
times = [ 0.021089, 0.149001, 0.162670, 0.396270, 0.809711] 

plt.figure(figsize=(7,5))
plt.plot(sizes, times, marker='o', linestyle='-', linewidth=2, markersize=8)
plt.title("Execution Time vs Matrix Size (Iterative Multiplication)", fontsize=14)
plt.xlabel("Matrix Size (n x n)", fontsize=12)
plt.ylabel("Execution Time (seconds)", fontsize=12)
plt.grid(True, linestyle="--", alpha=0.6)
plt.show()
