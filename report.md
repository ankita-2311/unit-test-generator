## Unit Test Generator Report

### ✅ Summary:
- **Tested Function**: `add(int, int)`
- **LLM Used**: ChatGPT (or other if applicable)
- **Framework**: GoogleTest
- **Compiler**: g++ (with --coverage flag)

### 📈 Coverage Results:
- File: `add.cpp`
- Lines executed: **100.00% of 2**

### 🛠️ Process:
1. Generated initial test using LLM with `generate_prompt.yaml`
2. Refined tests using `refine_prompt.yaml`
3. Built with GoogleTest + coverage flags
4. Verified `.gcov` output shows full coverage

### 📌 Improvements:
- Automate YAML prompt generation
- Add exception/overflow handling tests in future
