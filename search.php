<?php
	//for dbconnect
	require "add_book.inc";
	
	//guy on internet says i need this
	error_reporting(E_ALL);
	ini_set('display_errors', 1);
	
	// put search value in variable
	if(isset($_POST['search'])) {
		$name = mysqli_real_escape_string($Connection, htmlspecialchars($_POST['search']));
		$sql = "SELECT title FROM books WHERE title LIKE '$name'";
	}
	$result = $Connection->query($sql);
		// select search value from db and put it in a variable
		$query = mysqli_query("SELECT title FROM books WHERE title LIKE '%$search%'") or die(mysqli_error($Connection));
		
		//check if rows are found 
		$count = mysqli_num_rows($query);
		if($count == 0) {
			$output = "No search results";
		}
		//output results of search
		else{
			while($row = mysqli_fetch_array($query)) {
				$title = $row ['title'];
				$output .='<div> '.$title.'</div>';
			}
		}
	}
	?>