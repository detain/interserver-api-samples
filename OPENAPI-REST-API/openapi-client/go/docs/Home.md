# Home

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**LastLoginIp** | **string** | Last login IP. | 
**LastLogin** | **string** | Last login time. | 
**Currency** | **string** | Currency symbol. | 
**Amount** | **string** | Amount with currency. | 
**InvoiceList** | **int32** | Number of invoices. | 
**Balance** | **string** | Balance with currency. | 
**FullName** | **string** | Users full name. | 
**Email** | **string** | User email address. | 
**Tickets** | **[]string** | List of tickets. | 
**TicketStatus** | [**HomeTicketStatus**](HomeTicketStatus.md) |  | 
**TicketStatusView** | [**HomeTicketStatusView**](HomeTicketStatusView.md) |  | 
**Details** | [**HomeDetails**](HomeDetails.md) |  | 
**Services** | [**HomeServices**](HomeServices.md) |  | 
**AFFILIATE_AMOUNT** | **string** | Affiliate amount with currency. | 

## Methods

### NewHome

`func NewHome(lastLoginIp string, lastLogin string, currency string, amount string, invoiceList int32, balance string, fullName string, email string, tickets []string, ticketStatus HomeTicketStatus, ticketStatusView HomeTicketStatusView, details HomeDetails, services HomeServices, aFFILIATEAMOUNT string, ) *Home`

NewHome instantiates a new Home object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewHomeWithDefaults

`func NewHomeWithDefaults() *Home`

NewHomeWithDefaults instantiates a new Home object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetLastLoginIp

`func (o *Home) GetLastLoginIp() string`

GetLastLoginIp returns the LastLoginIp field if non-nil, zero value otherwise.

### GetLastLoginIpOk

`func (o *Home) GetLastLoginIpOk() (*string, bool)`

GetLastLoginIpOk returns a tuple with the LastLoginIp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLastLoginIp

`func (o *Home) SetLastLoginIp(v string)`

SetLastLoginIp sets LastLoginIp field to given value.


### GetLastLogin

`func (o *Home) GetLastLogin() string`

GetLastLogin returns the LastLogin field if non-nil, zero value otherwise.

### GetLastLoginOk

`func (o *Home) GetLastLoginOk() (*string, bool)`

GetLastLoginOk returns a tuple with the LastLogin field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLastLogin

`func (o *Home) SetLastLogin(v string)`

SetLastLogin sets LastLogin field to given value.


### GetCurrency

`func (o *Home) GetCurrency() string`

GetCurrency returns the Currency field if non-nil, zero value otherwise.

### GetCurrencyOk

`func (o *Home) GetCurrencyOk() (*string, bool)`

GetCurrencyOk returns a tuple with the Currency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCurrency

`func (o *Home) SetCurrency(v string)`

SetCurrency sets Currency field to given value.


### GetAmount

`func (o *Home) GetAmount() string`

GetAmount returns the Amount field if non-nil, zero value otherwise.

### GetAmountOk

`func (o *Home) GetAmountOk() (*string, bool)`

GetAmountOk returns a tuple with the Amount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAmount

`func (o *Home) SetAmount(v string)`

SetAmount sets Amount field to given value.


### GetInvoiceList

`func (o *Home) GetInvoiceList() int32`

GetInvoiceList returns the InvoiceList field if non-nil, zero value otherwise.

### GetInvoiceListOk

`func (o *Home) GetInvoiceListOk() (*int32, bool)`

GetInvoiceListOk returns a tuple with the InvoiceList field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInvoiceList

`func (o *Home) SetInvoiceList(v int32)`

SetInvoiceList sets InvoiceList field to given value.


### GetBalance

`func (o *Home) GetBalance() string`

GetBalance returns the Balance field if non-nil, zero value otherwise.

### GetBalanceOk

`func (o *Home) GetBalanceOk() (*string, bool)`

GetBalanceOk returns a tuple with the Balance field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBalance

`func (o *Home) SetBalance(v string)`

SetBalance sets Balance field to given value.


### GetFullName

`func (o *Home) GetFullName() string`

GetFullName returns the FullName field if non-nil, zero value otherwise.

### GetFullNameOk

`func (o *Home) GetFullNameOk() (*string, bool)`

GetFullNameOk returns a tuple with the FullName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFullName

`func (o *Home) SetFullName(v string)`

SetFullName sets FullName field to given value.


### GetEmail

`func (o *Home) GetEmail() string`

GetEmail returns the Email field if non-nil, zero value otherwise.

### GetEmailOk

`func (o *Home) GetEmailOk() (*string, bool)`

GetEmailOk returns a tuple with the Email field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEmail

`func (o *Home) SetEmail(v string)`

SetEmail sets Email field to given value.


### GetTickets

`func (o *Home) GetTickets() []string`

GetTickets returns the Tickets field if non-nil, zero value otherwise.

### GetTicketsOk

`func (o *Home) GetTicketsOk() (*[]string, bool)`

GetTicketsOk returns a tuple with the Tickets field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTickets

`func (o *Home) SetTickets(v []string)`

SetTickets sets Tickets field to given value.


### GetTicketStatus

`func (o *Home) GetTicketStatus() HomeTicketStatus`

GetTicketStatus returns the TicketStatus field if non-nil, zero value otherwise.

### GetTicketStatusOk

`func (o *Home) GetTicketStatusOk() (*HomeTicketStatus, bool)`

GetTicketStatusOk returns a tuple with the TicketStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTicketStatus

`func (o *Home) SetTicketStatus(v HomeTicketStatus)`

SetTicketStatus sets TicketStatus field to given value.


### GetTicketStatusView

`func (o *Home) GetTicketStatusView() HomeTicketStatusView`

GetTicketStatusView returns the TicketStatusView field if non-nil, zero value otherwise.

### GetTicketStatusViewOk

`func (o *Home) GetTicketStatusViewOk() (*HomeTicketStatusView, bool)`

GetTicketStatusViewOk returns a tuple with the TicketStatusView field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTicketStatusView

`func (o *Home) SetTicketStatusView(v HomeTicketStatusView)`

SetTicketStatusView sets TicketStatusView field to given value.


### GetDetails

`func (o *Home) GetDetails() HomeDetails`

GetDetails returns the Details field if non-nil, zero value otherwise.

### GetDetailsOk

`func (o *Home) GetDetailsOk() (*HomeDetails, bool)`

GetDetailsOk returns a tuple with the Details field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDetails

`func (o *Home) SetDetails(v HomeDetails)`

SetDetails sets Details field to given value.


### GetServices

`func (o *Home) GetServices() HomeServices`

GetServices returns the Services field if non-nil, zero value otherwise.

### GetServicesOk

`func (o *Home) GetServicesOk() (*HomeServices, bool)`

GetServicesOk returns a tuple with the Services field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServices

`func (o *Home) SetServices(v HomeServices)`

SetServices sets Services field to given value.


### GetAFFILIATE_AMOUNT

`func (o *Home) GetAFFILIATE_AMOUNT() string`

GetAFFILIATE_AMOUNT returns the AFFILIATE_AMOUNT field if non-nil, zero value otherwise.

### GetAFFILIATE_AMOUNTOk

`func (o *Home) GetAFFILIATE_AMOUNTOk() (*string, bool)`

GetAFFILIATE_AMOUNTOk returns a tuple with the AFFILIATE_AMOUNT field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAFFILIATE_AMOUNT

`func (o *Home) SetAFFILIATE_AMOUNT(v string)`

SetAFFILIATE_AMOUNT sets AFFILIATE_AMOUNT field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


