
## Update Dns Record

### About

**API Function Name: api_update_dns_record**

Updates a single DNS record


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$username = $ARGV[0];
$password = $ARGV[1];
$domain_id = $ARGV[2];
$record_id = $ARGV[3];
$name = $ARGV[4];
$content = $ARGV[5];
$type = $ARGV[6];
$ttl = $ARGV[7];
$prio = $ARGV[8];
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
	-> api_update_dns_record($sid, $domain_id, $record_id, $name, $content, $type, $ttl, $prio);
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
  
result = client.service.api_update_dns_record()
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
	:api_update_dns_record, message: { 
		sid: ARGV[0], 
		domain_id: ARGV[1], 
		record_id: ARGV[2], 
		name: ARGV[3], 
		content: ARGV[4], 
		type: ARGV[5], 
		ttl: ARGV[6], 
		prio: ARGV[7], 
})
print response.body[:api_update_dns_record_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$username = $_SERVER['argv'][1];
$password = $_SERVER['argv'][2];
$domain_id = $_SERVER['argv'][3];
$record_id = $_SERVER['argv'][4];
$name = $_SERVER['argv'][5];
$content = $_SERVER['argv'][6];
$type = $_SERVER['argv'][7];
$ttl = $_SERVER['argv'][8];
$prio = $_SERVER['argv'][9];
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$sid = $client->api_login($username, $password);
	if (strlen($sid) == 0)
		die("Got A Blank Session");
	$res = $client->api_update_dns_record($sid, $domain_id, $record_id, $name, $content, $type, $ttl, $prio);
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
domain_id|int|The ID of the domain in question.
record_id|int|The ID of the record to update
name|string|the hostname being set on the dns record.
content|string|the value of the dns record, or what its set to.
type|string|dns record type.
ttl|int|dns record time to live, or update time.
prio|int|dns record priority


### Response

This function returns an associative array with the following fields

Field|Type|Description
-----|----|-----------
return|bool|True on success, False on failure.


### Example Response

<table>
	<thead>
		<tr>
			<th>Type</th>
			<th>Value</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>Boolean</td>
			<td></td>
		</tr>
	</tbody>
</table>


