import yaml
import subprocess
from pathlib import Path

def load_prompt(path):
    with open(path, 'r') as file:
        return yaml.safe_load(file)

def generate_test_code(prompt):
    # Call your local LLM model (Ollama, LM Studio etc.)
    # Example for Ollama (pseudo-code):
    input_text = f"Write Google Test cases for function: {prompt['function']['signature']}\n"
    return input_text  # simulate output from model

def write_test_file(output, file_path):
    with open(file_path, 'w') as f:
        f.write(output)

if __name__ == "__main__":
    prompt_path = "prompts/add.yaml"
    prompt = load_prompt(prompt_path)

    test_code = generate_test_code(prompt)
    output_path = "tests/test_add_generated.cpp"
    write_test_file(test_code, output_path)

    print(f"Test case written to: {output_path}")
# After test generation
subprocess.run(["cmake", "-B", "build", "-G", "Ninja"], check=True)
subprocess.run(["ninja", "-C", "build"], check=True)
subprocess.run(["./build/runTests"])
