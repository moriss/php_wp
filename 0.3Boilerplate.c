//Contents:
//css file,  index.php file, Header file, 

//css file
//css file Initial contents
################
/**
Theme: GTCoding
Author: Maurizio Marrocco
Author URI:
Description:The official theme for GTCoding
Version: 1
**/
###############


//index.php file
//index.php initial contents
################
<?php get_header();?>
<h1>Hi from index.php</h1>
<?php get_footer();?>
//Wp specific functions to insert above code into the index.php (or any other) file.
#################


//Header file
//Header file name: header.php (For the purposes of wordpress, it needs to be this specific name)
//Header file code
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


functions.php
######################
<?php

//adding the css and js files

function gt_setup(){
	wp_enqueue_style('style', get_stylesheet_uri(), NULL,  microtime(), all() );
	//parameter inputes:
	//(Name of css file, file destination, No dependencies in our css file,  Auto updates file after changes, device types supported)
	

	wp_enqueue_script("main", get_theme_file_uri(js/main.js),  NULL,  microtime(),  true);
	//parameter inputs explanation for adding css and js files to your theme.
	//($handle:filename , $src:file destination/location ,  $deps, Whether there are any depencencies ,  $ver:version[mocrotime updates after any changes] ,  $in_footer:Whether placed in footer)
}
?>
######################


