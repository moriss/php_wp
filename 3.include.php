#below is the header code to be included on the index.php file
<!DOCTYPE html>
<html>
<head>
	<title>GTCoding </title>
	<link rel="stylesheet" type="text/css" href="style.css">

</head>
<body>
	<header>
		<h1>GT Coding, Learn Coding simple and fast!</h1>
		<ul>
			<li><a href="index.php" >Page 1</a></li>
			<li><a href="page2.php" >Page 2</a></li>
		</ul>
	</header>
  
  
  
  #below is the footer code to be included on the index.php file and other appropriate pages throughout your website.
  <footer>
		<p>This website was created by GTCoding</p>
	</footer>
  
  And this is how to include it in the index.php file
  <?php include "header.php";?>
	
	<?php include "footer.php";?>
