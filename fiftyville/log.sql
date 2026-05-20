-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT flights.id, full_name, city, hour, minute
FROM flights
JOIN airports ON flights.destination_airport_id = airports.id
WHERE year = 2025 AND month = 7 AND day = 29
ORDER BY hour, minute
LIMIT 1;

SELECT name FROM people
WHERE id IN (
    -- 1. Gente que retiró dinero en Leggett St esa mañana
    SELECT person_id FROM bank_accounts
    JOIN atm_transactions ON bank_accounts.account_number = atm_transactions.account_number
    WHERE year = 2025 AND month = 7 AND day = 28
    AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw'
)
AND license_plate IN (
    -- 2. Gente que salió del estacionamiento entre las 10:15 y 10:25
    SELECT license_plate FROM bakery_security_logs
    WHERE year = 2025 AND month = 7 AND day = 28
    AND hour = 10 AND minute >= 15 AND minute <= 25 AND activity = 'exit'
)
AND phone_number IN (
    -- 3. Gente que hizo una llamada de menos de un minuto
    SELECT caller FROM phone_calls
    WHERE year = 2025 AND month = 7 AND day = 28 AND duration < 60
)
AND passport_number IN (
    -- 4. Pasajeros del vuelo que identificamos antes (vuelo ID 36 usualmente)
    SELECT passport_number FROM passengers
    WHERE flight_id = (
        SELECT id FROM flights
        WHERE year = 2025 AND month = 7 AND day = 29
        ORDER BY hour, minute LIMIT 1
    )
);

SELECT name FROM people
WHERE phone_number = (
    SELECT receiver FROM phone_calls
    WHERE year = 2025 AND month = 7 AND day = 28
    AND duration < 60
    AND caller = (SELECT phone_number FROM people WHERE name = 'Bruce')
);

