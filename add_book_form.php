<?php
    // require the include file
    //      it better to use the .inc file extension here.
    //      this way the file can't be accessed by a web
    //      client.
    require "add_book.inc";
?>
<!DOCTYPE html>
<html>
<!-- header -->
<head>
    <meta charset="UTF-8">
	<link href="libraryStyle.css" type="text/css" rel="stylesheet">
 
<title> Library management website </title>
</head>
	<div class="body">
<body>

	<div class="header">
		<h1>Library Management System</h1>
	</div>
    <!-- main section used for formatting -->
    <section class="main">
        <!-- section that contains the data -->
        <section class="background left-column">
            <?php
                // write out the team table
                //ReadBooks();
            ?>
        </section>

        <!-- section that will include the form -->
        <section class="background right-column">
            <h2>Add Another Book or Search Books</h2>

        <!--Navigation Menu -->
	<div class="sidenav">
	<a href="index.html">Home</a>
	<a href="browse.php">Browse</a>
	<a href="about_us.html">About</a>
	<a href="register.php">Register</a>
	<a href="add_book_form.php">Librarian Access</a>

	</div>

            <!-- add the form code starting here -->
            <form name="data-input" action="add_book_insert.php" method="POST">
                <p>Book ID: <input name="book_id" type="integer" required="true" /></p>
                <p>ISBN: <input name="isbn" type="text" required="true" /></p>
                <p>Publisher: <input name="publisher" type="text" required="true" /></p>
                <p>Status:
                    <br />
                    <input name="status" type="radio" required="true" value="in">In</input>
                    <br />
                    <input name="status" type="radio" required="true" value="out">Out</input>
                </p>
                <p>Title: <input name="title" type="text" required="true" /></p>
                <p>Year Published: <input name="year_published" type="date" required="true" /></p>
                <p><button type="submit">Insert Data</button></p>
            </form>

            <h2>Search Books</h2>

            <!-- add the form code starting here -->
            <form name="data-input" action="title_search_complete_lib.php" method="POST">
                <p>Title: <input name="title" type="text" required="true" /></p>
                <p><button type="submit">Search Title</button></p>
            </form>

            <!-- add the form code starting here -->
            <form name="data-input" action="author_search_complete_lib.php" method="POST">
                <p>Author Last Name: <input name="author" type="text" required="true" /></p>
                <p><button type="submit">Search Author</button></p>
            </form>

        </section>
    </section>
<!--Footer-->
	<div class=\"footer\">
		<p>Comp305 - Database Application Development. </p>
	</div>
</body>
</html>    

