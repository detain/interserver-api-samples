
## Buy Mail

### About

**API Function Name: api_api_buy_mail**

Places an email order


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$username = $ARGV[0];
$password = $ARGV[1];
$coupon = $ARGV[2];
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
	-> api_api_buy_mail($sid, $coupon);
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
result = client.service.api_api_buy_mail()
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
	:api_api_buy_mail, message: {
		sid: ARGV[0],		coupon: ARGV[1],})
print response.body[:api_api_buy_mail_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$username = $_SERVER['argv'][1];
$password = $_SERVER['argv'][2];
$coupon = $_SERVER['argv'][3];
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$sid = $client->api_login($username, $password);
	if (strlen($sid) == 0)
		die("Got A Blank Session");
	$res = $client->api_api_buy_mail($sid, $coupon);
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
coupon|string|coupon name


### Response

This function returns an associative array with the following fields

Field|Type|Description
-----|----|-----------
status|string|Location Status
status_text|string|
invoices|string|*Field* *Description*
 | |*invoices_id* ID of the Invoice used for referencing
 | |*invoices_description* Description of what the Invoice was for
 | |*invoices_amount* Cost of the Invoice
 | |*invoices_custid* ID of the Customer this Invoice is for
 | |*invoices_type* The Type of Invoice (1 = charge, 10+ are payment types)
 | |*invoices_date* Date the Invoice was Created
 | |*invoices_group* Billing Group the Invoice falls under, Not currently used
 | |*invoices_extra* If type 1 invoice this points to the repeat invoice id, otherwise points to the id of the charge invoice its a payment for.
 | |*invoices_paid* Whether or not the Invoice was paid (if applicable)
 | |*invoices_module* Module the Invoice was for.  You can use [get_modules](#get-modules) to get a list of available modules.
 | |*invoices_due_date* Date the Invoice is Due
 | |*invoices_service* ID of the Service/Order this Invoice is for such as 1000 if the order was vps1000 and the module was vps
 | |*invoices_deleted* Deleted Flag
cost|float|


