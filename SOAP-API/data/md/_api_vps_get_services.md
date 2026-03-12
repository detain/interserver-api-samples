
## VPS Get Services

### About

**API Function Name: api_vps_get_services**

This Function Applies to the VPS services.
* Gets List of Services


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$username = $ARGV[0];
$password = $ARGV[1];
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
	-> api_vps_get_services($sid);
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
result = client.service.api_vps_get_services()
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
	:api_vps_get_services, message: {
		sid: ARGV[0],})
print response.body[:api_vps_get_services_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$username = $_SERVER['argv'][1];
$password = $_SERVER['argv'][2];
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$sid = $client->api_login($username, $password);
	if (strlen($sid) == 0)
		die("Got A Blank Session");
	$res = $client->api_vps_get_services($sid);
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


