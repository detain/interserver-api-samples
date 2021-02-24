
## Get Hostname

### About

**API Function Name: get_hostname**

Resolves an IP Address and returns the hostname it points to.


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$ip = $ARGV[0];
$client = SOAP::Lite
	-> uri('urn:myapi')
	-> proxy('https://my.interserver.net/api.php?wsdl');
$res = $client
	-> get_hostname($ip);
die $res->faultstring if ($res->fault);
print "Response:\n",$res->result,"\n";

```

```python
#!/usr/bin/python
from suds.client import Client
client = Client("https://my.interserver.net/api.php?wsdl")
#print client ## shows detailed client info
  
result = client.service.get_hostname()
print result

```

```ruby
#!/usr/bin/env ruby
require 'savon'

client = Savon.client(wsdl: 'https://my.interserver.net/api.php?wsdl')
response = client.call(
	:get_hostname, message: { 
		ip: ARGV[0], 
})
print response.body[:get_hostname_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$ip = $_SERVER['argv'][1];
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$res = $client->get_hostname($ip);
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
ip|string|


### Response

This function returns an associative array with the following fields

Field|Type|Description
-----|----|-----------
return|string|


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
			<td>my.interserver.net</td>
		</tr>
	</tbody>
</table>


