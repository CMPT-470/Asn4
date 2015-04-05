% Grammar:

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
	[repeat variable_declaration] [repeat scan_statement] [repeat if_statement] [repeat assignment_statement] [repeat print_statement] [return_statement]
end define

define return_type
	int
end define

define variable_declaration
	[id] [list id]; [NL]
	| [id] [id] [id] = [number]; [NL]
	| [id] [id] [id]; [NL]
end define

define print_statement
	printf([stringlit]); [NL]
	| printf([stringlit],[id]); [NL]
end define

define return_statement
	return [return_value]; [NL][EX]
end define

define return_value
	[number]
end define

define assignment_statement
	[id] = [number]; [NL]
	| [id] = [charlit]; [NL]
	| [id] = [id] + [number]; [NL]
	| [id] = [id] - [number]; [NL]
	| [id] = [id] * [number]; [NL]
end define

define scan_statement
	scanf([stringlit],[id]); [NL]
end define

tokens
	id | "[&]\i*"
end tokens

define bool_expr
	'>
	| '!
	| =[SPOFF]=[SPON]
end define

compounds
	'&&
	'||
end compounds

define expression
	[id_or_number] [bool_expr] [id_or_number]
	| [bool_expr] [SPOFF] ( [SPON] [id_or_number] [bool_expr] [id_or_number] )
end define
 
define if_statement
	if ( [conditions] ) [NL]
	[opt begin_bracket] [IN]
    	[repeat assignment_statement] [repeat print_statement] [EX]
	[opt end_bracket]
	[opt else_statement]
end define

define else_statement
	else [NL]
	[opt begin_bracket] [IN]
    	[repeat assignment_statement] [repeat print_statement] [EX]
	[opt end_bracket]
end define

define begin_bracket
	{ [NL]
end define

define end_bracket
	} [NL]
end define

define id_or_number
   	[id]
    	| [number]
	| '-[number]
end define

define conditions
	[expression]
	| [expression] [and_or] [expression]
end define 

define and_or
	'&&
	| '||
end define

% Rules:
function main
    match [program]
	P[program]
end function