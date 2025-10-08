# <center>School Library Database</center>
```mermaid
erDiagram
    STUDENT {
        int StudentID PK "Uniquely identifies each student"
        string Name
        string Email
        string Major
    }
    BOOK {
        int ISBN PK "Uniquely identifies each book"
        string Title
        int PublicationYear
        int AuthorID FK "Links to the AUTHOR record"
    }
    AUTHOR {
        int AuthorID PK "Uniquely identifies each author"
        string Name
        string Nationality
    }
    LOAN {
        int LoanID PK "Uniquely identifies each loan"
        int StudentID FK "Links to the STUDENT record"
        int ISBN FK "Links to the BOOK record"
        int LibrarianID FK "Links to the LIBRARIAN record"
        date LoanDate
        date DueDate
    }
    LIBRARIAN {
        int LibrarianID PK "Uniquely identifies each librarian"
        string Name
        string Shift
    }

    AUTHOR ||--|{ BOOK : "writes"
    STUDENT ||--o{ LOAN : "borrows (max 4)"
    BOOK ||--|{ LOAN : "involves"
    LIBRARIAN ||--|{ LOAN : "manages"
```
<center>
<h1>School Library Database Class Diagram</h1>

This table outlines the relationships between entities in the library system.

| Entity 1  | Cardinality | Relationship | Entity 2  | Cardinality | Description                                                 |
| :-------- | :---------: | :----------- | :-------- | :---------: | :---------------------------------------------------------- |
| Author    |      1      | writes       | Book      |      M      | An Author writes one or more Books.                         |
| Student   |      1      | borrows      | Loan      |    0..4     | A Student can have between zero and four Loans at a time.   |
| Book      |      1      | involves     | Loan      |      M      | A Book can be involved in many Loans over time.             |
| Librarian |      1      | manages      | Loan      |      M      | A Librarian can manage many Loans.                          |
</center>

```mermaid
sequenceDiagram
    actor Student
    actor Librarian
    participant Book
    participant Loan

    Student->>Book: Selects a book to borrow
    Note right of Book: A Book is written by one Author (1:M)

    Student->>Librarian: Requests to borrow the selected Book
    
    Librarian->>Loan: Creates a new loan record
    activate Loan
    Note over Loan: A new Loan record is created,<br/>linking one Student and one Book.
    Loan-->>Librarian: Confirms LoanID
    deactivate Loan
    
    Note left of Librarian: A Librarian manages many Loans (1:M)

    Librarian-->>Student: Confirms book is checked out
    Note left of Student: A Student can have up to 4 loans (1:0..4)
```
## Step 1
```mermaid
sequenceDiagram
    actor Student
    participant Book

    Student->>Book: Selects a book to borrow
```
## Step 2
```mermaid
sequenceDiagram
    actor Student
    actor Librarian
    participant Book

    Student->>Book: Selects a book to borrow
    Student->>Librarian: Requests to borrow the selected Book
```
## Step 3
```mermaid
sequenceDiagram
    actor Student
    actor Librarian
    participant Book
    participant Loan

    Student->>Book: Selects a book to borrow
    Student->>Librarian: Requests to borrow the selected Book
    
    Librarian->>Loan: Creates a new loan record
    activate Loan
    Loan-->>Librarian: Confirms LoanID
    deactivate Loan
```
## Step 4
```mermaid
sequenceDiagram
    actor Student
    actor Librarian
    participant Book
    participant Loan

    Student->>Book: Selects a book to borrow
    Note right of Book: A Book is written by one Author (1:M)

    Student->>Librarian: Requests to borrow the selected Book
    
    Librarian->>Loan: Creates a new loan record
    activate Loan
    Note over Loan: A new Loan record is created,<br/>linking one Student and one Book.
    Loan-->>Librarian: Confirms LoanID
    deactivate Loan
    
    Note left of Librarian: A Librarian manages many Loans (1:M)

    Librarian-->>Student: Confirms book is checked out
    Note left of Student: A Student can have up to 4 loans (1:0..4)
```

---
<footer>
<p align="right">
  <small>ERD Group Project | © 2025 Nathaniel Betancourt, Danielle Shortt, Daniel Critchlow Jr.</small>
</p>
</footer>