CREATE DATABASE internship_sql;
USE internship_sql;
SELECT DATABASE();

CREATE TABLE users (
    id INT PRIMARY KEY,
    name VARCHAR(50),
    age INT
);

DESCRIBE users;

INSERT INTO users VALUES (1, 'Amit', 21);
INSERT INTO users VALUES (2, 'Riya', 22);
INSERT INTO users VALUES (3, 'Kunal', 20);
INSERT INTO users VALUES (4, 'Sneha', 23);
INSERT INTO users VALUES (5, 'Arjun', 21);
SELECT * FROM users;

-- Select all rows
SELECT * FROM users;

-- Select specific columns
SELECT name, age FROM users;

-- Filter rows
SELECT * FROM users WHERE age > 21;

-- Sort results
SELECT * FROM users ORDER BY age ASC;

-- Limit output
SELECT * FROM users ORDER BY age DESC LIMIT 3;
