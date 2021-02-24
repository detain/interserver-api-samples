
## Domains Get Services

### About

**API Function Name: api_domains_get_services**

This Function Applies to the Domain Registrations services.
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
	-> api_domains_get_services($sid);
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
  
result = client.service.api_domains_get_services()
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
	:api_domains_get_services, message: { 
		sid: ARGV[0], 
})
print response.body[:api_domains_get_services_response][:return],"\n"

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
	$res = $client->api_domains_get_services($sid);
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
domain_id|int|Service ID
domain_hostname|string|Domain Name
domain_username|string|Username with Registrar
domain_password|string|Password with Registrar
domain_type|int|Package ID
domain_cost|float|Service Cost
domain_currency|string|
domain_frequency|int|Billing Interval
domain_expire_date|string|
domain_order_date|string|Date the Order was Placed
domain_custid|int|Customer ID
domain_status|string|Billing Status
domain_invoice|int|Invoice ID
domain_coupon|int|Coupon ID
domain_firstname|string|First Name
domain_lastname|string|Last Name
domain_email|string|Email Address
domain_address|string|Address
domain_address2|string|Address (line 2)
domain_address3|string|Address (line 3)
domain_city|string|City
domain_state|string|State
domain_zip|string|Zip
domain_country|string|Country
domain_phone|string|Phone
domain_fax|string|Fax
domain_company|string|Company
domain_extra|string|Additional Domain Information


