
## Mail Get Services

### About

**API Function Name: api_mail_get_services**

This Function Applies to the Mail Services services.
* Gets List of Services


### Sample Code

```perl
#!/usr/bin/perl -w
use SOAP::Lite;

$username = $ARGV[0];
$password = $ARGV[1];
$client = SOAP::Lite
	-> uri('urn:myapi')
	-> proxy('https://my.interserver.net/api.php?wsdl');
$sid = $client
	-> api_login($username, $password)
	-> result;
if (length($sid) == 0)  {
	die "Got A Blank Session";
} 
$res = $client
	-> api_mail_get_services($sid);
die $res->faultstring if ($res->fault);
print "Response:\n",$res->result,"\n";

```

```python
#!/usr/bin/python
from suds.client import Client
client = Client("https://my.interserver.net/api.php?wsdl")
#print client ## shows detailed client info
sid = client.service.api_login(argv[1], argv[2])
if (sid == '')
	die("Got a blank session")
print "Got Session ID "+sid+"\n"
  
result = client.service.api_mail_get_services()
print result

```

```ruby
#!/usr/bin/env ruby
require 'savon'

client = Savon.client(wsdl: 'https://my.interserver.net/api.php?wsdl')
response = client.call(
	:api_login, message: {
		username: ARGV[0],
		password: ARGV[1]
})
sid = response.body[:api_login_response][:return]
if (sid == "")
	die("Got a blank session id");
print "got session id ",sid,"\n"
response = client.call(
	:api_mail_get_services, message: { 
		sid: ARGV[0], 
})
print response.body[:api_mail_get_services_response][:return],"\n"

```

```php
<?php
ini_set("soap.wsdl_cache_enabled", "0");
$username = $_SERVER['argv'][1];
$password = $_SERVER['argv'][2];
$client = new SoapClient("https://my.interserver.net/api.php?wsdl");
try  { 
	$sid = $client->api_login($username, $password);
	if (strlen($sid) == 0)
		die("Got A Blank Session");
	$res = $client->api_mail_get_services($sid);
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
sid|string|the *Session ID* you get from the [login](#login) call


### Response

This function returns an associative array with the following fields

Field|Type|Description
-----|----|-----------
mail_id|int|Service ID
mail_server|int|ID of Server the mail Resides on
mail_username|string|Username on the mail Server associated with this Order
mail_type|int|Package ID
mail_cost|float|Service Cost
mail_currency|string|Currency
mail_frequency|int|Billing Interval
mail_order_date|string|Date the Order was Placed
mail_custid|int|Customer ID
mail_quota|int|Disk Quota
mail_ip|string|IP Address of mail
mail_status|string|Billing Status
mail_invoice|int|Invoice ID
mail_coupon|int|Coupon ID
mail_extra|string|Additional mail Information
mail_server_status|string|Server-Side status of this website
mail_comment|string|Comments


### Example Response

<table>
	<thead>
		<tr>
			<th>
				Mail Id
			</th>
			<th>
				Mail Server
			</th>
			<th>
				Mail Username
			</th>
			<th>
				Mail Type
			</th>
			<th>
				Mail Cost
			</th>
			<th>
				Mail Currency
			</th>
			<th>
				Mail Frequency
			</th>
			<th>
				Mail Order Date
			</th>
			<th>
				Mail Custid
			</th>
			<th>
				Mail Quota
			</th>
			<th>
				Mail Ip
			</th>
			<th>
				Mail Status
			</th>
			<th>
				Mail Invoice
			</th>
			<th>
				Mail Coupon
			</th>
			<th>
				Mail Extra
			</th>
			<th>
				Mail Server Status
			</th>
			<th>
				Mail Comment
			</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>
				8556
			</td>
			<td>
				
			</td>
			<td>
				
			</td>
			<td>
				10880
			</td>
			<td>
				1
			</td>
			<td>
				USD
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-24 01:38:45
			</td>
			<td>
				160884
			</td>
			<td>
				0
			</td>
			<td>
				
			</td>
			<td>
				pending
			</td>
			<td>
				19156909
			</td>
			<td>
				0
			</td>
			<td>
				[]
			</td>
			<td>
				
			</td>
			<td>
				
			</td>
		</tr>
		<tr>
			<td>
				8626
			</td>
			<td>
				
			</td>
			<td>
				
			</td>
			<td>
				10880
			</td>
			<td>
				1
			</td>
			<td>
				USD
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-24 20:41:08
			</td>
			<td>
				160884
			</td>
			<td>
				0
			</td>
			<td>
				
			</td>
			<td>
				pending
			</td>
			<td>
				19158862
			</td>
			<td>
				0
			</td>
			<td>
				[]
			</td>
			<td>
				
			</td>
			<td>
				
			</td>
		</tr>
		<tr>
			<td>
				8640
			</td>
			<td>
				
			</td>
			<td>
				
			</td>
			<td>
				10880
			</td>
			<td>
				1
			</td>
			<td>
				USD
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-25 03:47:59
			</td>
			<td>
				160884
			</td>
			<td>
				0
			</td>
			<td>
				
			</td>
			<td>
				pending
			</td>
			<td>
				19159254
			</td>
			<td>
				0
			</td>
			<td>
				[]
			</td>
			<td>
				
			</td>
			<td>
				
			</td>
		</tr>
		<tr>
			<td>
				8647
			</td>
			<td>
				
			</td>
			<td>
				
			</td>
			<td>
				10880
			</td>
			<td>
				1
			</td>
			<td>
				USD
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-25 03:53:53
			</td>
			<td>
				160884
			</td>
			<td>
				0
			</td>
			<td>
				
			</td>
			<td>
				pending
			</td>
			<td>
				19159261
			</td>
			<td>
				0
			</td>
			<td>
				[]
			</td>
			<td>
				
			</td>
			<td>
				
			</td>
		</tr>
		<tr>
			<td>
				8654
			</td>
			<td>
				
			</td>
			<td>
				
			</td>
			<td>
				10880
			</td>
			<td>
				1
			</td>
			<td>
				USD
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-25 03:58:33
			</td>
			<td>
				160884
			</td>
			<td>
				0
			</td>
			<td>
				
			</td>
			<td>
				pending
			</td>
			<td>
				19159268
			</td>
			<td>
				0
			</td>
			<td>
				[]
			</td>
			<td>
				
			</td>
			<td>
				
			</td>
		</tr>
		<tr>
			<td>
				8661
			</td>
			<td>
				
			</td>
			<td>
				
			</td>
			<td>
				10880
			</td>
			<td>
				1
			</td>
			<td>
				USD
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-25 04:12:02
			</td>
			<td>
				160884
			</td>
			<td>
				0
			</td>
			<td>
				
			</td>
			<td>
				pending
			</td>
			<td>
				19159282
			</td>
			<td>
				0
			</td>
			<td>
				[]
			</td>
			<td>
				
			</td>
			<td>
				
			</td>
		</tr>
		<tr>
			<td>
				8668
			</td>
			<td>
				
			</td>
			<td>
				
			</td>
			<td>
				10880
			</td>
			<td>
				1
			</td>
			<td>
				USD
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-25 06:25:42
			</td>
			<td>
				160884
			</td>
			<td>
				0
			</td>
			<td>
				
			</td>
			<td>
				pending
			</td>
			<td>
				19159450
			</td>
			<td>
				0
			</td>
			<td>
				[]
			</td>
			<td>
				
			</td>
			<td>
				
			</td>
		</tr>
		<tr>
			<td>
				8675
			</td>
			<td>
				
			</td>
			<td>
				
			</td>
			<td>
				10880
			</td>
			<td>
				1
			</td>
			<td>
				USD
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-25 06:30:55
			</td>
			<td>
				160884
			</td>
			<td>
				0
			</td>
			<td>
				
			</td>
			<td>
				pending
			</td>
			<td>
				19159457
			</td>
			<td>
				0
			</td>
			<td>
				[]
			</td>
			<td>
				
			</td>
			<td>
				
			</td>
		</tr>
		<tr>
			<td>
				8682
			</td>
			<td>
				
			</td>
			<td>
				
			</td>
			<td>
				10880
			</td>
			<td>
				1
			</td>
			<td>
				USD
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-25 06:31:22
			</td>
			<td>
				160884
			</td>
			<td>
				0
			</td>
			<td>
				
			</td>
			<td>
				pending
			</td>
			<td>
				19159464
			</td>
			<td>
				0
			</td>
			<td>
				[]
			</td>
			<td>
				
			</td>
			<td>
				
			</td>
		</tr>
	</tbody>
</table>


