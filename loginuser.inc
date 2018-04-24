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
function LogInUser()
{
    // connect to the database
    $Connection = DatabaseConnect();
    // check to see if something was send via POST
    if ( isset( $_POST["user_name"] ))
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
    $SQL = "select user_name, pass_word from students where user_name = ";
    $SQL .= "\"".$_POST['user_name']."\"";
    $SQL .= "and pass_word = ";
    $SQL .= "\"".$_POST['pass_word']."\"";
    $SQL .= ";";
    // execute the insert
    $Results = $Connection->query( $SQL );
    // check for results
    //      $Results will evaluate to true if there data is returned
    //      from the database, false if no data is returned
    if ( $Results )
    {
        echo "<p> Thank you for logging in\n";
	echo "<p> <a href="index.html">To Home Page</a></p>">;

        
        
        
    }
    else
    {
        // no results returned
        echo "<p>No User Found</p>\n";
    }
    // close the connection
    $Connection->close();
}
?>
