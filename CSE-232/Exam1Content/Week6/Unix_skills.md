03-04-2024

# Unix Skills 

no readings

[lecture](https://cse232-msu.github.io/CSE232/lectures/week06.html)

- can see files in terminal with `cat` command
    - short for concatonate 
    - prints the contents of the file on the command line
- Use vim or emacs to edit files in unix terminal
- `less` command in terminal shows first page of large file
    - use arrow keys to scroll
    - q to end program
    - other function `more` was previous, leaves terminal schmutz
- `wc` command in terminal
    - wordcount
    - prints number of lines, words, and characters in a file
- `help` 
- `info` 
- `man` command
    - manual
    - gives documentation about a program, such as `wc`
    - ex `man wc` or `man ls`
    - gives out content in a pager, hit q to exit
- `history` command
    - shows all commands that have been typed into terminal
- `!!` command
    - runs the immediately previous command in the terminal
- Auto-complete
    - half typed in terminal and then two tabs, shows files from directory that match
    what has been typed so far
    - if only one match, will tabs will autocomplete
- Wildcards
    - `*` in terminal
        - refers to all files in current directory
    - can apply commands, such as `wc`, with `*` to get wordcount of all files in directory
    - can be constrained
        - ex: `*.h` selects all files with `.h` postfix