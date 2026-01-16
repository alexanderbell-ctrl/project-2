# project-2
Intro to C / number guessing game

### Algorithm
include standard library (stdlib.h)
include standard I/O library (stdio.h)
include time library (time.h)

int main()
    print message asking for name
    'char' variable 'name' stores user's name
    scanf to take terminal input, placing into 'name'
    printf prints welcome message w/ user's name

    - generate random number
    set the seed for rand() as the current time: srand(time(NULL))
    integer 'game_value' = rand()
    
    integer 'game_value'= integer % 100) +1 (remainder of /100, +1 --> random number 1 through 100)
    
    - game loop
    keepGoing = True
    while keepGoing
        integer turn_num = 1
        printf "attempt #{turn_num}
        printf "Please enter your guess: "
        initialize int 'guess' as 0
        scanf %s, guess
        
        if guess > game_value
            print "Too High"
            turn_num + 1
        else if guess < game_value
            print "Too low"
            turn_num + 1
        else guess is game_value
            print "You win"
            keepGoing = false






