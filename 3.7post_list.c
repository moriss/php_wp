//The below code sits between the header and footer hooks on the index page.
//First block of code is for the defaults 'post' list in admin. 
<?php  
	while(have_posts()) {  //The condition of the while loop is that posts exist.
			the_post(); //For now, I'm labelling this a 'gateway' -as such- into out-putting below.
   //You need to close the php environment to allow the html h3 tags to work. ?>
   
   <a href="<?php the_permalink(); ?>" >

		<h3><?php the_title(); //The h3 tags include embeded php code to output the post's titles?> </h3> </a>
		<?php the_excerpt(); // The excerpt displays a short excerpt of the post.?>  
		
		<?php  //Amazingly, you need to open and close the php to accomodate the last curly brace to end the function.
			}
		?>






//This next block is for a newly created 'Project' I happen to call 'projects' that can also have posts written for it. 
<?php  
  $args = array( //Create a variable with an associative array that points to the 'project' post type you created
 	 'post_type'  => 'project' //associative array
 );
 
 $blogposts = new WP_Query($args);

	while($blogposts -> have_posts()) {  //The condition of the while loop is that posts exist.
			$blogposts -> the_post(); //For now, I'm labelling this a 'gateway' -as such- into out-putting below.
   //You need to close the php environment to allow the html h3 tags to work. ?>
   
   <a href="<?php the_permalink(); ?>" >

		<h3><?php the_title(); //The h3 tags include embeded php code to output the post's titles?> </h3> </a>
		<?php the_excerpt(); // The excerpt displays a short excerpt of the post.?>  
		
		<?php  //Amazingly, you need to open and close the php to accomodate the last curly brace to end the function.
			}
		?>
