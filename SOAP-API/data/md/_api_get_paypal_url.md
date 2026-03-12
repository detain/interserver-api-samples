
## Get Paypal Url

### About

**API Function Name: api_get_paypal_url**

Get the PayPal payment URL for an invoice on a given module.


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$module = $ARGV[0];
$invoice = $ARGV[1];
$client = SOAP::Lite
	-> uri('urn:myapi')
	-> proxy('https://my.interserver.net/api.php?wsdl');
$res = $client
	-> api_get_paypal_url($module, $invoice);
die $res->faultstring if ($res->fault);
print "Response:\n",$res->result,"\n";

```

```python
#!/usr/bin/python
from suds.client import Client
client = Client("https://my.interserver.net/api.php?wsdl")
#print client ## shows detailed client info
result = client.service.api_get_paypal_url()
print result

```

```ruby
#!/usr/bin/env ruby
require 'savon'

client = Savon.client(wsdl: 'https://my.interserver.net/api.php?wsdl')
response = client.call(
	:api_get_paypal_url, message: {
		module: ARGV[0],		invoice: ARGV[1],})
print response.body[:api_get_paypal_url_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$module = $_SERVER['argv'][1];
$invoice = $_SERVER['argv'][2];
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$res = $client->api_get_paypal_url($module, $invoice);
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
module|string|the module the invoice is for. use [get_modules](#get_modules) to get a list of modules
invoice|int|the invoice id, or a comma separated list of invoice ids to get a payment url for.


### Response

This function returns an associative array with the following fields

Field|Type|Description
-----|----|-----------
return|string|the paypal payment url.


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
			<td><a href="https://www.paypal.com/cgi-bin/webscr?cmd=_xclick&business=vps@interserver.net&item_name=%28Repeat+Invoice%3A+385928%29+INTERSERVER-EXTERNAL&custom=INVdomains10000&buyer_credit_promo_code=&buyer_credit_product_category=&buyer_credit_shipping_method=&buyer_credit_user_address_change=&amount=34.00&no_shipping=0&no_note=1&currency_code=USD&lc=US&bn=PP%2dBuyNowBF&charset=UTF%2d8" target=_blank>Click Here to make a PayPal payment</a></td>
		</tr>
	</tbody>
</table>


