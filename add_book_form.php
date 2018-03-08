<?php
    // require the include file
    //      it better to use the .inc file extension here.
    //      this way the file can't be accessed by a web
    //      client.
    require "add_book.inc";
?>
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Librarian Access</title>
    <link href="Lab.15.css" type="text/css" rel="Stylesheet" />
</head>
<body>
    <h1>Insert New Books</h2>
    
    <!-- main section used for formatting -->
    <section class="main">
        <!-- section that contains the data -->
        <section class="background left-column">
            <h2>Books in the Library</h2>
            <?php
                // write out the team table
                ReadBooks();
            ?>
        </section>

        <!-- section that will include the form -->
        <section class="background right-column">
            <h2>Add Another Book</h2>

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

        </section>
    </section>
</body>
</html>    

