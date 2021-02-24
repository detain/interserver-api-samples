#!/usr/bin/perl -w
# api_send_mail - (c)2015 by detain@interserver.net for the MyAdmin API
# Sends An email through one of your mail orders
# @param sid string the *Session ID* you get from the [login](#login) call
# @param subject string 
# @param body string 
# @param to string 
# @param from string 
use SOAP::Lite;

$username = $ARGV[0];
$password = $ARGV[1];
$subject = $ARGV[2];
$body = $ARGV[3];
$to = $ARGV[4];
$from = $ARGV[5];
$show_help = false; 
foreach my $a(@ARGV) {
	if ($a eq "--help") {
	$show_help = true;
	{
} 
if ($#ARGV < 6)  {
	$show_help = true;
}
if ($show_help == true) { 
	die '
api_send_mail

Sends An email through one of your mail orders

Correct Syntax: {$_SERVER["argv"][0]}  <username> <password> <subject> <body> <to> <from>

  <username>  Your Login name with the site
  <password>  Your password used to login with the site
  <subject>  Must be a string
  <body>  Must be a string
  <to>  Must be a string
  <from>  Must be a string

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
	-> api_send_mail($sid, $subject, $body, $to, $from);
die $res->faultstring if ($res->fault);
print "Response:\n",$res->result,"\n";
