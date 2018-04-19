<?php

// connect to the database
function DatabaseConnect()
{
    // set the connection information
    //      willy is the server name on the penguin network
    //      set the UserName and Password to your credentials
    //      set the Database to your database (you mysql UserName)
    $Server = "penguin";
    $UserName = "COMP305Library";
    $Password = "Temp!Library";
    $Database = "COMP305Library";

    // connect to the database
    //      create a new instance of a mysqli object. this
    //      object contains the connection to the mysql server
    $Connection = new mysqli( $Server, $UserName, $Password, $Database );

    // check for a successful connection
    //      connect_error will evaluate to true if there is an error
    if ( $Connection->connect_error )
    {
        // stop the script and echo an error message
        echo "<h2>Database Error</h2>\n";
        die( "<p>MySQLi Connection Error: ".$Connection->connect_error."</p>\n" );
    }

    // return the connection
    return $Connection;
    
}


    // insert data
function SearchBookTitle()
{
    // connect to the database
    $Connection = DatabaseConnect();
    // check to see if something was send via POST
    if ( isset( $_POST["title"] ))
    {
        // loop through the post data
        //      foreach will loop through associative arrays.
        //      the $Key => $Value expression is how you
        //      get the key and value pairs from an associative
        //      array. for example, if $_POST["first-name"] = "Bill"
        //      $Key will be set to "first-name" and $Value will be
        //      set to "Bill".
        foreach( $_POST as $Key => $Value )
        {
            // echo out the result
            echo "<p>".$Key.": ".$Value."</p>\n";
        }
       
    }
    else
    {
        // no post data notify the user
        echo "<p>Nothing to insert</p>\n";
    }
        // build the insert sql
    $SQL = "select book_id, isbn, publisher, status, title, year_published from books where title LIKE ";
    $SQL .= "\"".$_POST['title']."\"";
    $SQL .= ";";


    // execute the insert
    $Results = $Connection->query( $SQL );

    // check for results
    //      $Results will evaluate to true if there data is returned
    //      from the database, false if no data is returned
    if ( $Results )
    {
        // start the table HTML
        echo "<table>\n";

        // add the HTML for a table header row
        echo "   <thead>\n";
        echo "      <th>Book ID</th>\n";
        echo "      <th>ISBN</th>\n";
        echo "      <th>Publisher</th>\n";
        echo "      <th>Status</th>\n";
        echo "      <th>Title</th>\n";
        echo "      <th>Year Published</th>\n";
        echo "   </thead>\n";

        // loop through the results
        //      the fecth_row method returns an array of the column
        //      data - one item in the array for each column in the
        //      select statement.
        //
        //      the statement in the while will evaluate to false when
        //      there are no more rows
        while( $Row = $Results->fetch_row() )
        {
            // add  table row
            echo "   <tr>\n";

            // loop through the items in the array
            //      the count function returns the number of items
            //      in the array.
            for( $i=0; $i<count($Row); $i++ )
            {
                // center align the first cell on each row
                if (( $i == 0 ) || ( $i == 1 ) || ( $i == 4 ))
                {
                    // add a centered cell
                    echo "     <td class=\"centered\">";
                }
                else
                {
                    // add left justified cell
                    echo "     <td>";
                }

                // add the rest of the cell
                echo $Row[$i]."</td>\n";
            }

            // end of the table row
            echo "   </tr>\n";
        }
        
        // stop the table HTML
        echo "</table>\n";
    }
    else
    {
        // no results returned
        echo "<p>No results returned from the query</p>\n";
    }

    // close the connection
    $Connection->close();
}













function SearchBookGenre()
{
    // connect to the database
    $Connection = DatabaseConnect();
    // check to see if something was send via POST
    if ( isset( $_POST["genre"] ))
    {
        // loop through the post data
        //      foreach will loop through associative arrays.
        //      the $Key => $Value expression is how you
        //      get the key and value pairs from an associative
        //      array. for example, if $_POST["first-name"] = "Bill"
        //      $Key will be set to "first-name" and $Value will be
        //      set to "Bill".
        foreach( $_POST as $Key => $Value )
        {
            // echo out the result
            echo "<p>".$Key.": ".$Value."</p>\n";
        }
       
    }
    else
    {
        // no post data notify the user
    }
        // build the insert sql
    $SQL = "select book_id, isbn, publisher, status, title, year_published from books where genre LIKE ";
    $SQL .= "\"".$_POST['genre']."\"";
    $SQL .= ";";


    // execute the insert
    $Results = $Connection->query( $SQL );

    // check for results
    //      $Results will evaluate to true if there data is returned
    //      from the database, false if no data is returned
    if ( $Results )
    {
        // start the table HTML
        echo "<table>\n";

        // add the HTML for a table header row
        echo "   <thead>\n";
        echo "      <th>Book ID</th>\n";
        echo "      <th>ISBN</th>\n";
        echo "      <th>Publisher</th>\n";
        echo "      <th>Status</th>\n";
        echo "      <th>Title</th>\n";
        echo "      <th>Year Published</th>\n";
        echo "   </thead>\n";

        // loop through the results
        //      the fecth_row method returns an array of the column
        //      data - one item in the array for each column in the
        //      select statement.
        //
        //      the statement in the while will evaluate to false when
        //      there are no more rows
        while( $Row = $Results->fetch_row() )
        {
            // add  table row
            echo "   <tr>\n";

            // loop through the items in the array
            //      the count function returns the number of items
            //      in the array.
            for( $i=0; $i<count($Row); $i++ )
            {
                // center align the first cell on each row
                if (( $i == 0 ) || ( $i == 1 ) || ( $i == 4 ))
                {
                    // add a centered cell
                    echo "     <td class=\"centered\">";
                }
                else
                {
                    // add left justified cell
                    echo "     <td>";
                }

                // add the rest of the cell
                echo $Row[$i]."</td>\n";
            }

            // end of the table row
            echo "   </tr>\n";
        }
        
        // stop the table HTML
        echo "</table>\n";
    }
    else
    {
        // no results returned
        echo "<p>No results returned from the query</p>\n";
    }

    // close the connection
    $Connection->close();
}


    // insert data
function SearchBookAuthor()
{
    // connect to the database
    $Connection = DatabaseConnect();
    // check to see if something was send via POST
    if ( isset( $_POST["author"] ))
    {
        // loop through the post data
        //      foreach will loop through associative arrays.
        //      the $Key => $Value expression is how you
        //      get the key and value pairs from an associative
        //      array. for example, if $_POST["first-name"] = "Bill"
        //      $Key will be set to "first-name" and $Value will be
        //      set to "Bill".
        foreach( $_POST as $Key => $Value )
        {
            // echo out the result
            echo "<p>".$Key.": ".$Value."</p>\n";
        }
       
    }
    else
    {
        // no post data notify the user
        echo "<p>Nothing to insert</p>\n";
    }
        // build the insert sql
    $SQL = "select b.book_id, isbn, publisher, status, title, year_published from books b join author_contributions ON (b.book_id=author_contributions.book_id) join authors ON (author_contributions.author_id=authors.author_id) where authors.lname =";
    $SQL .= "\"".$_POST['author']."\"";
    $SQL .= ";";

    // execute the insert
    $Results = $Connection->query( $SQL );

    // check for results
    //      $Results will evaluate to true if there data is returned
    //      from the database, false if no data is returned
    if ( $Results )
    {
        // start the table HTML
        echo "<table>\n";

        // add the HTML for a table header row
        echo "   <thead>\n";
        echo "      <th>Book ID</th>\n";
        echo "      <th>ISBN</th>\n";
        echo "      <th>Publisher</th>\n";
        echo "      <th>Status</th>\n";
        echo "      <th>Title</th>\n";
        echo "      <th>Year Published</th>\n";
        echo "   </thead>\n";

        // loop through the results
        //      the fecth_row method returns an array of the column
        //      data - one item in the array for each column in the
        //      select statement.
        //
        //      the statement in the while will evaluate to false when
        //      there are no more rows
        while( $Row = $Results->fetch_row() )
        {
            // add  table row
            echo "   <tr>\n";

            // loop through the items in the array
            //      the count function returns the number of items
            //      in the array.
            for( $i=0; $i<count($Row); $i++ )
            {
                // center align the first cell on each row
                if (( $i == 0 ) || ( $i == 1 ) || ( $i == 4 ))
                {
                    // add a centered cell
                    echo "     <td class=\"centered\">";
                }
                else
                {
                    // add left justified cell
                    echo "     <td>";
                }

                // add the rest of the cell
                echo $Row[$i]."</td>\n";
            }

            // end of the table row
            echo "   </tr>\n";
        }
        
        // stop the table HTML
        echo "</table>\n";
    }
    else
    {
        // no results returned
        echo "<p>No results returned from the query</p>\n";
    }

    // close the connection
    $Connection->close();
}

?>
