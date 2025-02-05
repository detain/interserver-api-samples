
## SSL Get Service

### About

**API Function Name: api_ssl_get_service**

This Function Applies to the SSL Certificates services.
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
	-> api_ssl_get_service($sid, $id);
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
result = client.service.api_ssl_get_service()
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
	:api_ssl_get_service, message: {
		sid: ARGV[0],		id: ARGV[1],})
print response.body[:api_ssl_get_service_response][:return],"\n"

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
	$res = $client->api_ssl_get_service($sid, $id);
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
ssl_id|int|Service ID
ssl_hostname|string|Hostname of the SSL Certificate
ssl_order_id|string|Order ID with the Certificate Signer
ssl_type|int|Package ID
ssl_currency|string|
ssl_order_date|string|Date the Order was Placed
ssl_custid|int|Customer ID
ssl_status|string|Billing Status
ssl_invoice|int|Invoice ID
ssl_coupon|int|Coupon ID
ssl_firstname|string|First Name
ssl_lastname|string|Last Name
ssl_phone|string|Phone Number
ssl_email|string|Email Address
ssl_company|string|Company
ssl_address|string|Address
ssl_city|string|City
ssl_state|string|State
ssl_zip|string|Zip
ssl_country|string|Country
ssl_department|string|Department
ssl_extra|string|SSL Additional Information
ssl_approver_email|string|Approver Email
ssl_csr|string|CSR Certificate Request
ssl_private_key|string|Private Certificate
ssl_x509|string|x590 Certificate
ssl_ca_root|string|CA Root Certificate
ssl_ca_inter|string|CA Intermedia Cert


