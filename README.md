# 📞 Phonebook Management System

<div align="center">
  <h3>A simple console-based phonebook application written in C</h3>
  <p>Manage your contacts efficiently with basic CRUD operations</p>
</div>

---

## 📖 Overview

This is a lightweight phonebook management system implemented in C that allows users to store, search, modify, and delete contact information through a simple command-line interface. The program demonstrates fundamental C programming concepts including structures, arrays, string handling, and menu-driven programming.

## ✨ Features

- 📝 **Add Contacts** - Store name and phone number pairs
- 🔍 **Search Contacts** - Find contacts by name quickly
- 📋 **Display All** - View complete phonebook entries
- 🗑️ **Delete Contacts** - Remove unwanted entries
- 💾 **Memory Efficient** - Supports up to 100 entries
- 🎯 **User Friendly** - Interactive menu-driven interface

## 🛠️ Technical Specifications

| Aspect | Details |
|--------|---------|
| **Language** | C (ANSI C compatible) |
| **Compiler** | GCC, Clang, or any standard C compiler |
| **Memory Usage** | Static array allocation |
| **Max Entries** | 100 contacts |
| **Name Length** | Up to 49 characters |
| **Number Length** | Up to 14 characters |

## 🚀 Getting Started

### Prerequisites

- C compiler (GCC recommended)
- Terminal/Command prompt access

### Installation & Compilation

1. **Clone or download the repository**
   ```bash
   git clone <repository-url>
   cd phonebook-system
   ```

2. **Compile the program**
   ```bash
   gcc -o phonebook phonebook.c
   ```

3. **Run the application**
   ```bash
   ./phonebook
   ```

   **Windows users:**
   ```cmd
   phonebook.exe
   ```

## 🎮 How to Use

### Main Menu Options

```
Phonebook Menu:
1. Add Phone Number
2. Delete Phone Number  
3. Display All Phone Numbers
4. Search for a Phone Number
5. Exit
```

### Usage Examples

#### Adding a Contact
```
Enter your choice: 1
Enter name: JohnDoe
Enter number: 1234567890
Phone number added successfully!
```

#### Searching for a Contact
```
Enter your choice: 4
Enter name to search: JohnDoe
Number for JohnDoe: 1234567890
```

#### Displaying All Contacts
```
Enter your choice: 3
Phonebook entries:
JohnDoe: 1234567890
JaneSmith: 0987654321
```

#### Deleting a Contact
```
Enter your choice: 2
Enter name to delete: JohnDoe
Phone number deleted successfully!
```

## 🧠 Program Structure

### Key Components

```c
struct PhoneNumber {
    char name[50];      // Contact name
    char number[15];    // Phone number
};
```

### Core Functions

| Function | Purpose |
|----------|---------|
| `addPhoneNumber()` | Adds a new contact to the phonebook |
| `deletePhoneNumber()` | Removes a contact by name |
| `displayPhoneNumbers()` | Shows all stored contacts |
| `searchPhoneNumber()` | Finds and displays a specific contact |
| `main()` | Handles menu loop and user interaction |

### Algorithm Highlights

- **Linear Search** - O(n) time complexity for search and delete operations
- **Array Shifting** - Maintains contiguous storage after deletions
- **String Comparison** - Uses `strcmp()` for exact name matching
- **Input Validation** - Checks for phonebook capacity limits

## 📋 Features in Detail

### ✅ Current Capabilities
- Store contact name and phone number
- Case-sensitive name searching
- Dynamic entry management
- Memory bounds checking
- User-friendly error messages

### 🔧 Limitations
- No persistent storage (data lost on exit)
- Single phone number per contact
- Case-sensitive name matching only
- No duplicate name prevention
- Limited input validation

## 🚧 Future Enhancements

### Planned Features
- [ ] **File I/O** - Save/load phonebook from file
- [ ] **Multiple Numbers** - Support for multiple phone numbers per contact
- [ ] **Advanced Search** - Partial name matching and case-insensitive search
- [ ] **Data Validation** - Phone number format validation
- [ ] **Sorting** - Alphabetical contact sorting
- [ ] **Edit Function** - Modify existing contact information
- [ ] **Duplicate Prevention** - Check for existing names before adding
- [ ] **Backup System** - Export/import functionality

### Technical Improvements
- [ ] **Dynamic Memory** - Replace fixed arrays with dynamic allocation
- [ ] **Better UI** - Enhanced console interface
- [ ] **Error Handling** - Comprehensive input validation
- [ ] **Performance** - Binary search for faster lookups

## 🔧 Compilation Options

### Basic Compilation
```bash
gcc phonebook.c -o phonebook
```

### With Debugging Information
```bash
gcc -g -Wall -Wextra phonebook.c -o phonebook
```

### Optimized Build
```bash
gcc -O2 phonebook.c -o phonebook
```

## 🐛 Troubleshooting

### Common Issues

| Problem | Solution |
|---------|----------|
| **Compilation errors** | Ensure C compiler is installed and accessible |
| **Input issues** | Avoid spaces in names (use underscores) |
| **Memory warnings** | Check that MAX_ENTRIES isn't exceeded |
| **Search failures** | Ensure exact name spelling and case |

### Debugging Tips
- Use `-g` flag for debugging symbols
- Check array bounds in functions
- Verify string handling operations
- Test edge cases (empty phonebook, full capacity)

## 🤝 Contributing

Contributions are welcome! Here's how you can help:



## 📚 Learning Objectives

This project demonstrates:
- **C Programming Fundamentals** - Variables, functions, control structures
- **Data Structures** - Arrays and structures
- **String Manipulation** - Using string.h library functions
- **Memory Management** - Static allocation and bounds checking
- **User Interface Design** - Menu-driven console applications
- **Algorithm Implementation** - Search and delete operations



## 🎓 Educational Use

Perfect for:
- **C Programming Courses** - Demonstrates core concepts
- **Data Structures Learning** - Basic array and structure usage
- **Algorithm Practice** - Search and manipulation operations
- **Software Development** - Complete application lifecycle

## 📞 Support

If you encounter any issues or have questions:
- Create an issue in the repository
- Check the troubleshooting section
- Review the code comments for implementation details

---

<div align="center">
  <strong>⭐ Star this repository if you found it helpful!</strong>
  <br>
  <em>Happy Coding! 💻</em>
</div>
