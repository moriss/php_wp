Contents:
css file,  index.php file, Header file, 

css file
css file Initial contents
################
/**
Theme: GTCoding
Author: Maurizio Marrocco
Author URI:
Description:The official theme for GTCoding
Version: 1
**/
###############


index.php file
index.php initial contents
################
<?php get_header();?>
<h1>Hi from index.php</h1>
<?php get_footer();?>
//Wp specific functions to insert above code into the index.php (or any other) file.
#################


Header file
Header file name: header.php
Header file code
################
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <title>GTCoding</title>
    <script src="script.js" defer></script>
  </head>
  <body>
    <header>
    <h1>Header</h1>
    </header>   
    #################
    
    
    
Footer file
Footer filename: footer.php
Footer file code
#####################
    <footer>
      <p>Foooter goes here</p>
    </footer>
</body>
</html>
#########################


