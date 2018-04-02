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