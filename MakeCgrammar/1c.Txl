% Grammar:
keys
	int
end keys

define program
	[c_function]
end define

define c_function
	[function_head] [NL]
	{ [NL][IN]
	  [function_body]
	}
end define

define function_head
	[return_type] [function_name]()
end define

define function_name
	[id]
end define

define function_body
	[print_statement]
	[return_statement]
end define

define return_type
	int
end define

define print_statement
	printf([stringlit]); [NL]
end define

define return_statement
	return [return_value]; [NL][EX]
end define

define return_value
	[number]
end define

% Rules:
function main
    match [program]
	P[program]
end function