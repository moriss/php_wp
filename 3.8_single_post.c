<?php get_header(); ?>

<h1>either single.php, singular.php  or  index.php </h1>

<?php
	while(have_posts()) {  //NB have_posts require comments
		
		the_post();
?>
		<h2> <?php the_title();?> </h2>
		
		Posted by <?php the_author(); ?>
		
		<img src= "<?php echo get_the_post_thumbnail_url(get_the_ID()); ?>" />
		
		<?php the_content(); 
		      'the_comment_form()'; 

		 } 	?>

<?php get_footer(); ?>
