
## Mail Get Client Invoices

### About

**API Function Name: api_mail_get_client_invoices**

This Function Applies to the Mail Services services.
* Gets a list of all the invoices.


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
	-> api_mail_get_client_invoices($sid);
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
result = client.service.api_mail_get_client_invoices()
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
	:api_mail_get_client_invoices, message: {
		sid: ARGV[0],})
print response.body[:api_mail_get_client_invoices_response][:return],"\n"

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
	$res = $client->api_mail_get_client_invoices($sid);
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
invoices_id|int|ID of the Invoice used for referencing
invoices_description|string|Description of what the Invoice was for
invoices_amount|float|Cost of the Invoice
invoices_custid|int|ID of the Customer this Invoice is for
invoices_type|int|The Type of Invoice (1 = charge, 10+ are payment types)
invoices_date|string|Date the Invoice was Created
invoices_group|int|Billing Group the Invoice falls under, Not currently used
invoices_extra|int|If type 1 invoice this points to the repeat invoice id, otherwise points to the id of the charge invoice its a payment for.
invoices_paid|int|Whether or not the Invoice was paid (if applicable)
invoices_module|string|Module the Invoice was for.  You can use [get_modules](#get-modules) to get a list of available modules.
invoices_due_date|string|Date the Invoice is Due
invoices_service|int|ID of the Service/Order this Invoice is for such as 1000 if the order was vps1000 and the module was vps
invoices_deleted|int|Deleted Flag
invoices_currency|string|


### Example Response

<table>
	<thead>
		<tr>
			<th>
				Invoices Id
			</th>
			<th>
				Invoices Description
			</th>
			<th>
				Invoices Amount
			</th>
			<th>
				Invoices Custid
			</th>
			<th>
				Invoices Type
			</th>
			<th>
				Invoices Date
			</th>
			<th>
				Invoices Group
			</th>
			<th>
				Invoices Extra
			</th>
			<th>
				Invoices Paid
			</th>
			<th>
				Invoices Module
			</th>
			<th>
				Invoices Due Date
			</th>
			<th>
				Invoices Service
			</th>
			<th>
				Invoices Deleted
			</th>
			<th>
				Invoices Currency
			</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>
				7514880
			</td>
			<td>
				(Repeat Invoice: 19156909) MailBaby Mail
			</td>
			<td>
				1
			</td>
			<td>
				160884
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-24 01:38:45
			</td>
			<td>
				0
			</td>
			<td>
				19156909
			</td>
			<td>
				0
			</td>
			<td>
				mail
			</td>
			<td>
				2021-03-10 01:38:45
			</td>
			<td>
				8556
			</td>
			<td>
				0
			</td>
			<td>
				USD
			</td>
		</tr>
		<tr>
			<td>
				7529153
			</td>
			<td>
				(Repeat Invoice: 19158862) MailBaby Mail
			</td>
			<td>
				1
			</td>
			<td>
				160884
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-24 20:41:08
			</td>
			<td>
				0
			</td>
			<td>
				19158862
			</td>
			<td>
				0
			</td>
			<td>
				mail
			</td>
			<td>
				2021-03-10 20:41:08
			</td>
			<td>
				8626
			</td>
			<td>
				0
			</td>
			<td>
				USD
			</td>
		</tr>
		<tr>
			<td>
				7530357
			</td>
			<td>
				(Repeat Invoice: 19159254) MailBaby Mail
			</td>
			<td>
				1
			</td>
			<td>
				160884
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-25 03:47:59
			</td>
			<td>
				0
			</td>
			<td>
				19159254
			</td>
			<td>
				0
			</td>
			<td>
				mail
			</td>
			<td>
				2021-03-11 03:47:59
			</td>
			<td>
				8640
			</td>
			<td>
				0
			</td>
			<td>
				USD
			</td>
		</tr>
		<tr>
			<td>
				7530371
			</td>
			<td>
				(Repeat Invoice: 19159261) MailBaby Mail
			</td>
			<td>
				1
			</td>
			<td>
				160884
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-25 03:53:53
			</td>
			<td>
				0
			</td>
			<td>
				19159261
			</td>
			<td>
				0
			</td>
			<td>
				mail
			</td>
			<td>
				2021-03-11 03:53:53
			</td>
			<td>
				8647
			</td>
			<td>
				0
			</td>
			<td>
				USD
			</td>
		</tr>
		<tr>
			<td>
				7530378
			</td>
			<td>
				(Repeat Invoice: 19159268) MailBaby Mail
			</td>
			<td>
				1
			</td>
			<td>
				160884
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-25 03:58:33
			</td>
			<td>
				0
			</td>
			<td>
				19159268
			</td>
			<td>
				0
			</td>
			<td>
				mail
			</td>
			<td>
				2021-03-11 03:58:33
			</td>
			<td>
				8654
			</td>
			<td>
				0
			</td>
			<td>
				USD
			</td>
		</tr>
		<tr>
			<td>
				7530434
			</td>
			<td>
				(Repeat Invoice: 19159282) MailBaby Mail
			</td>
			<td>
				1
			</td>
			<td>
				160884
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-25 04:12:02
			</td>
			<td>
				0
			</td>
			<td>
				19159282
			</td>
			<td>
				0
			</td>
			<td>
				mail
			</td>
			<td>
				2021-03-11 04:12:02
			</td>
			<td>
				8661
			</td>
			<td>
				0
			</td>
			<td>
				USD
			</td>
		</tr>
		<tr>
			<td>
				7531463
			</td>
			<td>
				(Repeat Invoice: 19159450) MailBaby Mail
			</td>
			<td>
				1
			</td>
			<td>
				160884
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-25 06:25:42
			</td>
			<td>
				0
			</td>
			<td>
				19159450
			</td>
			<td>
				0
			</td>
			<td>
				mail
			</td>
			<td>
				2021-03-11 06:25:42
			</td>
			<td>
				8668
			</td>
			<td>
				0
			</td>
			<td>
				USD
			</td>
		</tr>
		<tr>
			<td>
				7531484
			</td>
			<td>
				(Repeat Invoice: 19159457) MailBaby Mail
			</td>
			<td>
				1
			</td>
			<td>
				160884
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-25 06:30:55
			</td>
			<td>
				0
			</td>
			<td>
				19159457
			</td>
			<td>
				0
			</td>
			<td>
				mail
			</td>
			<td>
				2021-03-11 06:30:55
			</td>
			<td>
				8675
			</td>
			<td>
				0
			</td>
			<td>
				USD
			</td>
		</tr>
		<tr>
			<td>
				7531491
			</td>
			<td>
				(Repeat Invoice: 19159464) MailBaby Mail
			</td>
			<td>
				1
			</td>
			<td>
				160884
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-25 06:31:22
			</td>
			<td>
				0
			</td>
			<td>
				19159464
			</td>
			<td>
				0
			</td>
			<td>
				mail
			</td>
			<td>
				2021-03-11 06:31:22
			</td>
			<td>
				8682
			</td>
			<td>
				0
			</td>
			<td>
				USD
			</td>
		</tr>
		<tr>
			<td>
				7531540
			</td>
			<td>
				(Repeat Invoice: 19159478) MailBaby Mail
			</td>
			<td>
				1
			</td>
			<td>
				160884
			</td>
			<td>
				1
			</td>
			<td>
				2021-02-25 06:33:14
			</td>
			<td>
				0
			</td>
			<td>
				19159478
			</td>
			<td>
				0
			</td>
			<td>
				mail
			</td>
			<td>
				2021-03-11 06:33:14
			</td>
			<td>
				8689
			</td>
			<td>
				0
			</td>
			<td>
				USD
			</td>
		</tr>
		<tr>
			<td>
				7680075
			</td>
			<td>
				(Repeat Invoice: 19171275) MailBaby Mail
			</td>
			<td>
				1
			</td>
			<td>
				160884
			</td>
			<td>
				1
			</td>
			<td>
				2021-03-05 13:42:23
			</td>
			<td>
				0
			</td>
			<td>
				19171275
			</td>
			<td>
				0
			</td>
			<td>
				mail
			</td>
			<td>
				2021-03-19 13:42:23
			</td>
			<td>
				9076
			</td>
			<td>
				0
			</td>
			<td>
				USD
			</td>
		</tr>
		<tr>
			<td>
				23785939
			</td>
			<td>
				(Repeat Invoice: 20555866) MailBaby Mail
			</td>
			<td>
				1
			</td>
			<td>
				160884
			</td>
			<td>
				1
			</td>
			<td>
				2023-11-02 20:21:57
			</td>
			<td>
				0
			</td>
			<td>
				20555866
			</td>
			<td>
				0
			</td>
			<td>
				mail
			</td>
			<td>
				2023-11-16 20:21:57
			</td>
			<td>
				50367
			</td>
			<td>
				0
			</td>
			<td>
				USD
			</td>
		</tr>
	</tbody>
</table>


