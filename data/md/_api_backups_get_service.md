
## Backups Get Service

### About

**API Function Name: api_backups_get_service**

This Function Applies to the Backup Services services.
* Gets service info for the given ID in the given Module.   An example of this
* would be in the "vps" module have order id


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$username = $ARGV[0];
$password = $ARGV[1];
$id = $ARGV[2];
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
	-> api_backups_get_service($sid, $id);
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
result = client.service.api_backups_get_service()
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
	:api_backups_get_service, message: {
		sid: ARGV[0],		id: ARGV[1],})
print response.body[:api_backups_get_service_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$username = $_SERVER['argv'][1];
$password = $_SERVER['argv'][2];
$id = $_SERVER['argv'][3];
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$sid = $client->api_login($username, $password);
	if (strlen($sid) == 0)
		die("Got A Blank Session");
	$res = $client->api_backups_get_service($sid, $id);
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
id|int|


### Response

This function returns an associative array with the following fields

Field|Type|Description
-----|----|-----------
backup_id|int|ID of the Backup Host Server
backup_server|int|ID of Server the Backup Resides on
backup_username|string|Username on the Backup Server associated with this Order
backup_type|int|Which type of Backup Server
backup_currency|string|
backup_order_date|string|Date the Order was Placed
backup_custid|int|Customer ID
backup_quota|int|Disk Quota
backup_ip|string|IP Address of the Backup Server
backup_status|string|Billing Status
backup_invoice|int|Invoice ID
backup_coupon|int|Coupon ID
backup_extra|string|Additional Backup Information
backup_server_status|string|Server-Side status of this website
backup_comment|string|


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
			<td>backup_id</td>
			<td>10000</td>
		</tr>
		<tr>
			<td>backup_server</td>
			<td>25</td>
		</tr>
		<tr>
			<td>backup_username</td>
			<td>st10000</td>
		</tr>
		<tr>
			<td>backup_type</td>
			<td>10831</td>
		</tr>
		<tr>
			<td>backup_currency</td>
			<td>USD</td>
		</tr>
		<tr>
			<td>backup_order_date</td>
			<td>2021-04-26 04:54:55</td>
		</tr>
		<tr>
			<td>backup_custid</td>
			<td>723209</td>
		</tr>
		<tr>
			<td>backup_quota</td>
			<td>0</td>
		</tr>
		<tr>
			<td>backup_ip</td>
			<td>68.168.209.18</td>
		</tr>
		<tr>
			<td>backup_status</td>
			<td>canceled</td>
		</tr>
		<tr>
			<td>backup_invoice</td>
			<td>19239357</td>
		</tr>
		<tr>
			<td>backup_coupon</td>
			<td>0</td>
		</tr>
		<tr>
			<td>backup_extra</td>
			<td>[]</td>
		</tr>
		<tr>
			<td>backup_server_status</td>
			<td>deleted</td>
		</tr>
		<tr>
			<td>backup_comment</td>
			<td></td>
		</tr>
	</tbody>
</table>


