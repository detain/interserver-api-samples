
## Login

### About

**API Function Name: api_login**

This function creates a session in our system which you will need to pass to
* most functions for authentication.


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$username = $ARGV[0];
$password = $ARGV[1];
$client = SOAP::Lite
	-> uri('urn:myapi')
	-> proxy('https://my.interserver.net/api.php?wsdl');
$res = $client
	-> api_login($username, $password);
die $res->faultstring if ($res->fault);
print "Response:\n",$res->result,"\n";

```

```python
#!/usr/bin/python
from suds.client import Client
client = Client("https://my.interserver.net/api.php?wsdl")
#print client ## shows detailed client info
  
result = client.service.api_login()
print result

```

```ruby
#!/usr/bin/env ruby
require 'savon'

client = Savon.client(wsdl: 'https://my.interserver.net/api.php?wsdl')
response = client.call(
	:api_login, message: { 
		username: ARGV[0], 
		password: ARGV[1], 
})
print response.body[:api_login_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$username = $_SERVER['argv'][1];
$password = $_SERVER['argv'][2];
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$res = $client->api_login($username, $password);
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
username|string|the username (email address) you signed up with.
password|string|the password you use to login to the web account, or alternatively the API key.


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
			<td>434ee20ee37a5ce6a2ec4b1e6953b86f</td>
		</tr>
	</tbody>
</table>


