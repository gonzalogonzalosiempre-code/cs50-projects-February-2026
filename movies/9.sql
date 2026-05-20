-- 9. Names of all people who starred in a movie released in 2004, ordered by birth year
SELECT person_id, name FROM stars JOIN people ON stars.person_id = (
    SELECT id FROM people WHERE id = (
        SELECT person_id FROM stars WHERE movie_id IN (
            SELECT id FROM movies WHERE year = '2004'
        )
    )
)ORDER BY birth DESC;
