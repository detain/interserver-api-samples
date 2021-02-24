
## Buy License Prepay

### About

**API Function Name: api_buy_license_prepay**

Purchase a License and optionally uses PrePay.  Will return an error if
* use_prepay is true not enough PrePay funds are available.


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$username = $ARGV[0];
$password = $ARGV[1];
$ip = $ARGV[2];
$type = $ARGV[3];
$coupon = $ARGV[4];
$use_prepay = $ARGV[5];
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
	-> api_buy_license_prepay($sid, $ip, $type, $coupon, $use_prepay);
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
  
result = client.service.api_buy_license_prepay()
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
	:api_buy_license_prepay, message: { 
		sid: ARGV[0], 
		ip: ARGV[1], 
		type: ARGV[2], 
		coupon: ARGV[3], 
		use_prepay: ARGV[4], 
})
print response.body[:api_buy_license_prepay_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$username = $_SERVER['argv'][1];
$password = $_SERVER['argv'][2];
$ip = $_SERVER['argv'][3];
$type = $_SERVER['argv'][4];
$coupon = $_SERVER['argv'][5];
$use_prepay = $_SERVER['argv'][6];
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$sid = $client->api_login($username, $password);
	if (strlen($sid) == 0)
		die("Got A Blank Session");
	$res = $client->api_buy_license_prepay($sid, $ip, $type, $coupon, $use_prepay);
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
ip|string|ip address you wish to license some software on
type|int|
coupon|string|an optional coupon
use_prepay|bool|optional, whether or not to use a prepay, if specified as true will return an error if not enough prepay


### Response

This function returns an associative array with the following fields

Field|Type|Description
-----|----|-----------
status|string|Location Status
status_text|string|
invoice|int|
cost|float|


