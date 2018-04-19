<?php
	require "add_book.inc";
?>
<!DOCTYPE html>
<html>

<!-- header -->
<head>
	<link href="libraryStyle.css" type="text/css" rel="stylesheet">
 
<title> Library management website </title>
</head>
	<div class="body">
<body>
	
	<div class="header">
		<h1>Library Management System</h1>
        </div>

        <h2>Search Books</h2>
	
        <!-- add the form code starting here -->
		<fieldset>
            <form name="data-input" action="title_search_complete.php" method="POST">
                <p>Title: <input name="title" type="text" required="true" /></p>
                <p><button type="submit">Search Title</button></p>
            </form>
		</fieldset>
        <!-- add the form code starting here -->
		<fieldset>
            <form name="data-input" action="author_search_complete.php" method="POST">
                <p>Author Last Name: <input name="author" type="text" required="true" /></p>
                <p><button type="submit">Search Author</button></p>
            </form>
		</fieldset>

	<!-- add the form code starting here -->
		<fieldset>
		<form name="data-input" action="genre_search_complete.php" method="POST">
			<p>Genre: <select>
				<option value="sciencefiction">Science Fiction</option></p>
				<option value="drama">Drama</option></p>
				<option value="actionadventure">Action/Adventure</option></p>
				<option value="mystery">Mystery</option></p>
				<option value="romance">Romance</option></p>
				</select>
			<p><button type="submit">Search Genre</button></p>
		</form>
		</fieldset>
	<div>
	<?php
		ReadBooks();
	?>
<!--Navigation Menu -->
	<div class="sidenav">
	<a href="index.html">Home</a>
	<a href="browse.php">Browse</a>
	<a href="about_us.html">About</a>
	<a href="register.php">Register</a>
	<a href="add_book_form.php">Librarian Access</a>
	</div>

<!--Footer-->
	<div class=\"footer\">
		<p>Comp305 - Database Application Development. </p>
	</div>
</body>
</html>

