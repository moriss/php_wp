// This shows the code for setting up the initial wordpress files for your theme. 

//Contents:
//css file [intro contents] ,   get_header /get_footer ,    header.php file ,  footer.php file ,  js file ,  functions.php file ,  Blog Post index page 

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





//get_header /get_footer
//For index.php, front page or any other page you want the header and footer files to load.

################
<?php get_header();?>
//main content
<?php get_footer();?>
<!--////Wp specific functions to insert above code into the index.php (or any other) file. -->
#################






//Header.php file
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
    
	
	
	
    
    
//Footer.php file
//Footer filename: footer.php
//Footer file code
#####################
    <footer>
      <p>Foooter goes here</p>
    </footer>
    <?php wp_footer();  ?> <!--//A wordpress hook -->
    
</body>
</html>
#########################



.js
##################
alert("hello from the js file"); //To test the js file is linking properly to your theme
#################




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



//Adding theme support for adding blog post thumbnails to our posts.

function gt_init() {
	add_theme_support('post-thumbnails');
	add_theme_support('title-tag');
	add_theme_support('html5', 
array('comment-list' , 'comment-form' , 'search-form')
); 
//The array displays where html5 is to be implemented.
}
add_action('after_setup_theme', 'gt_init');


//Projects Post Type
//Your newly created custom post type called Projects as per https://www.youtube.com/watch?v=KibbYf9avko&t=43s     2.32 in
function gt_custom_post_type(){
	//register_post_type creates a new menu item in admin and allows you to create multiple projects as required. 
	register_post_type('project' , // A value within "register_post_type" parameters
	array(//An array within "register_post_type" parameters
			'rewrite' => array('slug' => 'projects'),//slug is the part of your URL that you can edit when writing or editing a post
			'labels' => array(//Lables (Names) for each following item.
									'name' => 'Projects' , //Name of the item on the admin menu
									'singular_name' => 'Project' ,
									'add_new_item' => 'Add New Project' ,
									'edit_item' => 'Edit Project'
									) ,
									
			'menu-icon' => 'dashicons-clipboard' ,//add an icon for our post type (found at developer.wordpress.org  put dashicons into the searchbar to search through the different icons.
			'public' => true, //Make this custom post type public. This can be kept private ie if it is only for admin.
			'has_archive' => true,//Allows you to filter by date, author, categories etc
			'supports' => array(//What should be supported by this custom post type. (Items it will enable)
			'title' , 'thumbnail' , 'editor' , 'excerpt' , 'comments'
			)
		) 
);
}//function end
add_action('init' , 'gt_custom_post_type'); //final step is to add an action to run this function

?>
######################

	
	
// Blog Post index page
//A list of your post's titles
<?php  

	while(have_posts()){  //The condition of the while loop is that posts exist.
		the_post(); //For now, I'm labelling this a 'gateway' -as such- into out-putting below.
  ?>//You need to close the php environment to allow the html h3 tags to work.  

		<h3><?php the_title(); ?> </h3> //The h3 tags include embeded php code to output the post's titles
		
		<?php  //Amazingly, you need to open and close the php to accomodate the last curly brace to end the function.
			}
		?>


