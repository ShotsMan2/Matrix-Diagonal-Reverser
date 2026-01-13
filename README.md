# Matrix Diagonal Reverser

This project implements a matrix transformation algorithm in C. It specifically targets the **Main Diagonal** and **Anti-Diagonal** of a square matrix and reverses the order of elements within them.

## ⚙️ Algorithm Logic

1.  **Initialization:**
    * Generates an $N \times N$ matrix with random values $[0, 10]$.
2.  **Extraction:**
    * Identifies elements on the Main Diagonal ($i, i$) and Anti-Diagonal ($i, N-1-i$).
3.  **Transformation (Reversal):**
    * The element at the top-left is swapped with the value that would be at the bottom-left/right depending on the reversal logic.
    * Effectively performs a spatial inversion of the diagonal values.

## 🚀 Example Transformation

**Input Matrix (Diagonal Elements):**
```text
1   .   55
.   2   .
44  .   3
