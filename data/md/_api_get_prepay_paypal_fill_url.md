
## Get Prepay Paypal Fill Url

### About

**API Function Name: api_get_prepay_paypal_fill_url**

Gets a PayPal URL to fill a PrePay.


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$username = $ARGV[0];
$password = $ARGV[1];
$module = $ARGV[2];
$prepay_id = $ARGV[3];
$amount = $ARGV[4];
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
	-> api_get_prepay_paypal_fill_url($sid, $module, $prepay_id, $amount);
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
  
result = client.service.api_get_prepay_paypal_fill_url()
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
	:api_get_prepay_paypal_fill_url, message: { 
		sid: ARGV[0], 
		module: ARGV[1], 
		prepay_id: ARGV[2], 
		amount: ARGV[3], 
})
print response.body[:api_get_prepay_paypal_fill_url_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$username = $_SERVER['argv'][1];
$password = $_SERVER['argv'][2];
$module = $_SERVER['argv'][3];
$prepay_id = $_SERVER['argv'][4];
$amount = $_SERVER['argv'][5];
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$sid = $client->api_login($username, $password);
	if (strlen($sid) == 0)
		die("Got A Blank Session");
	$res = $client->api_get_prepay_paypal_fill_url($sid, $module, $prepay_id, $amount);
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
prepay_id|int|the ID of the PrePay
amount|float|the amount to pay on the prepay.


### Response

This function returns an associative array with the following fields

Field|Type|Description
-----|----|-----------
return|string|a paypal payment url.


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
			<td>String</td>
			<td>https://www.paypal.com/cgi-bin/webscr?cmd=_xclick&business=vps@interserver.net&item_name=Fill+domains+PrePay+100&custom=PREPAYdomains100&buyer_credit_promo_code=&buyer_credit_product_category=&buyer_credit_shipping_method=&buyer_credit_user_address_change=&amount=10.00&no_shipping=0&no_note=1&currency_code=USD&lc=US&bn=PP%2dBuyNowBF&charset=UTF%2d8</td>
		</tr>
	</tbody>
</table>


