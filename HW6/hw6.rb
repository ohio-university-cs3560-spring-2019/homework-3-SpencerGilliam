# Spencer Gilliam
# CS 3560
# Professor Mourning
# 02/24/2019


string = gets	          	           #reads in string		
string = string.gsub(/\b[fF]/, "gh") #changes beginning F chars with gh
string = string.gsub(/sh\b/, "ti")	 #changes sh chars with ti
string = string.gsub(/\Bi\B/, "o")	 #changes i chars with o
puts string	
