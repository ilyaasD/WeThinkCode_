# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    gen_map.pl                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idocrat <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/20 11:21:42 by idocrat           #+#    #+#              #
#    Updated: 2016/04/20 16:29:40 by idocrat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl

use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
    for (my $j = 0; $j < $x; $j++) {
        if (int(rand($y) * 2) < $density) {
            print "o";
        }
        else {
            print ".";
        }
    }
    print "\n";
}
