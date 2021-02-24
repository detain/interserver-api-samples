
## GetTicketList

### About

**API Function Name: api_getTicketList**

Returns a list of any tickets in the system.


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$username = $ARGV[0];
$password = $ARGV[1];
$page = $ARGV[2];
$limit = $ARGV[3];
$status = $ARGV[4];
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
	-> api_getTicketList($sid, $page, $limit, $status);
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
  
result = client.service.api_getTicketList()
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
	:api_getTicketList, message: { 
		sid: ARGV[0], 
		page: ARGV[1], 
		limit: ARGV[2], 
		status: ARGV[3], 
})
print response.body[:api_getTicketList_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$username = $_SERVER['argv'][1];
$password = $_SERVER['argv'][2];
$page = $_SERVER['argv'][3];
$limit = $_SERVER['argv'][4];
$status = $_SERVER['argv'][5];
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$sid = $client->api_login($username, $password);
	if (strlen($sid) == 0)
		die("Got A Blank Session");
	$res = $client->api_getTicketList($sid, $page, $limit, $status);
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
page|int|page number of tickets to list
limit|int|how many tickets to show per page
status|string|null for no status limit or limit to a specific status


### Response

This function returns an associative array with the following fields

Field|Type|Description
-----|----|-----------
status|string|null for no status limit or limit to a specific status
status_text|string|
totalPages|string|
tickets|tns:getTicketList_tickets|


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
			<td>ok</td>
		</tr>
		<tr>
			<td>status_text</td>
			<td>List of tickets</td>
		</tr>
		<tr>
			<td>totalPages</td>
			<td>4.1</td>
		</tr>
		<tr>
			<td>tickets</td>
			<td>Array</td>
		</tr>
	</tbody>
</table>


