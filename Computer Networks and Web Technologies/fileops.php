<?php
$f = file_get_contents("all.txt");
/*explode() function splits a string based on a string
delimeter, i.e. it splits the string wherever the delimeter
character occurs. This functions returns an array containing
the strings formed by splitting the original string.
*/
$f = explode(", ", $f);
function modFile($pos, $tothis, $inthis)
{
  foreach($inthis as $pos => $a)
{
}
$newarr = implode("\r\n", $inthis);
/*The implode function in PHP is used to "join elements of
an array with a string". The implode() function returns
a string from elements of an array.
It takes an array of strings and joins them together
into one string using a delimiter
(string to be used between the pieces) of your choice.
*/
$fh = fopen("example.txt", "w"); 
fwrite($fh, $newarr);
fclose($fh);
}
modFile(4, '', $f);
echo " data is available in new file or existed file";
?>