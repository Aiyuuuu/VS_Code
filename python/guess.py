def guess_number_game():
    print("Welcome to the Number Guessing Game!")
    print("I have selected a number between 1 and 100. Can you guess it?")

    secret_number = 66
    max_attempts = 3
    attempts = 0

    while attempts < max_attempts:
        user_guess = input("Enter your guess: ")

        try:
            user_guess = int(user_guess)
        except ValueError:
            print("Please enter a valid number.")
            continue

        attempts += 1

        if user_guess == secret_number:
            print(f"Yes! You guessed the correct number {secret_number} in {attempts} attempts. You win!")
            return

        if attempts < max_attempts:
            print(
                f"Oops! Try again. You have {max_attempts - attempts} attempt{'s' if max_attempts - attempts > 1 else ''} left.")
        else:
            print(f"Booooo! You lost the game. Better luck next time. The correct number was {secret_number}.")

guess_number_game()
