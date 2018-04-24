<?php
	require "add_book.inc";
?>﻿

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
	
	<form name="register" action="create_account.php" method="POST">
		<p> Student ID: <input name="student_id" type="text" required="true" /></p>
		<p> First Name: <input name="fname" type="text" required="true" /></p>
		<p> Last Name: <input name="lname" type="text" required="true" /></p>
		<p> Phone: <input name="Phone" type="text" required="true" /></p>
		<p> Date of Birth: <input name="dob" type="date" required="true" /></p>
		<p> Academic Year: <input name="academic_year" type="text" required="true" /></p>
		<p> Email: <input name="email" type="text" required="true" /></p>
		<p>Username: <input name="username" type="text" required="true" /></p>
		<p> Password: <input name="password" type="text" required="true" /></p>
		<p><button type="submit">Create Account</button></p>
	</form>
	
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



<!--
<ul class="menu">
		<li><a href="index.php">Home</a></li>
		<li><a href="Browse.php">Browse</a></li>
		<li><a href="about_us.php">About</a></li>
		<li><a href="login.php">Login</a></li>
		<li><a href="register.php">Register</a></li>
		</ul>
-->
