<?php
/** api_send_mail  -  (c)2015 detain@interserver.net InterServer Hosting
* Sends An email through one of your mail orders
* @param sid string the *Session ID* you get from the [login](#login) call
* @param subject string 
* @param body string 
* @param to string 
* @param from string 
*/
ini_set("soap.wsdl_cache_enabled", "0");
$username = $_SERVER['argv'][1];
$password = $_SERVER['argv'][2];
$subject = $_SERVER['argv'][3];
$body = $_SERVER['argv'][4];
$to = $_SERVER['argv'][5];
$from = $_SERVER['argv'][6];
$show_help = false; 
if (in_array('--help', $_SERVER['argv']))
{
	$show_help = true;
	//break;
} 
if ($_SERVER['argc'] < 7)
	$show_help = true;
if ($show_help == true)
	exit(<<<EOF
api_send_mail

Sends An email through one of your mail orders

Correct Syntax: {$_SERVER["argv"][0]}  <username> <password> <subject> <body> <to> <from>

  <username>  Your Login name with the site
  <password>  Your password used to login with the site
  <subject>  Must be a string
  <body>  Must be a string
  <to>  Must be a string
  <from>  Must be a string

EOF
); 
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$sid = $client->api_login($username, $password);
	if (strlen($sid) == 0)
		die("Got A Blank Session");
	$res = $client->api_send_mail($sid, $subject, $body, $to, $from);
	echo '$res = '.var_export($res, true)."\n";
 } catch (Exception $ex) {
	echo "Exception Occurred!\n";
	echo "Code:{$ex->faultcode}\n";
	echo "String:{$ex->faultstring}\n";
}; 
?>
