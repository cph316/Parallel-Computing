# Parallel-Computing

🧠 OpenMP 是什麼？
OpenMP 是一套在 共享記憶體系統（Shared Memory System） 上執行的 平行程式設計工具（API），用於在 C、C++ 和 Fortran 中撰寫多執行緒（Multi-threaded）程式。

它最大的優點是： 👉 使用簡單的指令（pragma 標籤）就能讓原本的序列程式變成平行化程式！

📦 基本特點
特性	   說明

語言支援	 C、C++、Fortran

架構	   適用於共享記憶體架構（如多核心 CPU）

執行模式	 多執行緒平行執行

實作方式	 使用 #pragma omp 指令即可標記要平行執行的區域

🚀 OpenMP 的優點
簡單學習：只需加入幾行 #pragma 指令即可。

編譯器支援好：GCC、Clang、Intel Compiler 都支援。

可漸進式平行化：從單一迴圈慢慢平行化整個程式。

適用多核心 CPU 加速：有效利用現代多核心電腦的效能。

