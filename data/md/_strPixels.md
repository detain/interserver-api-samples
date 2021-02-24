
## StrPixels

### About

**API Function Name: strPixels**

This function uses the array below to calculate the pixel width of a string of
* characters. The widths of each character are based on a 12px Helvetica font. 
* Kerning is not taken into account so RESULTS ARE APPROXIMATE.  The purpose is to
* return a relative size to help in formatting. For example, strPixels('I like
* cake') == 54    strPixels('I LIKE CAKE') == 67


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$string = $ARGV[0];
$client = SOAP::Lite
	-> uri('urn:myapi')
	-> proxy('https://my.interserver.net/api.php?wsdl');
$res = $client
	-> strPixels($string);
die $res->faultstring if ($res->fault);
print "Response:\n",$res->result,"\n";

```

```python
#!/usr/bin/python
from suds.client import Client
client = Client("https://my.interserver.net/api.php?wsdl")
#print client ## shows detailed client info
  
result = client.service.strPixels()
print result

```

```ruby
#!/usr/bin/env ruby
require 'savon'

client = Savon.client(wsdl: 'https://my.interserver.net/api.php?wsdl')
response = client.call(
	:strPixels, message: { 
		string: ARGV[0], 
})
print response.body[:strPixels_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$string = $_SERVER['argv'][1];
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$res = $client->strPixels($string);
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
string|string|characters to measure size


### Response

This function returns an associative array with the following fields

Field|Type|Description
-----|----|-----------
return|int|size in pixels.


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
			<td>64</td>
		</tr>
	</tbody>
</table>


