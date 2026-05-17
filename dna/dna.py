import csv
import sys


def main():

    # TODO: Check for command-line usage
    if len(sys.argv) != 3:
        return
    database = argv[1]
    Sequence = argv[2]
    # TODO: Read database file into a variable
    row = []
    with open(database) as file:
        reader = cvs.DictReader(file)
        strs = database.fieldnames[1:]

        for row in reader:
            row.append(row)
    with open(Sequence) as file:
        database_date = file.read()
    # TODO: Check database for matching profiles
    match_count = longest_match()

    return


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in sequence, return longest run found
    return longest_run


main()
