// A general list of wp hooks/code with explanations

//Finds the route of your wp site
<?php echo get_template_directory_uri(); ?>
//So this would be how you display an image from your img folder
  <img src="<?php echo get_template_directory_uri(); ?>/logo.png" alt = "Grange Logo"/>
  
  // Resides in the header.php file. This grabs link code from the functions.php file relating to linking your css and javascript files to your wp site. 
  <?php wp_head();  /****/ ?>
  // It replaces all the link script from a typical static page for your css, js, font awsome and google fonts etc.
  //In addition, I think it also identifies the file as the header.php file
  
  // Resides at the bottom of the footer.php file and identifies it as such.
  <?php wp_footer(); ?>
  
  //Resides on the 'main' page you wish to header.php and footer.php code to be displayed.
  // Examples of 'main' page are index.php or front-page or subsequent pages of your choosing.
  //This embeds the header.php file into your wordpress page.
  <?php get_header(); ?>
  // This line of code goes wherever you want the header.php code to go
  // And below does exactly the same for the footer.php file
  <?php get_footer(); ?>

  
<img src="<?php echo get_the_post_thumbnail_url('get_the_ID'); ?>" //Gets your thumbnail image
<?php echo wp_trim_words(get_the_excerpt(), 30); ?>//Trims the excerpt to 30 words

wp_enqueue_style(... // In place of having <link> tags for linking stylesheets in the head section of a static page.
                // the enqueue code is placed in the functions.php file.

wp_enqueue_script(... // In place of having <script> tags for linking stylesheets to the head section of a static page
                  // the enqueue code is placed in the functions.php file.
