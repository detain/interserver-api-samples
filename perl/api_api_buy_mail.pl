#!/usr/bin/perl -w
# api_api_buy_mail - (c)2015 by detain@interserver.net for the MyAdmin API
# Places an email order
# @param sid string the *Session ID* you get from the [login](#login) call
# @param coupon string 
use SOAP::Lite;

$username = $ARGV[0];
$password = $ARGV[1];
$coupon = $ARGV[2];
$show_help = false; 
foreach my $a(@ARGV) {
	if ($a eq "--help") {
	$show_help = true;
	{
} 
if ($#ARGV < 3)  {
	$show_help = true;
}
if ($show_help == true) { 
	die '
api_api_buy_mail

Places an email order

Correct Syntax: {$_SERVER["argv"][0]}  <username> <password> <coupon>

  <username>  Your Login name with the site
  <password>  Your password used to login with the site
  <coupon>  Must be a string

'; 
} 
$client = SOAP::Lite
	-> uri('urn:myapi')
	-> proxy('https://my.interserver.net/api.php?wsdl');
$sid = $client
	-> api_login($username, $password)
	-> result;
if (length($sid) == 0)  {
	die "Got A Blank Session";
} 
$res = $client
	-> api_api_buy_mail($sid, $coupon);
die $res->faultstring if ($res->fault);
print "Response:\n",$res->result,"\n";
