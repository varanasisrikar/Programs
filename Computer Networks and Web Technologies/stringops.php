<!DOCTYPE html>
<html>
<body>
<?php
$x="keshav memorial institute of technology";
$searchword="memorial";
echo "String length is :"."&nbsp&nbsp".strlen($x);
echo "<br><br>";
echo "No.of words:" ."&nbsp&nbsp".str_word_count($x);
echo "<br><br>";
echo "Reverse String is:" . "&nbsp&nbsp".strrev($x);
echo "<br><br>";
//Search for a specific string
if(strpos($x, $searchword) !== false)
{
 echo "Word Found!";
}
else
{
 echo "Word Not Found!";
}
echo "<br><br>";
//finding string location
echo "String located at:"."&nbsp&nbsp".strpos($x, $searchword);
?>
</body>
</html>