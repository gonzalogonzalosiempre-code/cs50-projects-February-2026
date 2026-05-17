import csv
import sys


def main(argv[]):

    # TODO: Check for command-line usage
    if len(sys.argv) != 2:
        return
    database = argv[1]
    Sequence = argv[2]
    # TODO: Read database file into a variable
    file_cvs = []
    sequence = []
    fila_count = 1
    with open(database) as file:
        file_cvs = cvs.DictReader(file)

    with open(Sequence) as Secuencia:
        sequence = cvs.DictReader(Secuencia)

    # TODO: Read DNA sequence file into a variable
    for fila in file_cvs:
        count_str[] = fila[fila_count:]
    count_str[0][0] 



    # TODO: Find longest match of each STR in DNA sequence

    # TODO: Check database for matching profiles

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
