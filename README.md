# OODP-Mini-Project

# Flight Management System

## Introduction
The **Flight Management System** is a C++-based application that allows users to efficiently book, manage, and cancel flight tickets. The system integrates airline data to provide real-time flight details and booking management. Additionally, administrators can oversee flight schedules, routes, and crew information.

## Features
### 1. Crew Management
- HR and managers can **add, edit, and delete** details of pilots, engineers, and crew members.
- Maintain records of **salaries and holidays**.

### 2. Flight Navigation
- Pilots and air control staff can **navigate flight routes, check runway details, and monitor fuel status**.
- Air control staff can update **weather forecasts** and other critical flight information.

### 3. Schedule Management
- Pilots can **view their daily schedules, flight hours, and assigned crew members**.

### 4. Customer Booking System
- Customers can **book, check status, and cancel tickets**.
- Additional feature to **add beverages to orders**.

## System Diagrams
The project includes several UML diagrams for better understanding:
- **Use Case Diagram**
- **Class Diagram**
- **Sequence Diagram**
- **Collaboration Diagram**
- **Activity Diagram**
- **State Chart Diagram**
- **Deployment Diagram**
- **Package Diagram**
- **Component Diagram**

## Implementation Details
- Developed using **C++**.
- File handling is used for **storing flight and user data**.
- Functions included for **adding, removing, and viewing flights**.
- **Multithreading** used for smooth processing (e.g., cancellation & booking confirmations).

## Setup & Usage
### Prerequisites
- A C++ compiler (G++ or MSVC recommended)

### How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/flight-management-system.git
   ```
2. Navigate to the project folder:
   ```bash
   cd flight-management-system
   ```
3. Compile the code:
   ```bash
   g++ flight_management.cpp -o flight_management
   ```
4. Run the application:
   ```bash
   ./flight_management
   ```

## Future Enhancements
- **Database integration** for better data management.
- **GUI-based interface** for improved user experience.
- **Online ticket booking system** using web technologies.

## Contributors
- **M. Jaswanth**  
- **V. Aman Roy**

## License
This project is open-source and available under the [MIT License](LICENSE).

