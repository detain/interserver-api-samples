
## Quickservers Get Services

### About

**API Function Name: api_quickservers_get_services**

This Function Applies to the Rapid Deploy Servers services.
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
	-> api_quickservers_get_services($sid);
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
  
result = client.service.api_quickservers_get_services()
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
	:api_quickservers_get_services, message: { 
		sid: ARGV[0], 
})
print response.body[:api_quickservers_get_services_response][:return],"\n"

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
	$res = $client->api_quickservers_get_services($sid);
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
qs_id|int|Server ID
qs_server|int|Rapid Deploy Server Host Server ID
qs_vzid|string|Host-Side Server ID
qs_type|int|Server Type
qs_cost|float|Service Cost
qs_currency|string|
qs_frequency|int|Billing Interval
qs_order_date|string|Date the Order was Placed
qs_custid|int|Customer ID
qs_ip|string|IP Address
qs_status|string|Billing Status
qs_invoice|int|Invoice ID
qs_coupon|int|Coupon ID
qs_extra|string|Additional Rapid Deploy Server information
qs_hostname|string|Hostname
qs_server_status|string|Server Status
qs_comment|string|Comments
qs_slices|int|# of Slices
qs_vnc|string|VNC Address
qs_vnc_port|int|VNC Port
qs_rootpass|string|Encrypted Root Password
qs_mac|string|MAC Address
qs_os|string|OS or Template
qs_version|string|Version
qs_location|int|Location
qs_platform|string|Platform


