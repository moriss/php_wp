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
<!--////Wp specific functions to insert above code into the index.php (or any other) file. -->
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
    <?php wp_head();  ?>  <!--//A wordpress hook -->
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
    <?php wp_footer();  ?> <!--//A wordpress hook -->
    
</body>
</html>
#########################


functions.php
######################
<?php

//adding the css and  js files as well as google fonts and font-awesome

function gt_setup(){
	//Below is for google fonts
	wp_enqueue_style('google_fonts', '//fonts.googleapis.com/css2?family=Roboto+Condensed:ital,wght@1,300&family=Roboto+Slab:wght@300&family=Roboto:wght@300&display=swap"');
	
	//Below is for font-awesome
	wp_enqueue_style('font_awsome' , '//netdna.bootstrapcdn.com/font-awesome/3.2.1/css/font-awesome.css"');
	
	//Below is to link your stylesheet
	wp_enqueue_style('style', get_stylesheet_uri(), NULL,  microtime(), 'all');
	//parameter inputes:
	//(Name of css file,    file destination, No dependencies in our css file,  Auto updates file after changes, device types supported)
	
	
	//Below is to link your javascript file	
	wp_enqueue_script("main", get_theme_file_uri('js/main.js'),  NULL,  microtime(),  true);
	//parameter inputes:
	//(filename $handle,  file destination get_theme_file_uri(js/main.js) $src,  dependencies $deps,  version[Auto updates after changes] $ver,  Whether placed in footer] $in_footer))
}

//Below refers to the function above named 'gt_setup'
//Parameter 1 = when the function should be executed
//parameter 2 = The name of the function
add_action('wp_enqueue_scripts', 'gt_setup');


?>
######################


