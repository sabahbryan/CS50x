import csv

from collections import Counter

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    counts = Counter()

    for row in reader:
        favorite = row["problem"]
        counts[favorite] += 1

favorite = input("Favorite: ") # user-input
print(f"{favorite}: {counts[favorite]}")

"""
RELATIONAL DATABASE

SQL = Structured Query Language
# declarative language
#   = describe data to return instead of dealing with conditionals/loops

sqlite3 FILE

CRUD = create (insert), read, update, delete (drop)

CREATE TABLE table (column type, ...);
"""
"""
$ sqlite3 favorites.db

sqlite> .mode csv
sqlite> .import favorites.csv favorites
sqlite> .quit

sqlite> .schema
    CREATE TABLE IF NOT EXISTS "favorites"(
    "Timestamp" TEXT, "language" TEXT, "problem" TEXT,);

sqlite> SELECT * FROM favorites;
sqlite> SELECT language FROM favorites;
sqlite> SELECT language FROM favorites LIMIT 10;

AVG. COUNT, DISTINCT, LOWER, MAX, MIN, UPPER, ...
sqlite> SELECT COUNT(*) FROM favorites;
sqlite> SELECT COUNT(DISTINCT(languages)) FROM favorites;

WHERE, LIKE, ORDER BY, LIMIT, GROUP BY
sqlite> SELECT COUNT(*) FROM favorites WHERE language = 'C' AND problem = 'Hello, World';
sqlite> SELECT language, COUNT(*) FROM favorites GROUP BY language;
sqlite> SELECT language, COUNT(*) FROM favorites GROUP BY language ORDER BY COUNT(*);
sqlite> SELECT language, COUNT(*) FROM favorites GROUP BY language ORDER BY COUNT(*) DESC;
sqlite> SELECT language, COUNT(*) AS n FROM favorites GROUP BY language ORDER BY n DESC;
sqlite> SELECT language, COUNT(*) AS n FROM favorites GROUP BY language ORDER BY n DESC LIMIT 1;

INSERT INTO table (coloumn, ...) VALUES(value, ...);
sqlite> INSERT INTO favorites (language, problem) VALUES('SQL', 'Fiftyville');
sqlite> SELECT * FROM favorites;

DELETE FROM table WHERE condition;
sqlite> DELETE FROM favorites WHERE Timestamp IS NULL;
    *CAUTION - this command deletes everything!*
sqlite> DELETE FROM favorites;

UPDATE table SET column = value WHERE condition;
    *CAUTION - this command edits everything!*
sqlite> UPDATE favorites SET language = 'SQL', problem = 'Fiftyville';
"""

"""
$ sqlite3 shows.db
sqlite> SELECT * FROM shows LIMIT 10;
sqlite> SELECT * FROM ratings LIMIT 10;
======================
sqlite> .schema shows;
CREATE TABLE shows{
    id INTEGER,
    title TEXT NOT NULL,
    year NUMERIC,
    episodes INTEGER,
    PRIMARY KEY(id)
};
=======================
sqlite> .schema ratings;
CREATE TABLE shows{
    show_id INTEGER NOT NULL,
    rating REAL NOT NULL,
    votes INTEGER NOT NULL,
    FOREIGN KEY(show_id) REFERENCES shows(id)
};

BLOB (binary large object), INTEGER, NUMERIC (dates/times), REAL, TEXT
NOT NULL, UNIQUE (prevent duplicates)
PRIMARY KEY (unique ID), FOREIGN KEY (presence of primary keys elsewhere)

sqlite> SELECT * FROM ratings WHERE rating >= 6.0 LIMIT 10;
sqlite> SELECT show_id FROM ratings WHERE rating >= 6.0 LIMIT 10;
sqlite> SELECT * FROM shows WHERE id = 62614;
sqlite> SELECT * FROM shows WHERE id IN
   ...> (SELECT show_id FROM rating WHERE rating >= 6.0);
sqlite> SELECT title FROM shows WHERE id IN
   ...> (SELECT show_id FROM rating WHERE rating >= 6.0);

JOIN
sqlite> SELECT * FROM shows JOIN ratings ON shows.id = ratings.show_id WHERE rating >= 6.0 LIMIT 10;
sqlite> SELECT title, rating FROM shows JOIN ratings ON shows.id = ratings.show_id WHERE rating >= 6.0 LIMIT 10;

***one-to-many***
sqlite> SELECT * FROM genres LIMIT 10;
sqlite> SELECT * from
"""
