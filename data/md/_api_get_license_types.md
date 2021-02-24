
## Get License Types

### About

**API Function Name: api_get_license_types**

Get a license of the various license types.


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$client = SOAP::Lite
	-> uri('urn:myapi')
	-> proxy('https://my.interserver.net/api.php?wsdl');
$res = $client
	-> api_get_license_types();
die $res->faultstring if ($res->fault);
print "Response:\n",$res->result,"\n";

```

```python
#!/usr/bin/python
from suds.client import Client
client = Client("https://my.interserver.net/api.php?wsdl")
#print client ## shows detailed client info
result = client.service.api_get_license_types()
print result

```

```ruby
#!/usr/bin/env ruby
require 'savon'

client = Savon.client(wsdl: 'https://my.interserver.net/api.php?wsdl')
response = client.call(:api_get_license_types)
print response.body[:api_get_license_types_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$res = $client->api_get_license_types();
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
0|tns:license_type[]|


### Example Response

<table>
	<thead>
		<tr>
			<th>
				Services Id
			</th>
			<th>
				Services Name
			</th>
			<th>
				Services Cost
			</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>
				5000
			</td>
			<td>
				INTERSERVER-EXTERNAL
			</td>
			<td>
				34.95
			</td>
		</tr>
		<tr>
			<td>
				5001
			</td>
			<td>
				INTERSERVER-EXTERNAL-VPS
			</td>
			<td>
				15.95
			</td>
		</tr>
		<tr>
			<td>
				5002
			</td>
			<td>
				INTERSERVER-EXTERNAL-VZZO
			</td>
			<td>
				15.95
			</td>
		</tr>
		<tr>
			<td>
				5005
			</td>
			<td>
				INTERSERVER-ENKOMP-EXTERNAL-A500
			</td>
			<td>
				55
			</td>
		</tr>
		<tr>
			<td>
				5006
			</td>
			<td>
				Softaculous
			</td>
			<td>
				3
			</td>
		</tr>
		<tr>
			<td>
				5007
			</td>
			<td>
				Softaculous VPS
			</td>
			<td>
				2
			</td>
		</tr>
		<tr>
			<td>
				5008
			</td>
			<td>
				INTERSERVER-INTERNAL
			</td>
			<td>
				25
			</td>
		</tr>
		<tr>
			<td>
				5009
			</td>
			<td>
				INTERSERVER-INTERNAL-VZZO
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				5014
			</td>
			<td>
				INTERSERVER-INTERNAL-VPS
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				5017
			</td>
			<td>
				Parallels Plesk v10+/v11+ for VZ 10 Domains (Inside DataCenter)
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				5018
			</td>
			<td>
				Parallels Plesk v10+/v11+ 10 Domains (Inside DataCenter)
			</td>
			<td>
				16
			</td>
		</tr>
		<tr>
			<td>
				5019
			</td>
			<td>
				Parallels Plesk v10+/v11+ Unlimited Domains (Inside DataCenter)
			</td>
			<td>
				40
			</td>
		</tr>
		<tr>
			<td>
				5020
			</td>
			<td>
				Parallels Plesk v10+/v11+ for VZ 10 Domains (Outside DataCenter)
			</td>
			<td>
				12
			</td>
		</tr>
		<tr>
			<td>
				5021
			</td>
			<td>
				Parallels Plesk v10+/v11+ 10 Domains (Outside DataCenter)
			</td>
			<td>
				20
			</td>
		</tr>
		<tr>
			<td>
				5022
			</td>
			<td>
				Parallels Plesk v10+/v11+ Unlimited Domains (Outside DataCenter)
			</td>
			<td>
				50
			</td>
		</tr>
		<tr>
			<td>
				5023
			</td>
			<td>
				Parallels Plesk v10+/v11+ for VZ Unlimited Domains (Inside DataCenter)
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				5024
			</td>
			<td>
				Parallels Plesk v10+/v11+ for VZ Unlimited Domains (Outside DataCenter)
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				5025
			</td>
			<td>
				LiteSpeed WebServer VPS License
			</td>
			<td>
				13.95
			</td>
		</tr>
		<tr>
			<td>
				5026
			</td>
			<td>
				LiteSpeed WebServer Ultra-VPS License
			</td>
			<td>
				19
			</td>
		</tr>
		<tr>
			<td>
				5027
			</td>
			<td>
				LiteSpeed WebServer 1-CPU License
			</td>
			<td>
				30
			</td>
		</tr>
		<tr>
			<td>
				5028
			</td>
			<td>
				LiteSpeed WebServer 2-CPU License
			</td>
			<td>
				46
			</td>
		</tr>
		<tr>
			<td>
				5029
			</td>
			<td>
				LiteSpeed WebServer 4-CPU License
			</td>
			<td>
				65
			</td>
		</tr>
		<tr>
			<td>
				5030
			</td>
			<td>
				LiteSpeed WebServer 8-CPU License
			</td>
			<td>
				92
			</td>
		</tr>
		<tr>
			<td>
				5031
			</td>
			<td>
				LiteSpeed Load Balancer
			</td>
			<td>
				65
			</td>
		</tr>
		<tr>
			<td>
				5032
			</td>
			<td>
				CloudLinux License
			</td>
			<td>
				10
			</td>
		</tr>
		<tr>
			<td>
				5033
			</td>
			<td>
				CloudLinux Type2 License
			</td>
			<td>
				11.95
			</td>
		</tr>
		<tr>
			<td>
				5034
			</td>
			<td>
				KernelCare License
			</td>
			<td>
				2.95
			</td>
		</tr>
		<tr>
			<td>
				5035
			</td>
			<td>
				Parallels Plesk v10+/v11+ for Windows Unlimited Domains (Inside DataCenter)
			</td>
			<td>
				40
			</td>
		</tr>
		<tr>
			<td>
				5036
			</td>
			<td>
				Parallels Plesk v10+/v11+ for Windows Unlimited Domains (Outside DataCenter)
			</td>
			<td>
				50
			</td>
		</tr>
		<tr>
			<td>
				5037
			</td>
			<td>
				Parallels Plesk v10+/v11+ for Windows for VZ Unlimited Domains (Inside DataCenter)
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				5038
			</td>
			<td>
				Parallels Plesk v10+/v11+ for Windows for VZ Unlimited Domains (Outside DataCenter)
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				5039
			</td>
			<td>
				Parallels Plesk v10+/v11+ for VPS Unlimited Domains (Inside DataCenter)
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				5040
			</td>
			<td>
				Parallels Plesk v10+/v11+ for VPS Unlimited Domains (Outside DataCenter)
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				5041
			</td>
			<td>
				Parallels Plesk v10+/v11+ for Windows for VPS Unlimited Domains (Inside DataCenter)
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				5042
			</td>
			<td>
				Parallels Plesk v10+/v11+ for Windows for VPS Unlimited Domains (Outside DataCenter)
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				5043
			</td>
			<td>
				Parallels Plesk v10+/v11+ for VPS 100 Domains (Inside DataCenter)
			</td>
			<td>
				5
			</td>
		</tr>
		<tr>
			<td>
				5044
			</td>
			<td>
				Parallels Plesk v10+/v11+ for VPS 100 Domains (Outside DataCenter)
			</td>
			<td>
				5
			</td>
		</tr>
		<tr>
			<td>
				5045
			</td>
			<td>
				Parallels Plesk v10+/v11+ for Windows 100 Domains (Inside DaCenter)
			</td>
			<td>
				5
			</td>
		</tr>
		<tr>
			<td>
				5046
			</td>
			<td>
				Parallels Plesk v10+/v11+ for Windows 100 Domains (Outside DataCenter)
			</td>
			<td>
				5
			</td>
		</tr>
		<tr>
			<td>
				5047
			</td>
			<td>
				Parallels Plesk v10+/v11+ 100 Domains (Inside DataCenter)
			</td>
			<td>
				5
			</td>
		</tr>
		<tr>
			<td>
				5048
			</td>
			<td>
				Parallels Plesk v10+/v11+ 100 Domains (Outside DataCenter)
			</td>
			<td>
				5
			</td>
		</tr>
		<tr>
			<td>
				5049
			</td>
			<td>
				Parallels Plesk v10+/v11+ for VZ 100 Domains (Inside DataCenter)
			</td>
			<td>
				4
			</td>
		</tr>
		<tr>
			<td>
				5050
			</td>
			<td>
				Parallels Plesk v10+/v11+ for VZ 100 Domains (Outside DataCenter)
			</td>
			<td>
				4
			</td>
		</tr>
		<tr>
			<td>
				5051
			</td>
			<td>
				Parallels Plesk v10+/v11+ for VZ 100 Domains (Inside DataCenter)
			</td>
			<td>
				4
			</td>
		</tr>
		<tr>
			<td>
				5052
			</td>
			<td>
				Parallels Plesk v10+/v11+ for VZ 100 Domains (Outside DataCenter)
			</td>
			<td>
				4
			</td>
		</tr>
		<tr>
			<td>
				5053
			</td>
			<td>
				Plesk v12 Web Admin Edition for Virtual Machines
			</td>
			<td>
				9
			</td>
		</tr>
		<tr>
			<td>
				5054
			</td>
			<td>
				Plesk v12 Web Admin Edition for Dedicated Servers
			</td>
			<td>
				9
			</td>
		</tr>
		<tr>
			<td>
				5057
			</td>
			<td>
				Plesk v12 Web Pro Edition for Virtual Machines
			</td>
			<td>
				10
			</td>
		</tr>
		<tr>
			<td>
				5058
			</td>
			<td>
				Plesk v12 Web Pro Edition for Dedicated Servers
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				5059
			</td>
			<td>
				Plesk v12 Web Host Edition for Virtual Machines
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				5060
			</td>
			<td>
				Plesk v12 Web Host Edition for Dedicated Servers
			</td>
			<td>
				35
			</td>
		</tr>
		<tr>
			<td>
				5061
			</td>
			<td>
				Plesk v12 Web ProEdition with CloudLinux for Virtual Machines
			</td>
			<td>
				20
			</td>
		</tr>
		<tr>
			<td>
				5062
			</td>
			<td>
				Plesk v12 Web ProEdition with CloudLinux for Dedicated Servers
			</td>
			<td>
				25
			</td>
		</tr>
		<tr>
			<td>
				5063
			</td>
			<td>
				Plesk v12 Web HostEdition with CloudLinux for Virtual Machines
			</td>
			<td>
				25
			</td>
		</tr>
		<tr>
			<td>
				5064
			</td>
			<td>
				Plesk v12 Web HostEdition with CloudLinux for Dedicated Servers
			</td>
			<td>
				45
			</td>
		</tr>
		<tr>
			<td>
				5066
			</td>
			<td>
				DirectAdmin for CentOS 5 64-bit
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				5067
			</td>
			<td>
				DirectAdmin for CentOS 6 32-bit
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				5068
			</td>
			<td>
				DirectAdmin for CentOS 6 64-bit
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				5069
			</td>
			<td>
				DirectAdmin for CentOS 7 64-bit
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				5070
			</td>
			<td>
				DirectAdmin for FreeBSD 8.x 64-bit
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				5071
			</td>
			<td>
				DirectAdmin for FreeBSD 9.x 32-bit
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				5072
			</td>
			<td>
				DirectAdmin for FreeBSD 9.x 64-bit
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				5073
			</td>
			<td>
				DirectAdmin for Debian 6.0 32-bit
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				5074
			</td>
			<td>
				DirectAdmin for Debian 6.0 64-bit
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				5075
			</td>
			<td>
				DirectAdmin for Debian 7.0 32-bit
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				5076
			</td>
			<td>
				DirectAdmin for Debian 7.0 64-bit
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				5077
			</td>
			<td>
				DirectAdmin for Debian 8.0 64-bit
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				5078
			</td>
			<td>
				DirectAdmin for Debian 5.0 32-bit
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				5079
			</td>
			<td>
				DirectAdmin for Debian 5.0 64-bit
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				5080
			</td>
			<td>
				DirectAdmin for CentOS 5 32-bit
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10613
			</td>
			<td>
				Webuzo
			</td>
			<td>
				0
			</td>
		</tr>
		<tr>
			<td>
				10614
			</td>
			<td>
				Webuzo VPS
			</td>
			<td>
				0
			</td>
		</tr>
	</tbody>
</table>


