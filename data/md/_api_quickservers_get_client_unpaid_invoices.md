
## Quickservers Get Client Unpaid Invoices

### About

**API Function Name: api_quickservers_get_client_unpaid_invoices**

This Function Applies to the Rapid Deploy Servers services.
* This function returns a list of all the unpaid invoices matching the module
* passed..


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
	-> api_quickservers_get_client_unpaid_invoices($sid);
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
  
result = client.service.api_quickservers_get_client_unpaid_invoices()
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
	:api_quickservers_get_client_unpaid_invoices, message: { 
		sid: ARGV[0], 
})
print response.body[:api_quickservers_get_client_unpaid_invoices_response][:return],"\n"

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
	$res = $client->api_quickservers_get_client_unpaid_invoices($sid);
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
invoices_id|int|ID of the Invoice used for referencing
invoices_description|string|Description of what the Invoice was for
invoices_amount|float|Cost of the Invoice
invoices_custid|int|ID of the Customer this Invoice is for
invoices_type|int|The Type of Invoice (1 = charge, 10+ are payment types)
invoices_date|string|Date the Invoice was Created
invoices_group|int|Billing Group the Invoice falls under, Not currently used
invoices_extra|int|If type 1 invoice this points to the repeat invoice id, otherwise points to the id of the charge invoice its a payment for.
invoices_paid|int|Wether or not the Invoice was paid (if applicable)
invoices_module|string|Module the Invoice was for.  You can use [get_modules](#get-modules) to get a list of available modules.
invoices_due_date|string|Date the Invoice is Due
invoices_service|int|ID of the Service/Order this Invoice is for such as 1000 if the order was vps1000 and the module was vps


