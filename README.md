# Movie Booking System

A console-based Movie Booking System developed in C++ using Object-Oriented Programming concepts.

## Features

- View available movies
- View shows for each movie
- Display available and booked seats
- Book multiple seats
- Automatic ticket price calculation
- Multiple payment methods: UPI, Card, and Cash
- Print booking tickets
- Cancel confirmed bookings
- Handle payment failure and release seats

## Technologies Used

- C++
- Object-Oriented Programming
- STL Vector
- Inheritance and Polymorphism
- Encapsulation and Abstraction
- SOLID Principles

## Project Structure

```text
Movie-Booking-System/
│
├── main.cpp
├── MainMenu.cpp
├── Movie.cpp
├── Cinema.cpp
├── Screen.cpp
├── Seat.cpp
├── Show.cpp
├── ShowSeat.cpp
├── Customer.cpp
├── Booking.cpp
├── BookingService.cpp
├── Payment.cpp
├── PaymentType.cpp
├── UpiPayment.cpp
├── CardPayment.cpp
├── CashPayment.cpp
├── PriceCalculator.cpp
└── TicketPrinter.cpp
```

## How to Run

Compile all `.cpp` files using:

```bash
g++ *.cpp -o MovieBookingSystem
```

Run the program:

```bash
./MovieBookingSystem
```

On Windows:

```bash
MovieBookingSystem.exe
```

## Booking Flow

```text
Select Movie
     ↓
Select Show
     ↓
Select Seats
     ↓
Enter Customer Details
     ↓
Select Payment Method
     ↓
Payment
     ↓
Booking Confirmed
     ↓
Print Ticket
```

If payment fails, the selected seats are released automatically.

## OOP Concepts

This project demonstrates:

- Encapsulation
- Abstraction
- Inheritance
- Polymorphism
- Composition
- Aggregation
- SOLID Principles

## Limitations

- Data is stored only in memory.
- No database is used.
- Payments are simulated.
- It is a console-based application.

## Future Improvements

- Database integration
- User login and registration
- Admin panel
- GUI/Web interface
- Real payment integration
- Booking history

## Author

**Your Name**

## License

This project is created for educational purposes.
