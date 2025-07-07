# unit_test_generator
# 🔍 Unit Test Generator for C++ using Local LLMs

This project implements a **unit test generator tool** for C++ applications, powered by **AI models** (e.g., Ollama or GitHub-hosted models), and integrated with **GoogleTest** and **GCov** for build verification and code coverage.

It automates:
- Test case generation using LLMs  
- Test refinement using YAML prompts  
- Build & debug handling  
- Test coverage analysis  

---

## 📁 Project Structure
unit-test-generator/
│
├── cpp_project/
│ ├── add.cpp # Sample function to be tested
│ └── add.h
│
├── tests/
│ └── test_main.cpp # Generated and refined unit tests
│
├── googletest/ # GoogleTest cloned locally
│
├── CMakeLists.txt # Build configuration
├── build/ # Auto-generated build files
├── test-report/ # (Optional) Test coverage results
└── README.md

## ⚙️ Build Instructions

### ✅ 1. Clone and Setup

```bash
git clone https://github.com/ankita-2311/unit-test-generator.git
cd unit-test-generator

# Clone GoogleTest if not already present
git clone https://github.com/google/googletest.git

✅ 2. Build and Run Tests
rm -rf build
mkdir build && cd build
cmake -G "Ninja" ..
ninja
./runTests

🧠 LLM-Powered Unit Test Workflow

✅ Input
Simple C++ file with an add(int, int) function in cpp_project/add.cpp.

✅ Prompt to LLM (e.g., Ollama or GitHub-hosted model)
The LLM was given a YAML-based instruction file to generate unit tests for edge cases like:

Positive/Negative values

Mixed signs

Zero handling

Integer overflow/underflow boundaries

✅ Output
The tests were generated and saved in tests/test_main.cpp. Then the LLM was further prompted to refine:

Remove duplicate tests

Add edge cases

Format test names clearly

Include proper headers

📈 Code Coverage Report
We used gcov to measure how much of add.cpp is tested.
gcov CMakeFiles/runTests.dir/cpp_project/add.cpp.obj

✅ Output:
File 'cpp_project/add.cpp'
Lines executed:100.00% of 2

📝 Learnings
Integrated C++ code with GoogleTest, CMake, and gcov for real test coverage.

Understood how to guide an LLM using YAML prompts.

Built a repeatable pipeline to auto-generate and refine tests using LLMs.

Learned how to debug linker/build issues in test pipelines.

🔗 Submission
GitHub Link: https://github.com/ankita-2311/unit-test-generator







Ask ChatGPT
