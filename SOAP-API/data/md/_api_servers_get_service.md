
## Servers Get Service

### About

**API Function Name: api_servers_get_service**

This Function Applies to the Dedicated Servers services.
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
	-> api_servers_get_service($sid, $id);
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
result = client.service.api_servers_get_service()
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
	:api_servers_get_service, message: {
		sid: ARGV[0],		id: ARGV[1],})
print response.body[:api_servers_get_service_response][:return],"\n"

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
	$res = $client->api_servers_get_service($sid, $id);
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
server_id|int|ID Of the Server Order
server_hostname|string|Hostname
server_custid|int|Customers ID
server_type|int|Service Type
server_currency|string|
server_order_date|string|Date the Order was Placed
server_invoice|int|Invoice ID
server_coupon|int|
server_status|string|Billing Status
server_root|string|
server_dedicated_tag|string|
server_custom_tag|string|
server_comment|string|
server_initial_bill|int|
server_hardware|int|
server_ips|int|
server_monthly_bill|int|
server_setup|int|Is Server Setup
server_discount|float|Discount Amount
server_rep|int|
server_date|float|Order Date
server_total_cost|float|Total Cost
server_location|string|Server Location ID
server_hardware_ordered|int|Hardware Ordered
server_billed|int|Server is Billed
server_welcome_email|int|Welcome Email Sent
server_dedicated_cpu|int|Processor
server_dedicated_memory|int|System Memory
server_dedicated_hd1|int|Primary Hard Drive
server_dedicated_hd2|int|Secondary Hard Drive
server_dedicated_bandwidth|int|Bandwidth Allowments
server_dedicated_ips|int|IP Block Size
server_dedicated_os|int|Operating System
server_dedicated_cp|int|Control Panel
server_dedicated_raid|string|RAID Storage
server_extra|string|Extra


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
			<td>server_id</td>
			<td>10000</td>
		</tr>
		<tr>
			<td>server_hostname</td>
			<td>server.tv.com</td>
		</tr>
		<tr>
			<td>server_custid</td>
			<td>171614</td>
		</tr>
		<tr>
			<td>server_type</td>
			<td>600</td>
		</tr>
		<tr>
			<td>server_currency</td>
			<td>USD</td>
		</tr>
		<tr>
			<td>server_order_date</td>
			<td></td>
		</tr>
		<tr>
			<td>server_invoice</td>
			<td></td>
		</tr>
		<tr>
			<td>server_coupon</td>
			<td>0</td>
		</tr>
		<tr>
			<td>server_status</td>
			<td>canceled</td>
		</tr>
		<tr>
			<td>server_root</td>
			<td>123456789</td>
		</tr>
		<tr>
			<td>server_dedicated_tag</td>
			<td>0</td>
		</tr>
		<tr>
			<td>server_custom_tag</td>
			<td></td>
		</tr>
		<tr>
			<td>server_comment</td>
			<td>Customers IP 41.130.49.130<br>I want this server with speed  1gbps port</td>
		</tr>
		<tr>
			<td>server_initial_bill</td>
			<td>0</td>
		</tr>
		<tr>
			<td>server_hardware</td>
			<td>0</td>
		</tr>
		<tr>
			<td>server_ips</td>
			<td>0</td>
		</tr>
		<tr>
			<td>server_monthly_bill</td>
			<td>0</td>
		</tr>
		<tr>
			<td>server_setup</td>
			<td>0</td>
		</tr>
		<tr>
			<td>server_discount</td>
			<td></td>
		</tr>
		<tr>
			<td>server_rep</td>
			<td>0</td>
		</tr>
		<tr>
			<td>server_date</td>
			<td>1399331698</td>
		</tr>
		<tr>
			<td>server_total_cost</td>
			<td>169</td>
		</tr>
		<tr>
			<td>server_location</td>
			<td></td>
		</tr>
		<tr>
			<td>server_hardware_ordered</td>
			<td>0</td>
		</tr>
		<tr>
			<td>server_billed</td>
			<td>0</td>
		</tr>
		<tr>
			<td>server_welcome_email</td>
			<td>1</td>
		</tr>
		<tr>
			<td>server_dedicated_cpu</td>
			<td>34</td>
		</tr>
		<tr>
			<td>server_dedicated_memory</td>
			<td>21</td>
		</tr>
		<tr>
			<td>server_dedicated_hd1</td>
			<td>11</td>
		</tr>
		<tr>
			<td>server_dedicated_hd2</td>
			<td></td>
		</tr>
		<tr>
			<td>server_dedicated_bandwidth</td>
			<td>3</td>
		</tr>
		<tr>
			<td>server_dedicated_ips</td>
			<td>5</td>
		</tr>
		<tr>
			<td>server_dedicated_os</td>
			<td>13</td>
		</tr>
		<tr>
			<td>server_dedicated_cp</td>
			<td>5</td>
		</tr>
		<tr>
			<td>server_dedicated_raid</td>
			<td>NO Raid</td>
		</tr>
		<tr>
			<td>server_extra</td>
			<td></td>
		</tr>
	</tbody>
</table>


