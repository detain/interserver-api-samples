
## Get VPS Slice Types

### About

**API Function Name: get_vps_slice_types**

We have several types of Servers available for use with VPS Hosting. You can get
* a list of the types available and  there cost per slice/unit by making a call to
* this function


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$client = SOAP::Lite
	-> uri('urn:myapi')
	-> proxy('https://my.interserver.net/api.php?wsdl');
$res = $client
	-> get_vps_slice_types();
die $res->faultstring if ($res->fault);
print "Response:\n",$res->result,"\n";

```

```python
#!/usr/bin/python
from suds.client import Client
client = Client("https://my.interserver.net/api.php?wsdl")
#print client ## shows detailed client info
result = client.service.get_vps_slice_types()
print result

```

```ruby
#!/usr/bin/env ruby
require 'savon'

client = Savon.client(wsdl: 'https://my.interserver.net/api.php?wsdl')
response = client.call(:get_vps_slice_types)
print response.body[:get_vps_slice_types_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$res = $client->get_vps_slice_types();
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
name|string|Country Name in all Capitols
type|int|Coupon Type, 1: Percentage Off   2: Fixed Amount Off  3: Specified Sale Price
cost|float|
buyable|int|


### Example Response

<table>
	<thead>
		<tr>
			<th>
				Name
			</th>
			<th>
				Type
			</th>
			<th>
				Cost
			</th>
			<th>
				Buyable
			</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>
				OpenVZ VPS Slice
			</td>
			<td>
				6
			</td>
			<td>
				6
			</td>
			<td>
				1
			</td>
		</tr>
		<tr>
			<td>
				KVM Windows VPS Slice
			</td>
			<td>
				1
			</td>
			<td>
				10
			</td>
			<td>
				1
			</td>
		</tr>
		<tr>
			<td>
				KVM Linux VPS Slice
			</td>
			<td>
				2
			</td>
			<td>
				6
			</td>
			<td>
				1
			</td>
		</tr>
		<tr>
			<td>
				Cloud KVM Windows VPS Slice
			</td>
			<td>
				3
			</td>
			<td>
				22
			</td>
			<td>
				0
			</td>
		</tr>
		<tr>
			<td>
				Cloud KVM Linux VPS Slice
			</td>
			<td>
				4
			</td>
			<td>
				20
			</td>
			<td>
				0
			</td>
		</tr>
		<tr>
			<td>
				SSD OpenVZ VPS Slice
			</td>
			<td>
				5
			</td>
			<td>
				9
			</td>
			<td>
				0
			</td>
		</tr>
		<tr>
			<td>
				LXC VPS Slice
			</td>
			<td>
				9
			</td>
			<td>
				6
			</td>
			<td>
				0
			</td>
		</tr>
		<tr>
			<td>
				Xen Windows VPS Slice
			</td>
			<td>
				7
			</td>
			<td>
				6
			</td>
			<td>
				0
			</td>
		</tr>
		<tr>
			<td>
				Xen Linux VPS Slice
			</td>
			<td>
				8
			</td>
			<td>
				6
			</td>
			<td>
				0
			</td>
		</tr>
		<tr>
			<td>
				VMware VPS Slice
			</td>
			<td>
				10
			</td>
			<td>
				10
			</td>
			<td>
				0
			</td>
		</tr>
		<tr>
			<td>
				Hyper-V VPS Slice
			</td>
			<td>
				11
			</td>
			<td>
				10
			</td>
			<td>
				1
			</td>
		</tr>
		<tr>
			<td>
				Virtuozzo VPS Slice
			</td>
			<td>
				12
			</td>
			<td>
				6
			</td>
			<td>
				1
			</td>
		</tr>
		<tr>
			<td>
				SSD Virtuozzo VPS Slice
			</td>
			<td>
				13
			</td>
			<td>
				9
			</td>
			<td>
				0
			</td>
		</tr>
		<tr>
			<td>
				KVM Storage
			</td>
			<td>
				16
			</td>
			<td>
				6
			</td>
			<td>
				1
			</td>
		</tr>
		<tr>
			<td>
				OpenVZ IPv6 Only VPS Slice
			</td>
			<td>
				6
			</td>
			<td>
				5
			</td>
			<td>
				1
			</td>
		</tr>
		<tr>
			<td>
				KVM Windows IPv6 Only VPS Slice
			</td>
			<td>
				1
			</td>
			<td>
				9
			</td>
			<td>
				1
			</td>
		</tr>
		<tr>
			<td>
				KVM Linux IPv6 Only VPS Slice
			</td>
			<td>
				2
			</td>
			<td>
				5
			</td>
			<td>
				1
			</td>
		</tr>
		<tr>
			<td>
				Hyper-V IPv6 Only VPS Slice
			</td>
			<td>
				11
			</td>
			<td>
				9
			</td>
			<td>
				1
			</td>
		</tr>
		<tr>
			<td>
				Virtuozzo IPv6 Only VPS Slice
			</td>
			<td>
				12
			</td>
			<td>
				5
			</td>
			<td>
				1
			</td>
		</tr>
		<tr>
			<td>
				KVM IPv6 Only Storage
			</td>
			<td>
				16
			</td>
			<td>
				5
			</td>
			<td>
				1
			</td>
		</tr>
	</tbody>
</table>


