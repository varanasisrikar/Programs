<!DOCTYPE html>
<html>
<body>
<?php
// Function to merge array in sorted order
function sortedMerge($a, $b, $n, $m)
{
 // Concatenate two arrays
 $res = array();
 $i = 0; $j = 0; $k = 0;
 while ($i < $n)
 {
 $res[$k] = $a[$i];
 $i += 1;
 $k += 1;
 }
 while ($j < $m)
 {
 $res[$k] = $b[$j];
 $j += 1;
 $k += 1;
 }
 // sorting the res array in descending order
 rsort($res);
 echo "Sorted merged list :";
echo "<br>" ;

 for ($i = 0; $i < count($res); $i++) 

 echo "index"."[".$i."]"."->".$res[$i] . "<br> ";
}

// Driver code
$a = array( 10, 5, 15 );
$b = array( 20, 3, 2, 12 );
$n = count($a);
$m = count($b);

// Final merge list

sortedMerge($a, $b, $n, $m);

?> 
</body>
</html>