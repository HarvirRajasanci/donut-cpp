# Donut.cpp 🎯🍩

A fun, terminal-based 3D ASCII spinning donut rendered using math and pure C++!

## 🚀 Demo

This program uses trigonometry and perspective projection to draw a rotating 3D torus (donut) entirely in ASCII characters in your terminal window.

<p align="center">
  <img src="demo.gif" alt="Spinning Donut Demo" width="500"/>
</p>

---

## 📁 Files

- `Donut.cpp` — main C++ source file containing the ASCII donut logic.

---

## 🧰 Requirements

- C++ compiler (`g++` or `clang++`)
- A terminal that supports ANSI escape sequences (most do)

---

## ⚙️ How to Build & Run

### Linux / macOS / WSL

```bash
g++ Donut.cpp -o Donut -lm
./Donut
