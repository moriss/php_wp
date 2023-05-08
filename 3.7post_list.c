//The below code sits (usually) between the header and footer hooks on the page you wish to display your list of posts.
//First block of code is for the defaults 'post' list in admin. It simply lists the posts as is. 
//The second block of code has variables, variables with arrays and custome queries giving you more control over what is displayed, including a different list of posts altogether.

//First block of code
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
//a) Post list has: while have posts, the post, the title, the excerpt
//for this, function.php requires:  add theme support, post thumbnails, title tag, html5(for comment list, comment-form and search form)
//And  add_action





//or
// $1 post type, posts per page),  $2 WP Query($1),  while h$ ave posts,   $ the post,   permalink,  title,  excerpt



//Second block of code
//This next block allows for wordpress customised queries including choice of posts to be displayed, (post type) , and number of posts per page (posts per page) 
//
<?php  
  $args = array( //Create a variable with an associative array that points to the 'project' post type you created
 	 'post_type'  => 'project' //associative array declaring which post to display
	 'posts_per_page' => 2, // How many posts per page should be displayed
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

			

//Third block of code
//This is a live example of how you added the post list to the grange website's front page. You will notice that the while loop's closing curly brace is just after  'the_post' . Then only after this do you have various custom queries such as: permalink. get_the_post_thumbnail,  the_title(); trim_words.
			
			
$args = array( //Create a variable with an associative array that points to the 'project' post type you created
 	 'post_type'  => 'project', //associative array declaring which post to display ALTHOUGH THE FRONT PAGE IS ALSO SHOWING POST'S POSTS?
	 'posts_per_page' => 2 // How many posts per page should be displayed
 );
 $blogposts = new WP_Query($args);

	while($blogposts -> have_posts()) {  //The condition of the while loop is that posts exist.
	      $blogposts -> the_post(); //For now, I'm labelling this a 'gateway' -as such- into out-putting below.
   //You need to close the php environment to allow the html h3 tags to work. 
   }
		?>
            <div class="card">
                <div class="card-image">
                    <a href="<?php the_permalink(); ?>" >
                        <img src="<?php echo get_the_post_thumbnail_url('get_the_ID'); ?>"
                    </a>
                </div>
                <div class="card-description">
                    <a href="<?php the_permalink() ?> ">
					<h3> <?php the_title(); ?> </h3>
						</a>
