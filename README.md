# 💪 Health Club Membership Fee Calculator

A simple C++ console application that calculates total membership fees based on user input. This project demonstrates the use of functions, control structures, input validation, and formatted output — ideal for showcasing foundational programming skills.

---

## 🧠 About the Project

This menu-driven program allows users to:
- Choose a membership type (Adult, Child, or Senior)
- Enter the number of months
- View the total cost, formatted to two decimal places

It ensures clean user input by validating both menu choices and month values, making the program robust against invalid or unexpected input (e.g., letters instead of numbers).

---

## 📸 Demo

# Sample Console Output

Below is an example of what the console output looks like when running the Health Club Membership program:

```console
Health Club Membership Menu

1. Standard Adult Membership
2. Child Membership
3. Senior Citizen Membership
4. Quit the Program

Enter your choice: 2
For how many months? 3

The total charges are $60.00
```



---

## ✨ Features

- Menu-based UI in the terminal
- Input validation for both choice and months
- Modular code using functions:
    - `showMenu()` – Displays the main menu
    - `showFees(double rate, int months)` – Calculates and shows total fees
- Formatted output using `iomanip`

---

## 🔧 Built With

- C++
- Standard Library: `iostream`, `iomanip`, `limits`

---

## 📂 File Structure

## 🚀 How to Run

1. Clone the repository:

    ```bash
    git clone https://github.com/your-username/health-club-membership.git
    ```

2. Navigate to the project directory:

    ```bash
    cd simple-health-club-program
    ```

3. Compile the code:

    ```bash
    g++ main.cpp -o membership
    ```

4. Run the program:

    ```bash
    ./membership
    ```

## 📚 What I Learned

- How to structure menu-driven applications in C++
- Using functions to modularize logic
- Performing input validation using `cin.fail()` and `cin.clear()`
- Handling invalid input safely
- Formatting numeric output using `fixed`, `showpoint`, and `setprecision`

## 📌 Future Improvements

- Add discounts for long-term memberships
- Allow users to view a breakdown of charges
- Add classes to manage different membership types more efficiently

## 👨‍💻 Author

**Sauel Almonte**  
[LinkedIn](https://www.linkedin.com/in/sauel-almonte) • [Portfolio](https://sauelalmonte.onrender.com)

## 📝 License

This project is open-source and available under the [MIT License](https://opensource.org/licenses/MIT).

