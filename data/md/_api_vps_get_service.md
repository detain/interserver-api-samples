
## VPS Get Service

### About

**API Function Name: api_vps_get_service**

This Function Applies to the VPS services.
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
	-> api_vps_get_service($sid, $id);
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
result = client.service.api_vps_get_service()
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
	:api_vps_get_service, message: {
		sid: ARGV[0],		id: ARGV[1],})
print response.body[:api_vps_get_service_response][:return],"\n"

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
	$res = $client->api_vps_get_service($sid, $id);
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
vps_id|int|VPS Service ID
vps_custid|int|Customer ID
vps_server|int|VPS Host Server ID
vps_ip|string|IP Address of VPS
vps_ipv6|string|
vps_vzid|string|VPS Host-Side Server ID
vps_currency|string|
vps_type|int|Package ID
vps_order_date|string|Date the Order was Placed
vps_status|string|Billing Status
vps_invoice|int|Invoice ID
vps_coupon|int|Coupon ID
vps_extra|string|Additional VPS information
vps_hostname|string|Hostname of the VPS
vps_server_status|string|Server Status of VPS
vps_comment|string|Comments about the VPS
vps_slices|int|VPS # of Slices
vps_vnc|string|VNC Address for VPS
vps_vnc_port|int|
vps_rootpass|string|Encrypted Root Password for VPS
vps_mac|string|MAC Address of VPS
vps_os|string|OS or Template of VPS
vps_version|string|Version of VPS or possibly OS Type
vps_location|int|Location of the VPS
vps_platform|string|Platform of the VPS
vps_diskused|int|Used Disk Space
vps_diskmax|int|Total Disk Space


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
			<td>vps_id</td>
			<td>10000</td>
		</tr>
		<tr>
			<td>vps_custid</td>
			<td>11803</td>
		</tr>
		<tr>
			<td>vps_server</td>
			<td>1537</td>
		</tr>
		<tr>
			<td>vps_ip</td>
			<td>206.72.197.216</td>
		</tr>
		<tr>
			<td>vps_ipv6</td>
			<td></td>
		</tr>
		<tr>
			<td>vps_vzid</td>
			<td>windows10000</td>
		</tr>
		<tr>
			<td>vps_currency</td>
			<td>USD</td>
		</tr>
		<tr>
			<td>vps_type</td>
			<td>32</td>
		</tr>
		<tr>
			<td>vps_order_date</td>
			<td>2012-11-06 22:22:35</td>
		</tr>
		<tr>
			<td>vps_status</td>
			<td>canceled</td>
		</tr>
		<tr>
			<td>vps_invoice</td>
			<td>1011318</td>
		</tr>
		<tr>
			<td>vps_coupon</td>
			<td>3507</td>
		</tr>
		<tr>
			<td>vps_extra</td>
			<td>[]</td>
		</tr>
		<tr>
			<td>vps_hostname</td>
			<td>windows10000</td>
		</tr>
		<tr>
			<td>vps_server_status</td>
			<td>deleted</td>
		</tr>
		<tr>
			<td>vps_comment</td>
			<td></td>
		</tr>
		<tr>
			<td>vps_slices</td>
			<td>2</td>
		</tr>
		<tr>
			<td>vps_vnc</td>
			<td>108.54.244.82</td>
		</tr>
		<tr>
			<td>vps_vnc_port</td>
			<td></td>
		</tr>
		<tr>
			<td>vps_rootpass</td>
			<td></td>
		</tr>
		<tr>
			<td>vps_mac</td>
			<td>52:54:00:60:52:f8</td>
		</tr>
		<tr>
			<td>vps_os</td>
			<td>windows1</td>
		</tr>
		<tr>
			<td>vps_version</td>
			<td>1</td>
		</tr>
		<tr>
			<td>vps_location</td>
			<td>1</td>
		</tr>
		<tr>
			<td>vps_platform</td>
			<td>kvm</td>
		</tr>
		<tr>
			<td>vps_diskused</td>
			<td>0</td>
		</tr>
		<tr>
			<td>vps_diskmax</td>
			<td>0</td>
		</tr>
	</tbody>
</table>


