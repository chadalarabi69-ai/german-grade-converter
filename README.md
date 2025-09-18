# German Grade Converter

This is a simple **C program** that converts a student's grade from the percentage system (0–100) to the German grading system (1.0–5.0).

---

## 📌 Features
- Input a grade in percentage (0–100).
- Convert it to the German grading scale:
  - 1.0 → Excellent (Sehr gut)
  - 2.0 → Good (Gut)
  - 3.0 → Satisfactory (Befriedigend)
  - 4.0 → Sufficient (Ausreichend)
  - 5.0 → Fail (Nicht bestanden)
- Displays the result directly in the terminal.

---

## 🛠️ How to Compile and Run

1. Make sure you have a **C compiler** installed (e.g., `gcc`).  
   On Windows, you can install [MinGW](http://www.mingw.org/).  
   On Linux/Mac, `gcc` is usually preinstalled.

2. Open a terminal in the project folder.  
   Compile the program with:
   ```bash
   gcc grade_converter.c -o grade_converter
Run the program:

On Linux/Mac:

bash
Copier le code
./grade_converter
On Windows (PowerShell or CMD):

bash
Copier le code
grade_converter.exe
📂 Project Structure
bash
Copier le code
grade_converter.c    # Main source code
README.md            # Project description
🚀 Example
csharp
Copier le code
Enter your grade (0-100): 85
Your German grade is: 1.7
