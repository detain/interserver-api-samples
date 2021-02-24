
## Get VPS Locations Array

### About

**API Function Name: get_vps_locations_array**

Use this function to get a list of the Locations available for ordering. The id
* field in the return value is also needed to pass to the buy_vps functions.


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$client = SOAP::Lite
	-> uri('urn:myapi')
	-> proxy('https://my.interserver.net/api.php?wsdl');
$res = $client
	-> get_vps_locations_array();
die $res->faultstring if ($res->fault);
print "Response:\n",$res->result,"\n";

```

```python
#!/usr/bin/python
from suds.client import Client
client = Client("https://my.interserver.net/api.php?wsdl")
#print client ## shows detailed client info
result = client.service.get_vps_locations_array()
print result

```

```ruby
#!/usr/bin/env ruby
require 'savon'

client = Savon.client(wsdl: 'https://my.interserver.net/api.php?wsdl')
response = client.call(:get_vps_locations_array)
print response.body[:get_vps_locations_array_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$res = $client->get_vps_locations_array();
	echo '$res = '.var_export($res, true)."\n";
 } catch (Exception $ex) {
	echo "Exception Occurred!\n";
	echo "Code:{$ex->faultcode}\n";
	echo "String:{$ex->faultstring}\n";
}; 
?>
```



### Request

This function takes no parameters

### Response

This function returns an associative array with the following fields

Field|Type|Description
-----|----|-----------
id|int|ID of the Coupon
name|string|Country Name in all Capitols


### Example Response

<table>
	<thead>
		<tr>
			<th>
				Id
			</th>
			<th>
				Name
			</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>
				1
			</td>
			<td>
				Secaucus, NJ
			</td>
		</tr>
		<tr>
			<td>
				2
			</td>
			<td>
				Los Angeles, CA
			</td>
		</tr>
	</tbody>
</table>


