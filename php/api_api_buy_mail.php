<?php
/** api_api_buy_mail  -  (c)2015 detain@interserver.net InterServer Hosting
* Places an email order
* @param sid string the *Session ID* you get from the [login](#login) call
* @param coupon string coupon name
*/
ini_set("soap.wsdl_cache_enabled", "0");
$username = $_SERVER['argv'][1];
$password = $_SERVER['argv'][2];
$coupon = $_SERVER['argv'][3];
$show_help = false; 
if (in_array('--help', $_SERVER['argv']))
{
	$show_help = true;
	//break;
} 
if ($_SERVER['argc'] < 4)
	$show_help = true;
if ($show_help == true)
	exit(<<<EOF
api_api_buy_mail

Places an email order

Correct Syntax: {$_SERVER["argv"][0]}  <username> <password> <coupon>

  <username>  Your Login name with the site
  <password>  Your password used to login with the site
  <coupon>  Must be a string

EOF
);
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$sid = $client->api_login($username, $password);
	if (strlen($sid) == 0)
		die("Got A Blank Session");
	$res = $client->api_api_buy_mail($sid, $coupon);
	echo '$res = '.var_export($res, true)."\n";
 } catch (Exception $ex) {
	echo "Exception Occurred!\n";
	echo "Code:{$ex->faultcode}\n";
	echo "String:{$ex->faultstring}\n";
}; 
?>
