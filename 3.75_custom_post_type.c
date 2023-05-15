//register_post_type creates a new menu item in admin and allows you to create multiple projects as required. 
	//slug is the part of your URL that you can edit when writing or editing a post
	//Lables (Names) for each following item.
	//name = Name of the item on the admin menu
	//menu icon : add an icon for our post type (found at developer.wordpress.org  put dashicons into the searchbar to search through the different icons.
	//'public' Make this custom post type public. This can be kept private ie if it is only for admin.
	//'has_archive' Allows you to filter by date, author, categories etc
	// 'supports' What should be supported by this custom post type. (Items it will enable)
function gr_custom_post_type(){
	register_post_type('project', 
			    array('rewrite' => array('slug' => 'projects'),
			   'labels' => array('name' => 'Projects' , 'singular_name' => 'Project' , 
			   'add_new_item' => 'Add New Project' ,
			   'edit_item' => 'Edit Project'
			          	     ) ,
			   'menu-icon' => 'dashicons-clipboard' ,
			   'public' => true, 'has_archive' => true, 
			   'supports' => array('title' , 'thumbnail' , 'editor' , 'excerpt' , 'comments')
			  )			  
			   );
			      }//function end
add_action('init' , 'gr_custom_post_type'); //final step is to add an action to run this function
?>
