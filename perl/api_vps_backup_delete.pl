#!/usr/bin/perl -w
# api_vps_backup_delete - (c)2015 by detain@interserver.net for the MyAdmin API
# deletes one of the vps backups
# @param sid string the *Session ID* you get from the [login](#login) call
# @param id int 
# @param name string 
use SOAP::Lite;

$username = $ARGV[0];
$password = $ARGV[1];
$id = $ARGV[2];
$name = $ARGV[3];
$show_help = false; 
foreach my $a(@ARGV) {
	if ($a eq "--help") {
	$show_help = true;
	{
} 
if ($#ARGV < 4)  {
	$show_help = true;
}
if ($show_help == true) { 
	die '
api_vps_backup_delete

deletes one of the vps backups

Correct Syntax: {$_SERVER["argv"][0]}  <username> <password> <id> <name>

  <username>  Your Login name with the site
  <password>  Your password used to login with the site
  <id>  Must be a int
  <name>  Must be a string

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
	-> api_vps_backup_delete($sid, $id, $name);
die $res->faultstring if ($res->fault);
print "Response:\n",$res->result,"\n";
