-- The SQL code should not matter(compatiable with both databases although stored procedures and triggers can only be used with MySQL/GO)
-- mysql will be written using go
-- C++ will be used for sqlite
-- SQLITE SYNTAX
-- sqlite3 test.db < commands.sql 
-- .tables = show tables
CREATE TABLE userInfo
(
    userID INTEGER PRIMARY KEY AUTOINCREMENT,
    userName VARCHAR(150) NOT NULL,
    password varchar(250) NOT NULL, --This needs to be encrypted. MySQL offers a hashing module but sqlite does not/openssl can solve this in C++/Go has its own crypto module 
    websiteName VARCHAR(255) NOT NULL,
    accountEmail VARCHAR(255) NOT NULL,
    accountActive BOOLEAN
)

-- MYSQL syntax
CREATE TABLE userInfo
(
    userID INT PRIMARY KEY AUTO INCREMENT,
    userName VARCHAR(150) NOT NULL,
    password varchar(250) NOT NULL, --This needs to be encrypted. MySQL offers a hashing module but sqlite does not/openssl can solve this in C++/Go has its own crypto module 
    website VARCHAR(255) NOT NULL,
    accountEmail VARCHAR(255) NOT NULL,
    accountActive BOOLEAN
)
-- show tables; 