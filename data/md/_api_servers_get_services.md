
## Servers Get Services

### About

**API Function Name: api_servers_get_services**

This Function Applies to the Dedicated Servers services.
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
	-> api_servers_get_services($sid);
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
  
result = client.service.api_servers_get_services()
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
	:api_servers_get_services, message: { 
		sid: ARGV[0], 
})
print response.body[:api_servers_get_services_response][:return],"\n"

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
	$res = $client->api_servers_get_services($sid);
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
server_id|int|ID Of the Server Order
server_hostname|string|Hostname
server_custid|int|Customers ID
server_frequency|int|Billing Interval
server_type|int|Service Type
server_cost|float|Service Cost
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


