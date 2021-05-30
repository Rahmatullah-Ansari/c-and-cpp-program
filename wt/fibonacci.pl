#!usr/bin/local/perl
print("Enter the number of term to generate fibonacci series:");
$num=<>;
$a= 0;
$b= 1;
print("The fibonacci series:\n"); 
for ( $i = 0 ; $i < $num; $i++ )
{
if($i<= 1 )
{
$temp=$i;
}
else
{
$temp = $a+ $b;
$a= $b;
$b = $temp;
}
print("$temp\n");
}