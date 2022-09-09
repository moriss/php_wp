This is an original variation to what is on the AtoZ.php file. Refer to AtoZ.php from now on.

<!DOCTYPE html>
<html>
 <head>
  <title>PHP Test</title>
 </head>
 <body>
 <h2>Get Data from forms</h2>
 <!--Very important that you use the post (rather than get) method. 
 get method shows details in the url = NOT GOOD-->
 <form action = "dashboard.php" method="POST">
 <input type= "text" name = "userId">
 <input type= "password" name = "password">
 <input type="submit" value="Log In">
 
 </form>
 
 <?php 
 
 #Quiz
 #################################
 #echo
 #print
 #print_r
 #concatination
 #variable
 #array (basic, Associative, multidimensional)
 #loops (while, for, do while)
 #for each loop
 #for each associative
 #functions
 #functions, passing values
 #forms
 
 #create a function
 
 
 
 function gro($one, $two){
 	return $one%$two;
 }
 echo gro(14,5);
 
 function gre($one, $two){
 	return $one*$two;
 }
 echo '<h1>the some of 20 times 5 is  ' . gre(5,10) .  '</h1>';
 
 
 
 echo "<br/>";
 echo "<br/>";
 echo "<br/>";
 echo "<br/>";
 
 
 
 function im($i,$j){
 	return $i * $j;
 }
 
 echo im(8,8);
 echo "<br/>";
 echo "functions";
 echo "<br/>";
 function rab(){
 echo "hello rab";
 }
 rab();
 
 echo '<ul>';
 $tos = array ( "French" => "Miss Ward", 
 		"germain" => "Miss Mcmillan",
 		"french" => "Miss henderson",
 		"greek" => "Miss Ward");
 		
 foreach ( $tos as $language => $teacher ){
   print "<li> $language Teacher= $teacher </li>";
 }
 echo '</ul>';
 
 
 $in = array ("pete ", " dave", " andy"  );
 foreach ($in as $inty){
 
  	print($inty);
 }
 
 
 $bind = array ("pete ", " dave", " andy");#Create an array

echo "<ul>";#start the unordered list
foreach($bind as $sind){ #Use $sind to ittirate through array values
 print("<li> $sind </li>"); #print out the values within a list
 }
 
 
 
 echo "<br/>";
 $i = 1;
 $g = 4;
 echo "do while";
 echo "<br/>";
 do
 {
 	print"hello ";
 	$i++;
 }
 while ( $i < $g);
 
 
 echo "<br/>";
 echo "for loop";
 echo "<br/>";
 $g = 4;
 for($i = 0; $i < $g; $i++)
 {
 	print"hello ";
 }
 
 
 echo "<br/>";
 echo "while loop";
 $i = 1;
 $g = 4;
 while ($i < $g)
 {
 	print('#' .$i );
 	print("#$i");
 	$i++;
 }
 
 
 
 
 echo "<hr/>";
 echo "Multidimentional array next";
 echo "<br/>";
 $ri = array (
 array (" userName  " => "jin  ", " passWord " => " ruby201 " ),
 array (" userName  " => " jon ", " passWord " => " rubix40 " )
 );
 print_r($ri);
 echo "<hr/>";
 
  
 
 echo "<br/>";
 echo "<br/>";
 echo "<br/>";
 echo "<br/>";
 #################################
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 //hello world
 echo '<p>Hello World</p>';
 echo "<br/>";
 echo '<p>Hello World</p>';
 
 #Quiz
 #################################
 #echo
 #print_r
 #concatination
 #variable
 #array (basic, named, multidimensional)
 #loops (while, for, do while)
 #for each loop
 #################################
 
 
 #concatination
 #$boss = 'Bos';
 #print_r  ( 'hello' .$boss );#no final period if nothing beyond
 #$hello = "hello all";
 #echo '<h1>' .$hello. '</h1>';//h1's the variable
 
 //BELOW IS A REFRESHER
 # Array
$may = array("hot "," cold"," warm"," freezing");
print_r ($may. '<h1> is the answer </h1>');
echo '<br/>';
print_r($may[0]);
# Associative array
echo '<br/>';
# Associative array
$jny = array ("one" =>"black ", " two" => " white");
print_r ($jny);
echo '<br/>';
print_r ($jny["one"]);

echo '<br/>';
//Multidimensional array
 
 $multi = array(
$first = array("hot "," cold"," warm"," freezing"),
$second = array("hot "," cold"," warm"," freezing")
  );
  print_r($multi);
echo '<br/>';
print_r ( 5);

echo "<br/>";
echo "hello";
echo "<br/>";

$hello = "hi";
print_r ($hello);
echo "<br/>";
#time for an array
$ray = array ('one','too','thtr','for');
print_r ($ray);
echo "<br/>";
#time for an associative array
$ass = array('stage one' => 'burp', 'stage two' =>'fart',
'stage three' => 'apologise');
print_r($ass);
echo "<br/>";
#contcatination
$trip = 8*8;
print('the answer to eight times eight is ' .$trip. ' not 9 ');
echo "<br/>";

#######################################################
#multidimensional and associative array

$nod = array(
array ('first_letter' =>'aa', 'second_letter' =>'bb', 
'third_letter' =>'cc' ),
array ('first_number' => 1, 'second_number' => 2, 
'third_number' => 3  )
);

print_r($nod);
echo "<br/>";
echo($nod);
echo "<br/>";
#a while loop please
echo 'while loop';
$low = 10;
$run = 0;
while ($run < $low){
print( ' ' .$run. ' ');
$run ++;
}




echo '<br/>';
echo '<br/>';
echo '<br/>';
echo '<br/>';
echo '<br/>';
echo '<br/>';
echo '<br/>';
#calculate 2 variables
$first = 9;
$second = 9;
$anser = $first * $second;
print_r($anser);
echo '<br/>';
print($anser);
echo '<br/>';
echo $anser;
echo '<br/>';
echo '<br/>';
echo '<br/>';
echo '<br/>';
echo '<br/>';
#create an array:
$mine = array('andrew', 'daveid', 'morris', 'peter');
print_r($mine);
#create an associative array
$mine = array('first'=>'andrew', 'second'=>'daveid', 'third'=>'morris', 'fourth'=>'peter');
print_r($mine);
#create a two dimensional array
$big = array (
array('username1'=>'david', 'password1'=>'bot30'),
array('username2'=>'andrew', 'password2'=>'bot65')
);
echo '<br/>';
echo '<br/>';
print_r( $big[1]  );//displays second array

echo '<br/>';
echo '<br/>';
#create a loop
$tank = 9;
$brink = 0;
while($brink < $tank)
{
  print_r( $brink);
  print_r( ' # ');
  
  $brink++;
}
echo '<br/>';
echo '<hr/>';
#while loop.
$once = 5;
$zeros = 0;
echo '<ul>';
echo '<br/>';

#While loop within an html list
while ($zeros < $once)
{
echo "<li> $zeros</li>";
     $zeros++;
}
echo '</ul>';
echo '<hr>';


echo '<br/>';
echo '<hr/>';
#for loop
for($i = 0 ; $i < $once; $i ++)
{
  print_r($i);
  echo '<br/>';
}
echo '<br/>';
echo '<hr/>';
#for loop with list
echo '<ul>';

for($i = 0; $i < 3; $i++)
{
  echo "<li> $i </li>";
}
echo '</ul>';
echo '<br/>';
echo '<hr/>';


#do while loop using a list
$x = 0;
$more = 10;
echo '<ul>';
do {
    echo "<li> $x </li>";//Executes at least once.
    $x++;
}
while ($x > $more);
echo '</ul>';

echo '<br/>';
echo '<hr/>';
#print out an array
$next = array ('hon ','blon ','con ');
foreach ( $next  as  $one  )
{
  echo $one;
}
echo '<br/>';
echo '<hr/>';
#do it this time within a list


#Quiz
 #################################
 #echo
 #print_r
 #variable
 #array
 #################################
 
 echo 'hello <br/>';#displays 'hello' with a line break.
 echo 4;#Displays the number 4
 echo '<br/>'; #a line break
 print_r ("name");#prints name onto the screen.
 $ones = 'tom';#A variable holding the value 'tom'
 
 #concatination
 print('<br/>' .$ones.'<br/>');//prints a variable with line breaks either side
 
 
 #array
 $point = array ('jon ' , 'andres ' ,  ' david' ,  ' peter' , ' iam' , ' lat' );
 print_r($point);#print_r gives you the array details
 echo '<br/>';
 
 
 #Associative array
 $point = array (' first' => 'adnre ' ,  'second ' => ' mak' , ' thrid' => ' ti' );
 #These are name and value pairs. ('first' => 'adnre')
 
 echo '<br/>';
 
 #multidimensional
 $mass = array (
 array ('username' => 'blink' , 'password' => 'boran45' ),
 array ('username' => 'vlink' , 'password' => 'grids45')
 );
 #arrays within an array
 print_r($mass);


echo '<br/>';


#loop time
$sim = 10;//variable set to 10
$slim = 0;//variable set to 0
echo '<ul>';//Start of unordered list
while ($slim < $sim)//Set the condition while slim is less than sim
{
	print('<li>' .$slim. '</li>');//keep printing while condition is true.
	$slim ++;//increment slim by 1 at each loop
}
echo '</ul>';#finish the uo list

echo '<br/>';
echo '<hr/>';#a rule right across the page

#for loop
echo '<ul>';
for ($i = 0; $i < $sim; $i++)//set i to zero, i less than sime, incriment i by 1
{
	print('<li>' .$i. '</li>');#value of i keeps printing while condition met
}
echo '</ul>';

echo '<br/>';
echo '<br/>';



echo 'do while';

echo '<br/>';
echo "<ul>";
$i = 0;
$sim = 0;
do{
	print("<li> $i  </li>");
	$i++;
}
while( $i < $sim );
echo "</ul>";


echo '<br/>';
echo "<br/>";

#for each as loop
$bind = array ("pete ", " dave", " andy");#Create an array

echo "<ul>";#start the unordered list
foreach($bind as $sind){ #Use $sind to ittirate through array values
 print("<li> $sind </li>"); #print out the values within a list
 }
echo "</ul>";#close the unordered list tag


echo '<br/>';
echo "<br/>";

#Associative array next
#1.43 in
#https://www.youtube.com/watch?v=KibbYf9avko&t=43s



#########################################################

 
 
 
 
 
 
 
#########################################################
 ?> 
 
  </body>
</html>





