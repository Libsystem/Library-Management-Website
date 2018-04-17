<?php
    require "add_book.inc";
?>

<!-- header -->
<head>
	<link href="libraryStyle.css" type="text/css" rel="stylesheet">
 
<title> Library management website </title>
</head>
        <div class = "body">
<body>
        <div class="header">
		<h1>Library Management System</h1>
	</div>

<?php
    // call the insert function
    CreateAccount();
?>
<!--Navigation Menu -->
	<div class="sidenav">
	<a href="index.html">Home</a>
	<a href="browse.php">Browse</a>
	<a href="about_us.html">About</a>
	<a href="register.php">Register</a>
	<a href="add_book_form.php">Librarian Access</a>

	</div>
<a href="add_book_form.php">Return to Main Page</a>
<!--Footer-->
	<div class=\"footer\">
		<p>Comp305 - Database Application Development. </p>
	</div>
        </div>
</body>
