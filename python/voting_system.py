def display_candidates(candidates):
    print("Candidates:")
    for candidate, _ in candidates.items():
        print(f"- {candidate}")

def vote(candidates):
    print("\nVote for a candidate:")
    selected_candidate = input("Enter the candidate's name: ").strip()

    if selected_candidate in candidates:
        candidates[selected_candidate] += 1
        print("Vote recorded successfully!")
    else:
        print("Invalid candidate. Please choose a valid candidate.")

def display_results(candidates):
    print("\nVoting Results:")
    for candidate, votes in candidates.items():
        print(f"{candidate}: {votes} votes")

def main():
    candidates = {
        "candidate 1": 0,
        "candidate 2": 0,
        "candidate 3": 0,
        "candidate 4": 0}
    
    while True:
        print("\nSimple Voting System")
        print("1. Display Candidates")
        print("2. Vote")
        print("3. Display Results")
        print("4. Quit")

        choice = input("Enter your choice (1-4): ").strip()

        if choice == "1":
            display_candidates(candidates)
        elif choice == "2":
            vote(candidates)
        elif choice == "3":
            display_results(candidates)
        elif choice == "4":
            print("Exiting the voting system. Thank you!")
            break
        else:
            print("Invalid choice. Please enter a number between 1 and 4.")

if __name__ == "__main__":
    main()