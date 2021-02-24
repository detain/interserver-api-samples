
## Add Prepay

### About

**API Function Name: api_add_prepay**

Adds a PrePay into the system under the given module.    PrePays are a credit on
* your account by prefilling  your account with funds.   These are stored in a
* PrePay.    PrePay funds can be automatically used as needed or set to only be
* usable by direct action.  PrePays must be at least $10.00.   A return value of 0
* means a failure in creation.


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$username = $ARGV[0];
$password = $ARGV[1];
$module = $ARGV[2];
$amount = $ARGV[3];
$automatic_use = $ARGV[4];
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
	-> api_add_prepay($sid, $module, $amount, $automatic_use);
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
  
result = client.service.api_add_prepay()
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
	:api_add_prepay, message: { 
		sid: ARGV[0], 
		module: ARGV[1], 
		amount: ARGV[2], 
		automatic_use: ARGV[3], 
})
print response.body[:api_add_prepay_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$username = $_SERVER['argv'][1];
$password = $_SERVER['argv'][2];
$module = $_SERVER['argv'][3];
$amount = $_SERVER['argv'][4];
$automatic_use = $_SERVER['argv'][5];
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$sid = $client->api_login($username, $password);
	if (strlen($sid) == 0)
		die("Got A Blank Session");
	$res = $client->api_add_prepay($sid, $module, $amount, $automatic_use);
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
module|string|the module the prepay is for. use [get_modules](#get_modules) to get a list of modules
amount|float|the dollar amount of prepay total
automatic_use|bool|whether or not the prepay will get used automatically by billing system.


### Response

This function returns an associative array with the following fields

Field|Type|Description
-----|----|-----------
return|int|the prepay id


### Example Response

<table>
	<thead>
		<tr>
			<th>Type</th>
			<th>Value</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>Integer</td>
			<td>66355</td>
		</tr>
	</tbody>
</table>


