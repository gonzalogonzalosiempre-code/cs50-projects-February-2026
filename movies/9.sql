-- 9. Names of all people who starred in a movie released in 2004, ordered by birth year
SELECT stars.person_id, people.name FROM stars JOIN people ON stars.person_id = people.id


