Code based on this course:  https://www.youtube.com/watch?v=KibbYf9avko&t=43s

<?php
#https://www.youtube.com/watch?v=KibbYf9avko&t=5076s
#how far in are you?
#1.29.12

#CONTENTS
#string variables, #number variables, #echo, #html tags   #single quotes,  
#concatination #conditional statements #boolean,  #arrays  ,    #printing methods STOPPED HERE,
#access index value of array. #associative array

#work area################################# 1.30.13 in 7 June 22
echo "<br/>";echo "<br/>";echo "<br/>";
echo "<h1>Work area###</h1> <br/>";
##Log in message
$loggin = true;
if($loggin == true) {
	echo "<h1> Welcom </h1>";
}else {
	echo "<h2>Please log in </h2>";
}
##
##
echo "<br/>";
echo "<h2>End of work area###</h2>";


echo "<br/>";echo "<br/>";echo "<br/>";
###########################################




$name = "John";
echo "7  <br/>"; 
echo $name;
echo "<br/> Hello";
echo "<h1>My name is $name </h1>"; 


#html tags
echo "<br/> <h1>Line break</h1>" ;
$num1  = 7;
$num2 = 8;
$answer = $num1 + $num2;

echo "<h1> $answer </h1>";

#single quotes
echo 'morris $answer'; echo "<br/>";
#single quotes turn a variable into a string
#concatination
#concatination solves this problem
echo '<p> The answer is '   .$answer.  '.</p>';



#conditinal statements
$logIn = false; #a boolean variable that gives true or false only.
if($logIn == true) {
	echo "<h3>true</h3>";
}
else {echo 8;}

echo("<br/> <br/>");
#arrays
$javascript = array("React", "Vue", "Angular");

#printing methods
print_r ($javascript); echo(" THIS IS print_r ");
echo("<br/> <br/>");
var_dump ($javascript); echo(" THIS IS var_dump , gives more detailed information");
echo "<br/> <br/> <h1> just above here!</h1>";

echo("<br/> <br/>");
#access index value of array
echo "$javascript[0]";
echo("<br/> <br/>");
#associative array
$assoc = array("Morris" => "dad", "helen" => "mum", "Dani" => "daughter");
echo("<br/> <br/>");
var_dump($assoc);

echo("<br/> <br/>");
#retrieve a value from an associative array
echo '<h3>' . $assoc["Morris"] . '</h3>';



 ?>
 <!----method of "post" is secure. "get" is not. (data added to visible url) ---->
 #forms (html)
 <h2>forms</h2>
 <form action="dashboard.php" method="post"> 
<input type="text" name="useid">
<input type="password" name="password">
<input type="submit" value="login">
</form>
  

