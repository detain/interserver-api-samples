
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
				10
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
				10
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
				15
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
				25
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
				25
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
				40
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
				25
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
				35
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
				50
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
		<tr>
			<td>
				10677
			</td>
			<td>
				ImunifyAV+
			</td>
			<td>
				6
			</td>
		</tr>
		<tr>
			<td>
				10678
			</td>
			<td>
				Imunify360 single user
			</td>
			<td>
				6
			</td>
		</tr>
		<tr>
			<td>
				10679
			</td>
			<td>
				Imunify360 up to 30 users
			</td>
			<td>
				11
			</td>
		</tr>
		<tr>
			<td>
				10680
			</td>
			<td>
				Imunify360 up to 250 users
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10681
			</td>
			<td>
				Imunify360 unlimited users
			</td>
			<td>
				20
			</td>
		</tr>
		<tr>
			<td>
				10682
			</td>
			<td>
				cPanel Autoscale (Internal)
			</td>
			<td>
				40
			</td>
		</tr>
		<tr>
			<td>
				10683
			</td>
			<td>
				cPanel Autoscale (External)
			</td>
			<td>
				39.6
			</td>
		</tr>
		<tr>
			<td>
				10684
			</td>
			<td>
				DirectAdmin for RedHat 7.2 VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10685
			</td>
			<td>
				DirectAdmin for RedHat 7.3 VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10686
			</td>
			<td>
				DirectAdmin for RedHat 8.0 VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10687
			</td>
			<td>
				DirectAdmin for RedHat 9.0 VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10688
			</td>
			<td>
				DirectAdmin for Fedora 1.x / 2.x VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10689
			</td>
			<td>
				DirectAdmin for Fedora 3 VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10690
			</td>
			<td>
				DirectAdmin for Fedora 4 VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10691
			</td>
			<td>
				DirectAdmin for Fedora 5 / 6  VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10692
			</td>
			<td>
				DirectAdmin for Fedora 7 / Fedora 8 VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10693
			</td>
			<td>
				DirectAdmin for Fedora 9 VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10694
			</td>
			<td>
				DirectAdmin for CentOS 3.x VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10695
			</td>
			<td>
				DirectAdmin for CentOS 4.x (all) VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10696
			</td>
			<td>
				DirectAdmin for CentOS 4.4/4.5 (only) VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10697
			</td>
			<td>
				DirectAdmin for CentOS 4.1-4.4 64-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10698
			</td>
			<td>
				DirectAdmin for CentOS 5 VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10699
			</td>
			<td>
				DirectAdmin for CentOS 5 64-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10700
			</td>
			<td>
				DirectAdmin for CentOS 6 32-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10701
			</td>
			<td>
				DirectAdmin for CentOS 6 64-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10702
			</td>
			<td>
				DirectAdmin for CentOS 7 64-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10703
			</td>
			<td>
				DirectAdmin for CentOS 8 64-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10704
			</td>
			<td>
				DirectAdmin for FreeBSD 4.x VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10705
			</td>
			<td>
				DirectAdmin for FreeBSD 5.x VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10706
			</td>
			<td>
				DirectAdmin for FreeBSD 5.3/5.4 VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10707
			</td>
			<td>
				DirectAdmin for FreeBSD 6.x VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10708
			</td>
			<td>
				DirectAdmin for FreeBSD 7.x VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10709
			</td>
			<td>
				DirectAdmin for FreeBSD 7.x 64-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10710
			</td>
			<td>
				DirectAdmin for FreeBSD 8.x 64-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10711
			</td>
			<td>
				DirectAdmin for FreeBSD 9.x 32-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10712
			</td>
			<td>
				DirectAdmin for FreeBSD 9.x 64-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10713
			</td>
			<td>
				DirectAdmin for FreeBSD 11 64-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10714
			</td>
			<td>
				DirectAdmin for FreeBSD 12 64-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10715
			</td>
			<td>
				DirectAdmin for Debian 4.0 VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10716
			</td>
			<td>
				DirectAdmin for Debian 5.0 VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10717
			</td>
			<td>
				DirectAdmin for Debian 5.0 64-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10718
			</td>
			<td>
				DirectAdmin for Debian 6.0 32-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10719
			</td>
			<td>
				DirectAdmin for Debian 6.0 64-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10720
			</td>
			<td>
				DirectAdmin for Debian 7.0 32-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10721
			</td>
			<td>
				DirectAdmin for Debian 7.0 64-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10722
			</td>
			<td>
				DirectAdmin for Debian 8.0 64-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10723
			</td>
			<td>
				DirectAdmin for Debian 9 64-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10724
			</td>
			<td>
				DirectAdmin for Debian 10 64-bit VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10725
			</td>
			<td>
				DirectAdmin for Linux 64-bit static VPS
			</td>
			<td>
				8
			</td>
		</tr>
		<tr>
			<td>
				10726
			</td>
			<td>
				DirectAdmin for RedHat 7.2 Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10727
			</td>
			<td>
				DirectAdmin for RedHat 7.3 Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10728
			</td>
			<td>
				DirectAdmin for RedHat 8.0 Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10729
			</td>
			<td>
				DirectAdmin for RedHat 9.0 Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10730
			</td>
			<td>
				DirectAdmin for Fedora 1.x / 2.x Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10731
			</td>
			<td>
				DirectAdmin for Fedora 3 Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10732
			</td>
			<td>
				DirectAdmin for Fedora 4 Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10733
			</td>
			<td>
				DirectAdmin for Fedora 5 / 6  Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10734
			</td>
			<td>
				DirectAdmin for Fedora 7 / Fedora 8 Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10735
			</td>
			<td>
				DirectAdmin for Fedora 9 Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10736
			</td>
			<td>
				DirectAdmin for CentOS 3.x Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10737
			</td>
			<td>
				DirectAdmin for CentOS 4.x (all) Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10738
			</td>
			<td>
				DirectAdmin for CentOS 4.4/4.5 (only) Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10739
			</td>
			<td>
				DirectAdmin for CentOS 4.1-4.4 64-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10740
			</td>
			<td>
				DirectAdmin for CentOS 5 Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10741
			</td>
			<td>
				DirectAdmin for CentOS 5 64-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10742
			</td>
			<td>
				DirectAdmin for CentOS 6 32-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10743
			</td>
			<td>
				DirectAdmin for CentOS 6 64-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10744
			</td>
			<td>
				DirectAdmin for CentOS 7 64-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10745
			</td>
			<td>
				DirectAdmin for CentOS 8 64-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10746
			</td>
			<td>
				DirectAdmin for FreeBSD 4.x Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10747
			</td>
			<td>
				DirectAdmin for FreeBSD 5.x Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10748
			</td>
			<td>
				DirectAdmin for FreeBSD 5.3/5.4 Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10749
			</td>
			<td>
				DirectAdmin for FreeBSD 6.x Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10750
			</td>
			<td>
				DirectAdmin for FreeBSD 7.x Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10751
			</td>
			<td>
				DirectAdmin for FreeBSD 7.x 64-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10752
			</td>
			<td>
				DirectAdmin for FreeBSD 8.x 64-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10753
			</td>
			<td>
				DirectAdmin for FreeBSD 9.x 32-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10754
			</td>
			<td>
				DirectAdmin for FreeBSD 9.x 64-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10755
			</td>
			<td>
				DirectAdmin for FreeBSD 11 64-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10756
			</td>
			<td>
				DirectAdmin for FreeBSD 12 64-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10757
			</td>
			<td>
				DirectAdmin for Debian 4.0 Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10758
			</td>
			<td>
				DirectAdmin for Debian 5.0 Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10759
			</td>
			<td>
				DirectAdmin for Debian 5.0 64-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10760
			</td>
			<td>
				DirectAdmin for Debian 6.0 32-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10761
			</td>
			<td>
				DirectAdmin for Debian 6.0 64-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10762
			</td>
			<td>
				DirectAdmin for Debian 7.0 32-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10763
			</td>
			<td>
				DirectAdmin for Debian 7.0 64-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10764
			</td>
			<td>
				DirectAdmin for Debian 8.0 64-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10765
			</td>
			<td>
				DirectAdmin for Debian 9 64-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10766
			</td>
			<td>
				DirectAdmin for Debian 10 64-bit Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10767
			</td>
			<td>
				DirectAdmin for Linux 64-bit static Server
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10769
			</td>
			<td>
				cPanel Autoscale Cloud (Internal)
			</td>
			<td>
				15
			</td>
		</tr>
		<tr>
			<td>
				10770
			</td>
			<td>
				cPanel Autoscale Cloud (External)
			</td>
			<td>
				17.6
			</td>
		</tr>
		<tr>
			<td>
				10882
			</td>
			<td>
				Free DirectAdmin for CentOS 6 64-bit VPS
			</td>
			<td>
				0
			</td>
		</tr>
		<tr>
			<td>
				10889
			</td>
			<td>
				Free DirectAdmin for CentOS 7 64-bit VPS
			</td>
			<td>
				0
			</td>
		</tr>
		<tr>
			<td>
				10896
			</td>
			<td>
				Free DirectAdmin for CentOS 8 64-bit VPS
			</td>
			<td>
				0
			</td>
		</tr>
		<tr>
			<td>
				10903
			</td>
			<td>
				Free DirectAdmin for FreeBSD 11 64-bit VPS
			</td>
			<td>
				0
			</td>
		</tr>
		<tr>
			<td>
				10910
			</td>
			<td>
				Free DirectAdmin for FreeBSD 12 64-bit VPS
			</td>
			<td>
				0
			</td>
		</tr>
		<tr>
			<td>
				10917
			</td>
			<td>
				Free DirectAdmin for Debian 8 64-bit VPS
			</td>
			<td>
				0
			</td>
		</tr>
		<tr>
			<td>
				10924
			</td>
			<td>
				Free DirectAdmin for Debian 9 64-bit VPS
			</td>
			<td>
				0
			</td>
		</tr>
		<tr>
			<td>
				10931
			</td>
			<td>
				Free DirectAdmin for Debian 10 64-bit VPS
			</td>
			<td>
				0
			</td>
		</tr>
		<tr>
			<td>
				10938
			</td>
			<td>
				Free DirectAdmin for Debian 11 64-bit VPS
			</td>
			<td>
				0
			</td>
		</tr>
		<tr>
			<td>
				10952
			</td>
			<td>
				LiteSpeed Site Owner
			</td>
			<td>
				9
			</td>
		</tr>
		<tr>
			<td>
				10959
			</td>
			<td>
				LiteSpeed Site Owner Plus
			</td>
			<td>
				14.5
			</td>
		</tr>
		<tr>
			<td>
				10966
			</td>
			<td>
				LiteSpeed Web Host Lite
			</td>
			<td>
				23.5
			</td>
		</tr>
		<tr>
			<td>
				10973
			</td>
			<td>
				LiteSpeed Web Host Essential
			</td>
			<td>
				32.5
			</td>
		</tr>
		<tr>
			<td>
				10980
			</td>
			<td>
				LiteSpeed Web Host Professional
			</td>
			<td>
				41.5
			</td>
		</tr>
		<tr>
			<td>
				10987
			</td>
			<td>
				LiteSpeed Web Host Enterprise
			</td>
			<td>
				58.5
			</td>
		</tr>
		<tr>
			<td>
				10994
			</td>
			<td>
				LiteSpeed Web Host Elite
			</td>
			<td>
				83
			</td>
		</tr>
	</tbody>
</table>


