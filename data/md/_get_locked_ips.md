
## Get Locked Ips

### About

**API Function Name: get_locked_ips**

This will return a list of all IP addresses used for fraud.   Its probably of no
* real use to anyone, butI use it to block IP addresses and similar things. 


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$client = SOAP::Lite
	-> uri('urn:myapi')
	-> proxy('https://my.interserver.net/api.php?wsdl');
$res = $client
	-> get_locked_ips();
die $res->faultstring if ($res->fault);
print "Response:\n",$res->result,"\n";

```

```python
#!/usr/bin/python
from suds.client import Client
client = Client("https://my.interserver.net/api.php?wsdl")
#print client ## shows detailed client info
result = client.service.get_locked_ips()
print result

```

```ruby
#!/usr/bin/env ruby
require 'savon'

client = Savon.client(wsdl: 'https://my.interserver.net/api.php?wsdl')
response = client.call(:get_locked_ips)
print response.body[:get_locked_ips_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$res = $client->get_locked_ips();
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
return|array|Array of IP Addresses


### Example Response

<table>
	<thead>
		<tr>
			<th>
				Value
			</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>
				0.0.0.0
			</td>
		</tr>
		<tr>
			<td>
				0.0.214.110
			</td>
		</tr>
		<tr>
			<td>
				0.109.177.189
			</td>
		</tr>
		<tr>
			<td>
				0.120.138.209
			</td>
		</tr>
		<tr>
			<td>
				0.155.237.135
			</td>
		</tr>
		<tr>
			<td>
				0.155.34.18
			</td>
		</tr>
		<tr>
			<td>
				0.231.26.146
			</td>
		</tr>
		<tr>
			<td>
				1.1.1.1
			</td>
		</tr>
		<tr>
			<td>
				1.10.133.120
			</td>
		</tr>
		<tr>
			<td>
				1.10.133.214
			</td>
		</tr>
		<tr>
			<td>
				1.10.217.123
			</td>
		</tr>
	</tbody>
</table>


