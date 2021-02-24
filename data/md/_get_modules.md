
## Get Modules

### About

**API Function Name: get_modules**

Returns a list of all the modules available.


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$client = SOAP::Lite
	-> uri('urn:myapi')
	-> proxy('https://my.interserver.net/api.php?wsdl');
$res = $client
	-> get_modules();
die $res->faultstring if ($res->fault);
print "Response:\n",$res->result,"\n";

```

```python
#!/usr/bin/python
from suds.client import Client
client = Client("https://my.interserver.net/api.php?wsdl")
#print client ## shows detailed client info
result = client.service.get_modules()
print result

```

```ruby
#!/usr/bin/env ruby
require 'savon'

client = Savon.client(wsdl: 'https://my.interserver.net/api.php?wsdl')
response = client.call(:get_modules)
print response.body[:get_modules_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$res = $client->get_modules();
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
return|array|


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
				domains
			</td>
		</tr>
		<tr>
			<td>
				vps
			</td>
		</tr>
		<tr>
			<td>
				backups
			</td>
		</tr>
		<tr>
			<td>
				licenses
			</td>
		</tr>
		<tr>
			<td>
				ssl
			</td>
		</tr>
		<tr>
			<td>
				webhosting
			</td>
		</tr>
		<tr>
			<td>
				quickservers
			</td>
		</tr>
		<tr>
			<td>
				servers
			</td>
		</tr>
	</tbody>
</table>


