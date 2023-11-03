
## OpenTicket

### About

**API Function Name: api_openTicket**

This command creates a new ticket in our system.


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$username = $ARGV[0];
$password = $ARGV[1];
$user_email = $ARGV[2];
$user_ip = $ARGV[3];
$subject = $ARGV[4];
$product = $ARGV[5];
$body = $ARGV[6];
$box_auth_value = $ARGV[7];
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
	-> api_openTicket($sid, $user_email, $user_ip, $subject, $product, $body, $box_auth_value);
die $res->faultstring if ($res->fault);
print "Response:\n",$res->result,"\n";

```

```python
#!/usr/bin/python
from suds.client import Client
client = Client("https://my.interserver.net/api.php?wsdl")
#print client ## shows detailed client info
sid = client.service.api_login(argv[1], argv[2])
if (sid == '')
	die("Got a blank session")
print "Got Session ID "+sid+"\n"
result = client.service.api_openTicket()
print result

```

```ruby
#!/usr/bin/env ruby
require 'savon'

client = Savon.client(wsdl: 'https://my.interserver.net/api.php?wsdl')
response = client.call(
	:api_login, message: {
		username: ARGV[0],
		password: ARGV[1]
})
sid = response.body[:api_login_response][:return]
if (sid == "")
	die("Got a blank session id");
print "got session id ",sid,"\n"
response = client.call(
	:api_openTicket, message: {
		sid: ARGV[0],		user_email: ARGV[1],		user_ip: ARGV[2],		subject: ARGV[3],		product: ARGV[4],		body: ARGV[5],		box_auth_value: ARGV[6],})
print response.body[:api_openTicket_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$username = $_SERVER['argv'][1];
$password = $_SERVER['argv'][2];
$user_email = $_SERVER['argv'][3];
$user_ip = $_SERVER['argv'][4];
$subject = $_SERVER['argv'][5];
$product = $_SERVER['argv'][6];
$body = $_SERVER['argv'][7];
$box_auth_value = $_SERVER['argv'][8];
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$sid = $client->api_login($username, $password);
	if (strlen($sid) == 0)
		die("Got A Blank Session");
	$res = $client->api_openTicket($sid, $user_email, $user_ip, $subject, $product, $body, $box_auth_value);
	echo '$res = '.var_export($res, true)."\n";
 } catch (Exception $ex) {
	echo "Exception Occurred!\n";
	echo "Code:{$ex->faultcode}\n";
	echo "String:{$ex->faultstring}\n";
}; 
?>

```



### Request

This call takes the following parameters:

Parameter|Type|Description
---------|----|-----------
sid|string|the *Session ID* you get from the [login](#login) call
user_email|string|client email address
user_ip|string|client ip address
subject|string|subject of the ticket
product|string|the product/service if any this is in reference to.
body|string|full content/description for the ticket
box_auth_value|string|encryption string?


### Response

This function returns an associative array with the following fields

Field|Type|Description
-----|----|-----------
status|string|Location Status
status_text|string|
ticket_reference_id|int|


### Example Response

<table>
	<thead>
		<tr>
			<th>Field</th>
			<th>Value</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>status</td>
			<td>Failed</td>
		</tr>
		<tr>
			<td>status_text</td>
			<td>Invalid Email Address - Does not match your account email!</td>
		</tr>
		<tr>
			<td>ticket_reference_id</td>
			<td>-1</td>
		</tr>
	</tbody>
</table>


