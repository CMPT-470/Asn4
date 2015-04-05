define program

[function_statement] [NL]
{ [NL][IN]
   [print_statement]
   [return_statement] [NL][EX]
}

end define

define function_statement
	int main()
end define

define print_statement
	printf("Hello World\n"); [NL]
end define

define return_statement
	return 0;
end define

function main
    match [program]
	P[program]
end function