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
function LoginLib()
{
    // connect to the database
    $conn = DatabaseConnect();
    
    // make a select statement to get data from the database
    //$SQL = "select userid, pswd from login;";
    
    $user = $_POST['user_name'];
    $pswd = $_POST['pass_word'];
    //echo "<p> $user </p>";   
    //echo "<p> $pswd </p>";   

   
$sql = "SELECT lib_name, pass_word FROM librarians where user_name = '$user' and pass_word = '$pswd'";
    $result = $conn->query($sql);

    if ($result->num_rows > 0) 
    {
        // output data of each row
        /*while($row = $result->fetch_assoc()) 
        {
            echo "Name: " . $row["userid"]. " " . $row["pswd"]. "<br>";
        }*/
        return true;
        } 
        else 
        {
            return false;
        }
	

}

?>
