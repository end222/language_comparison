#!/usr/bin/ruby

#
# N Queens problem solved by backtrack algorithm
# By end222
#

@solutions = 0

def list_result(vector, num)
	i = 0
	@solutions += 1
	while i < num
		position = vector[i]
		print "-" * (position-1)
		print "#"
		puts "-" * (num-position)
		i += 1
	end
	puts
end

def solve(vector, row, num)
	i = 1
	j = 0
	while i <= num
		not_here = false
		while (!not_here && j < row)
			not_here = (vector[j] == i) || (vector[j] - (j + 1)) == (i - (row + 1)) || (vector[j] + (j + 1) == (i + (row + 1)))
			j += 1
		end
		if !not_here
			vector[row] = i
			if row < num-1
				solve(vector, row+1, num)
			else
				list_result(vector, num)
			end
		end
		i += 1
		j = 0
		not_here = false
	end
end

num = gets.chomp.to_i
start = Time.now
vector = []
i = 0
while i < num
	vector << 0
	i += 1
end
solve(vector, 0, num)
puts "#{@solutions} solutions"
endtime = Time.now
puts "#{endtime - start}"
