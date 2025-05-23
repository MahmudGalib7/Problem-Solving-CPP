# 🚀 C++ Learning Journey

---

> 🧠 My personal notes, practice problems, and progress as I learn modern C++ from [learncpp.com](https://www.learncpp.com) and the *C++ Primer* 📘.

[![GitHub stars](https://img.shields.io/github/stars/MahmudGalib7/Problem-Solving-CPP?style=social)](https://github.com/MahmudGalib7/Problem-Solving-CPP/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/MahmudGalib7/Problem-Solving-CPP?style=social)](https://github.com/MahmudGalib7/Problem-Solving-CPP/network/members)
[![MIT License](https://img.shields.io/badge/license-MIT-green)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/language-C++17-blue.svg)](https://en.cppreference.com/w/cpp)

---

## 📌 Overview

📚 A comprehensive dive into C++, starting from fundamentals to advanced concepts.  
🔍 Focused on problem-solving, best practices, and mastering modern C++.

> ⚠️ **NOTE**: This repo is a live journal of my learning — updated regularly as I progress.

---

## 📂 Repository Structure

```
Problem-Solving-CPP/
├── learncpp.com/         # Notes and exercises from learncpp.com
│   ├── chapter1/
│   ├── chapter2/
│   └── ...
└── cpp-primer/           # Practice from C++ Primer
    ├── chapter1/
    ├── chapter2/
    └── ...
```

---

## 📈 Progress Tracker

| Chapter                         | Status ✅ |
|---------------------------------|-----------|
| ✅ Chapter 1: C++ Basics        | Complete |
| ✅ Chapter 2: Variables         | Complete |
| 🔄 Chapter 3: Operators         | In Progress |
| 🔜 More chapters coming soon... | Planned |

---

## 🧩 Practice Problems & Solutions

<details>
<summary><strong>📘 Chapter 1: C++ Basics</strong></summary>

### 🔹 1.1 Statements and Structure of a Program

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

📝 **Concepts Covered**:
- Basic syntax
- `main()` function
- Output with `std::cout`
- Return statement

</details>

<details>
<summary><strong>🔧 Chapter 2: Variables and Data Types</strong></summary>

### 🔹 2.1 Data Types Overview

```cpp
#include <iostream>

int main() {
    int integer = 42;
    double floating = 3.14159;
    char character = 'A';
    bool boolean = true;

    std::cout << "Integer: " << integer << "\n";
    std::cout << "Floating: " << floating << "\n";
    std::cout << "Character: " << character << "\n";
    std::cout << "Boolean: " << boolean << "\n";

    return 0;
}
```

📌 **Concepts Covered**:
- Fundamental data types (`int`, `double`, `char`, `bool`)
- Basic output formatting

</details>

---

## 💡 Key Takeaways

> 🧭 **Best Practices**  
> - Use `constexpr` and `const` wherever possible.  
> - Initialize variables before use.  
> - Prefer `std::endl` only when flushing is needed.

> ⚠️ **Common Pitfalls**  
> - Forgetting `return 0;` in `main()` (though optional in C++11+).  
> - Using uninitialized variables.  
> - Misunderstanding integer division.

> 🚀 **Performance Tips**  
> - Use `std::cin.sync_with_stdio(false)` for faster I/O (carefully).  
> - Avoid `std::endl` unless flushing is needed — use `"\n"` instead.  

---

## 🛠 Tools & Resources

- 🧠 Learning: [learncpp.com](https://www.learncpp.com)
- 📘 Book: *C++ Primer* (5th Edition)
- 📎 Reference: [cppreference.com](https://en.cppreference.com/)
- 💻 IDE: [VS Code](https://code.visualstudio.com/)
- ⚙️ Compiler: [GCC](https://gcc.gnu.org/), [Clang](https://clang.llvm.org/)

---

## 📅 Roadmap

- ✅ Finish beginner content on learncpp.com
- 🔜 Move to *C++ Primer* for deeper insights
- 🧪 Solve 100+ CP problems using C++
- 🛠️ Build mini projects using STL and modern C++ features
- 💼 Prepare for competitive programming & real-world development

---

## 📜 License

Licensed under the [MIT License](LICENSE).  
Feel free to use, share, and improve this project.

---

> 👨‍💻 Maintained by [@MahmudGalib7](https://github.com/MahmudGalib7) — learning by building.


---
