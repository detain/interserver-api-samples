<a name="__pageTop"></a>
# BillingApi   { #BillingApi }


All URIs are relative to *https://my.interserver.net/apiv2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**add_account_credit_card**](#add_account_credit_card) | **POST** `/account/creditcards` | Add Credit Card to Account
[**add_billing_credit_card**](#add_billing_credit_card) | **POST** `/billing/creditcards` | Add Credit Card for Billing
[**add_billing_prepay**](#add_billing_prepay) | **POST** `/billing/prepays` | Create Prepay Deposit
[**delete_account_credit_card**](#delete_account_credit_card) | **DELETE** `/account/creditcards/{id}` | Remove Credit Card
[**delete_billing_credit_card**](#delete_billing_credit_card) | **DELETE** `/billing/creditcards/{id}` | Delete Credit Card
[**delete_billing_invoice**](#delete_billing_invoice) | **DELETE** `/billing/invoices/{id}` | Delete Invoice
[**delete_billing_prepay**](#delete_billing_prepay) | **DELETE** `/billing/prepays/{id}` | Delete Prepay Balance
[**get_affiliate_banners**](#get_affiliate_banners) | **GET** `/affiliate/banners` | List Affiliate Banner Assets
[**get_affiliate_rich_report**](#get_affiliate_rich_report) | **GET** `/affiliate/rich_report` | Get Affiliate Performance Report
[**get_affiliate_sales_graph**](#get_affiliate_sales_graph) | **GET** `/affiliate/sales_graph` | Get Affiliate Sales Graph Data
[**get_affiliate_sales_report**](#get_affiliate_sales_report) | **GET** `/affiliate/sales_report` | Get Affiliate Sales Report
[**get_affiliate_traffic_graph**](#get_affiliate_traffic_graph) | **GET** `/affiliate/traffic_graph` | Get Affiliate Traffic Graph Data
[**get_affiliate_web_traffic**](#get_affiliate_web_traffic) | **GET** `/affiliate/web_traffic` | List Affiliate Web Traffic Entries
[**get_billing_cart**](#get_billing_cart) | **GET** `/billing/cart` | Get Shopping Cart Contents
[**get_billing_credit_card_verify**](#get_billing_credit_card_verify) | **GET** `/billing/creditcards/{id}/verify` | Get Credit Card Verification Requirements
[**get_billing_invoice**](#get_billing_invoice) | **GET** `/billing/invoices/{id}` | Get Invoice Details
[**get_billing_invoices**](#get_billing_invoices) | **GET** `/billing/invoices` | List Account Invoices
[**get_billing_pre_pays**](#get_billing_pre_pays) | **GET** `/billing/prepays` | List Prepay Balances
[**get_invoices**](#get_invoices) | **GET** `/invoices` | Get Invoices
[**initiate_payment**](#initiate_payment) | **GET** `/pay/{method}/{invoices}` | Initiate Payment
[**post_billing_credit_card_verify**](#post_billing_credit_card_verify) | **POST** `/billing/creditcards/{id}/verify` | Submit Credit Card Verification
[**update_account_credit_card**](#update_account_credit_card) | **POST** `/account/creditcards/{id}` | Update Credit Card
[**update_affiliate_dock_setup**](#update_affiliate_dock_setup) | **POST** `/affiliate/dock_setup` | Configure Affiliate Dock Settings
[**update_affiliate_landing_page**](#update_affiliate_landing_page) | **POST** `/affiliate/landing_pg` | Configure Affiliate Landing Page
[**update_affiliate_payment_setup**](#update_affiliate_payment_setup) | **POST** `/affiliate/payment_setup` | Configure Affiliate Payout Preferences
[**update_billing_credit_card**](#update_billing_credit_card) | **POST** `/billing/creditcards/{id}` | Update Credit Card Details
[**update_billing_payment_method**](#update_billing_payment_method) | **POST** `/billing/payment_method` | Update Default Payment Method

# **add_account_credit_card**   { #add_account_credit_card }
<a name="add_account_credit_card"></a>

> `add_account_credit_card(name = "",address = "",city = "",state = "",country = "",zip = "",cc = "",ccExp = "",ccCcv2 = "", on_success: Callable, on_failure: Callable)`

Add Credit Card to Account

Adds a new credit card to the account for billing. Card details are validated and stored securely. The card may require verification before it can be used as a payment method.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.add_account_credit_card(
	# name: String = ""   Eg: name_example
	name,
	# address: String = ""   Eg: address_example
	address,
	# city: String = ""   Eg: city_example
	city,
	# state: String = ""   Eg: state_example
	state,
	# country: String = ""   Eg: country_example
	country,
	# zip: String = ""   Eg: zip_example
	zip,
	# cc: String = ""   Eg: cc_example
	cc,
	# ccExp: String = ""   Eg: ccExp_example
	ccExp,
	# ccCcv2: String = ""   Eg: ccCcv2_example
	ccCcv2,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "add_account_credit_card", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **add_billing_credit_card**   { #add_billing_credit_card }
<a name="add_billing_credit_card"></a>

> `add_billing_credit_card(billingAddCcRequest: BillingAddCcRequest, on_success: Callable, on_failure: Callable)`

Add Credit Card for Billing

Adds a new credit card to the account for use as a payment method. If the card requires verification, the response indicates the next step. Complete verification via `GET /billing/creditcards/{id}/verify` followed by `POST /billing/creditcards/{id}/verify` before the card can be used for payments.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)

var billingAddCcRequest = BillingAddCcRequest.new()
# … fill model billingAddCcRequest with data

# Invoke an endpoint
api.add_billing_credit_card(
	# billingAddCcRequest: BillingAddCcRequest
	billingAddCcRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "add_billing_credit_card", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **add_billing_prepay**   { #add_billing_prepay }
<a name="add_billing_prepay"></a>

> `add_billing_prepay(billingPrepayRequest: BillingPrepayRequest, on_success: Callable, on_failure: Callable)`

Create Prepay Deposit

Creates a new prepay balance deposit and returns the invoice ID that must be paid to activate it. The prepay balance can then be used as a payment method for future orders. Use `/billing/invoices/{id}` to retrieve the generated invoice details.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)

var billingPrepayRequest = BillingPrepayRequest.new()
# … fill model billingPrepayRequest with data

# Invoke an endpoint
api.add_billing_prepay(
	# billingPrepayRequest: BillingPrepayRequest
	billingPrepayRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "add_billing_prepay", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **delete_account_credit_card**   { #delete_account_credit_card }
<a name="delete_account_credit_card"></a>

> `delete_account_credit_card(id: String, on_success: Callable, on_failure: Callable)`

Remove Credit Card

Removes a credit card from the account. If this is the default payment method, select a new default via `/billing/payment_method` afterward.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.delete_account_credit_card(
	# id: String = ""   Eg: id_example
	# The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.
	id,
	# On Success
	func(response):
		prints("Success!", "delete_account_credit_card", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **delete_billing_credit_card**   { #delete_billing_credit_card }
<a name="delete_billing_credit_card"></a>

> `delete_billing_credit_card(id: int, on_success: Callable, on_failure: Callable)`

Delete Credit Card

Removes the selected credit card from the account. Use `/billing/payment_method` to select a new default payment method after deleting a card.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.delete_billing_credit_card(
	# id: int   Eg: 56
	# The credit card ID to remove. Use IDs from `GET /billing/creditcards`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "delete_billing_credit_card", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **delete_billing_invoice**   { #delete_billing_invoice }
<a name="delete_billing_invoice"></a>

> `delete_billing_invoice(id: int, on_success: Callable, on_failure: Callable)`

Delete Invoice

Deletes a pending (unpaid) invoice from the account. Only invoices with a pending payment status can be deleted. Paid invoices cannot be removed. Related service records and repeat invoices are also cleaned up.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.delete_billing_invoice(
	# id: int   Eg: 56
	# The invoice ID to delete. Only unpaid invoices can be deleted.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "delete_billing_invoice", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **delete_billing_prepay**   { #delete_billing_prepay }
<a name="delete_billing_prepay"></a>

> `delete_billing_prepay(id: int, on_success: Callable, on_failure: Callable)`

Delete Prepay Balance

Deletes a prepay balance from the account. The balance must have remaining funds to be eligible for deletion. Use `GET /billing/prepays` to list available prepay balances and their IDs.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.delete_billing_prepay(
	# id: int   Eg: 56
	# The prepay balance ID to delete.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "delete_billing_prepay", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_affiliate_banners**   { #get_affiliate_banners }
<a name="get_affiliate_banners"></a>

> `get_affiliate_banners( on_success: Callable, on_failure: Callable)`

List Affiliate Banner Assets

Returns the catalog of available affiliate banner images with their dimensions. Use these assets to build marketing creatives for your affiliate campaigns. Each banner includes the image filename, width, and height for layout purposes.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.get_affiliate_banners(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_affiliate_banners", response)
		assert(response.data is AffiliateBannerRow)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_affiliate_rich_report**   { #get_affiliate_rich_report }
<a name="get_affiliate_rich_report"></a>

> `get_affiliate_rich_report( on_success: Callable, on_failure: Callable)`

Get Affiliate Performance Report

Returns a detailed affiliate performance report with commission totals, conversion rates, and traffic summary. Use this for a comprehensive overview of your affiliate program performance in a single request.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.get_affiliate_rich_report(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_affiliate_rich_report", response)
		assert(response.data is TextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_affiliate_sales_graph**   { #get_affiliate_sales_graph }
<a name="get_affiliate_sales_graph"></a>

> `get_affiliate_sales_graph(days = null, on_success: Callable, on_failure: Callable)`

Get Affiliate Sales Graph Data

Returns time-series sales data for the requested number of days. Use this to render sales trend charts in an affiliate dashboard. Each data point represents aggregated sales for a time period.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.get_affiliate_sales_graph(
	# days: int   Eg: 56
	# Number of days of sales history to include in the graph data. Determines the time window for the returned data points.
	days,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_affiliate_sales_graph", response)
		assert(response.data is StatusMonthlyBreakdown)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_affiliate_sales_report**   { #get_affiliate_sales_report }
<a name="get_affiliate_sales_report"></a>

> `get_affiliate_sales_report( on_success: Callable, on_failure: Callable)`

Get Affiliate Sales Report

Returns the affiliate sales report with commission amounts and order summaries. Use this for tabular sales data export or to reconcile commission payouts against individual referral orders.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.get_affiliate_sales_report(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_affiliate_sales_report", response)
		assert(response.data is TextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_affiliate_traffic_graph**   { #get_affiliate_traffic_graph }
<a name="get_affiliate_traffic_graph"></a>

> `get_affiliate_traffic_graph(days = null, on_success: Callable, on_failure: Callable)`

Get Affiliate Traffic Graph Data

Returns time-series traffic data for the requested number of days. Use this to render click and visit trend charts in an affiliate dashboard. Each data point represents aggregated traffic counts for a time period.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.get_affiliate_traffic_graph(
	# days: int   Eg: 56
	# Number of days of traffic history to include in the graph data. Determines the time window for the returned data points.
	days,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_affiliate_traffic_graph", response)
		assert(response.data is MonthlyCounts)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_affiliate_web_traffic**   { #get_affiliate_web_traffic }
<a name="get_affiliate_web_traffic"></a>

> `get_affiliate_web_traffic( on_success: Callable, on_failure: Callable)`

List Affiliate Web Traffic Entries

Returns individual web traffic log entries for affiliate referrals, including visitor IP address, referral URL, and timestamp. Use this to audit traffic sources, identify top referrers, or investigate suspicious click patterns.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.get_affiliate_web_traffic(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_affiliate_web_traffic", response)
		assert(response.data is AffiliateTrafficRow)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_billing_cart**   { #get_billing_cart }
<a name="get_billing_cart"></a>

> `get_billing_cart( on_success: Callable, on_failure: Callable)`

Get Shopping Cart Contents

Returns the current cart contents, available payment methods, and checkout metadata for the authenticated account. Use this to display the cart page, show totals, and determine which payment options are available before directing the user to `/pay/{method}/{invoices}`.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.get_billing_cart(
	# On Success
	func(response):
		prints("Success!", "get_billing_cart", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_billing_credit_card_verify**   { #get_billing_credit_card_verify }
<a name="get_billing_credit_card_verify"></a>

> `get_billing_credit_card_verify(id: int, on_success: Callable, on_failure: Callable)`

Get Credit Card Verification Requirements

Retrieves the verification requirements for a newly added credit card. The response indicates whether the card requires micro-charge amount confirmation or CVV validation. Use this before presenting a verification form to the user.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.get_billing_credit_card_verify(
	# id: int   Eg: 56
	# The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_billing_credit_card_verify", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_billing_invoice**   { #get_billing_invoice }
<a name="get_billing_invoice"></a>

> `get_billing_invoice(id: int, on_success: Callable, on_failure: Callable)`

Get Invoice Details

Retrieves the full invoice information including line items, amounts, and payment status. Use this before redirecting to `/pay/{method}/{invoices}` so you can display the exact amount due and confirm the invoice is still unpaid.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.get_billing_invoice(
	# id: int   Eg: 56
	# The invoice ID. Use IDs from `GET /billing/invoices` or from order responses.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_billing_invoice", response)
		assert(response.data is BillingInvoiceDetail)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_billing_invoices**   { #get_billing_invoices }
<a name="get_billing_invoices"></a>

> `get_billing_invoices( on_success: Callable, on_failure: Callable)`

List Account Invoices

Returns the invoice list for the account with summary totals. Use the invoice IDs from the response with `/billing/invoices/{id}` to retrieve detailed line items, or with `/pay/{method}/{invoices}` to initiate payment.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.get_billing_invoices(
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_billing_invoices", response)
		assert(response.data is BillingInvoiceList)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_billing_pre_pays**   { #get_billing_pre_pays }
<a name="get_billing_pre_pays"></a>

> `get_billing_pre_pays( on_success: Callable, on_failure: Callable)`

List Prepay Balances

Lists prepay balances and their associated metadata. Use this to determine whether an account has usable prepay funds before selecting `prepay` as a payment method.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.get_billing_pre_pays(
	# On Success
	func(response):
		prints("Success!", "get_billing_pre_pays", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **get_invoices**   { #get_invoices }
<a name="get_invoices"></a>

> `get_invoices(searchString = "",skip = null,limit = null, on_success: Callable, on_failure: Callable)`

Get Invoices

Returns a paginated list of invoices for the authenticated account. Each invoice includes the invoice number, date, total amount, and payment status. Use the optional `searchString` parameter to filter results and `skip`/`limit` for pagination.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.get_invoices(
	# searchString: String = ""   Eg: searchString_example
	# pass an optional search string for looking up inventory
	searchString,
	# skip: int   Eg: 56
	# number of records to skip for pagination
	skip,
	# limit: int   Eg: 56
	# maximum number of records to return
	limit,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "get_invoices", response)
		assert(response.data is Invoice)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **initiate_payment**   { #initiate_payment }
<a name="initiate_payment"></a>

> `initiate_payment(method: String,invoices: String, on_success: Callable, on_failure: Callable)`

Initiate Payment

Initiates a payment for the specified invoices using the chosen payment method. The response type determines how your client should proceed: `redirect` means send the user to the provided URL, `submit` means POST a form with the provided fields, and `single` means the payment was processed immediately. Use invoice IDs obtained from order responses or `/billing/invoices`.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.initiate_payment(
	# method: String = ""   Eg: method_example
	# The payment method to use. Valid values: `cc` (credit card), `paypal`, `prepay`, `payssion`, `payu`, `ccavenue`, `cashfree`, `coinbase`, `btcpay`.
	method,
	# invoices: String = ""   Eg: invoices_example
	# A comma-separated list of invoice IDs to pay. These IDs are returned by order endpoints (e.g. `/backups/order`, `/vps/order`) and by `/billing/invoices`.
	invoices,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "initiate_payment", response)
		assert(response.data is initiatePayment_200_response)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **post_billing_credit_card_verify**   { #post_billing_credit_card_verify }
<a name="post_billing_credit_card_verify"></a>

> `post_billing_credit_card_verify(id: int,billingVerifyCcRequest: BillingVerifyCcRequest, on_success: Callable, on_failure: Callable)`

Submit Credit Card Verification

Completes the credit card verification flow by submitting the micro-charge amounts or CVV as required by `GET /billing/creditcards/{id}/verify`. A successful response means the card is verified and can be selected as a payment method via `/billing/payment_method`.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)

var billingVerifyCcRequest = BillingVerifyCcRequest.new()
# … fill model billingVerifyCcRequest with data

# Invoke an endpoint
api.post_billing_credit_card_verify(
	# id: int   Eg: 56
	# The credit card ID to verify. Use the ID returned from `POST /billing/creditcards`.
	id,
	# billingVerifyCcRequest: BillingVerifyCcRequest
	billingVerifyCcRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "post_billing_credit_card_verify", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_account_credit_card**   { #update_account_credit_card }
<a name="update_account_credit_card"></a>

> `update_account_credit_card(id: int, on_success: Callable, on_failure: Callable)`

Update Credit Card

Updates an existing credit card on the account. Use this to refresh stored card metadata such as expiration date or billing address.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.update_account_credit_card(
	# id: int   Eg: 56
	# The credit card ID. Use the card ID returned from `POST /account/creditcards` or listed in `/billing/creditcards`.
	id,
	# On Success
	func(response):
		prints("Success!", "update_account_credit_card", response)
		
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_affiliate_dock_setup**   { #update_affiliate_dock_setup }
<a name="update_affiliate_dock_setup"></a>

> `update_affiliate_dock_setup(affiliateDockTitle = "",affiliateDockDescription = "",referrerCoupon = "", on_success: Callable, on_failure: Callable)`

Configure Affiliate Dock Settings

Updates the affiliate dock settings including the referral coupon and marketing copy. The dock is the branded landing page shown to visitors arriving via your affiliate link. Use this to customize the coupon code and promotional text.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.update_affiliate_dock_setup(
	# affiliateDockTitle: String = ""   Eg: affiliateDockTitle_example
	affiliateDockTitle,
	# affiliateDockDescription: String = ""   Eg: affiliateDockDescription_example
	affiliateDockDescription,
	# referrerCoupon: String = ""   Eg: referrerCoupon_example
	referrerCoupon,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "update_affiliate_dock_setup", response)
		assert(response.data is TextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_affiliate_landing_page**   { #update_affiliate_landing_page }
<a name="update_affiliate_landing_page"></a>

> `update_affiliate_landing_page(affiliateDockTitle = "",affiliateDockDescription = "",referrerCoupon = "", on_success: Callable, on_failure: Callable)`

Configure Affiliate Landing Page

Updates the affiliate landing page configuration, including the title, description, and coupon code. Visitors who arrive through your affiliate link see this customized page. Changes are published immediately.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.update_affiliate_landing_page(
	# affiliateDockTitle: String = ""   Eg: affiliateDockTitle_example
	affiliateDockTitle,
	# affiliateDockDescription: String = ""   Eg: affiliateDockDescription_example
	affiliateDockDescription,
	# referrerCoupon: String = ""   Eg: referrerCoupon_example
	referrerCoupon,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "update_affiliate_landing_page", response)
		assert(response.data is TextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_affiliate_payment_setup**   { #update_affiliate_payment_setup }
<a name="update_affiliate_payment_setup"></a>

> `update_affiliate_payment_setup(affiliatePaypal = "",affiliatePaymentMethod = "", on_success: Callable, on_failure: Callable)`

Configure Affiliate Payout Preferences

Updates how you receive affiliate commission payouts. Choose between prepay credit applied to your account balance or PayPal disbursement. When selecting PayPal, provide the email address linked to your PayPal account.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.update_affiliate_payment_setup(
	# affiliatePaypal: String = ""   Eg: affiliatePaypal_example
	affiliatePaypal,
	# affiliatePaymentMethod: String = ""   Eg: affiliatePaymentMethod_example
	affiliatePaymentMethod,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "update_affiliate_payment_setup", response)
		assert(response.data is TextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_billing_credit_card**   { #update_billing_credit_card }
<a name="update_billing_credit_card"></a>

> `update_billing_credit_card(id: int, on_success: Callable, on_failure: Callable)`

Update Credit Card Details

Updates stored credit card metadata or retrieves the masked card details. Use this to refresh card data before verification or to update billing address information associated with the card.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)


# Invoke an endpoint
api.update_billing_credit_card(
	# id: int   Eg: 56
	# The credit card ID. Use IDs from `GET /billing/creditcards` or the response from `POST /billing/creditcards`.
	id,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "update_billing_credit_card", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```

# **update_billing_payment_method**   { #update_billing_payment_method }
<a name="update_billing_payment_method"></a>

> `update_billing_payment_method(billingPaymentMethodRequest: BillingPaymentMethodRequest, on_success: Callable, on_failure: Callable)`

Update Default Payment Method

Updates the account's default payment method, including selecting a verified credit card as the primary payment source or switching to PayPal when available.

### Example

* Api Key Authentication (`sessionIdCookieAuth`)
* Api Key Authentication (`apiKeyAuth`)
* Api Key Authentication (`sessionIdHeaderAuth`)

```gdscript

# Customize configuration
var config := ApiConfig.new()
config.host = "localhost"
config.port = 8080
#config.tls_enabled = true
#config.trusted_chain = preload("res://my_cert_chain.crt")

# Instantiate the api
var api = BillingApi.new(config)
# You can also provide your own HTTPClient, to re-use it across apis.
#var api = BillingApi.new(config, client)

var billingPaymentMethodRequest = BillingPaymentMethodRequest.new()
# … fill model billingPaymentMethodRequest with data

# Invoke an endpoint
api.update_billing_payment_method(
	# billingPaymentMethodRequest: BillingPaymentMethodRequest
	billingPaymentMethodRequest,
	# On Success
	func(response):  # response is ApiResponse
		prints("Success!", "update_billing_payment_method", response)
		assert(response.data is SuccessTextResponse)
		pass  # do things, make stuff
		,
	# On Error
	func(error):  # error is ApiError
		push_error(str(error))
		,
)

```


### Authorization

[apiKeyAuth](../README.md#apiKeyAuth), 
[sessionIdHeaderAuth](../README.md#sessionIdHeaderAuth), 
[sessionIdCookieAuth](../README.md#sessionIdCookieAuth)

[[Back to top]](#__pageTop) \
[[Back to API list]](../README.md#documentation-for-api-endpoints) \
[[Back to Model list]](../README.md#documentation-for-models) \
[[Back to README]](../README.md) \

