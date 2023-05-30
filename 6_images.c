//This code is more speific to images

//Adding a logo to the header.php file
<img src="<?php echo get_template_directory_uri(); ?>/img/logo.png" alt="grange">
//The first part   get_template_directory_uri();   goes to the route folder of your wordpress site. 


<img src="<?php echo get_the_post_thumbnail_url('get_the_ID'); ?>" //Gets your thumbnail image

//A link around a thumbnail
<a href="<?php the_permalink(); ?>" >
<img src="<?php echo get_the_post_thumbnail_url('get_the_ID'); ?>"
</a>
