# ServerServiceInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServerId** | Pointer to **string** | The ID of the server. | [optional] 
**ServerHostname** | Pointer to **string** | The hostname of the server. | [optional] 
**ServerCustid** | Pointer to **string** | The customer ID associated with the server. | [optional] 
**ServerType** | Pointer to **string** | The type of the server. | [optional] 
**ServerCurrency** | Pointer to **string** | The currency used for billing. | [optional] 
**ServerOrderDate** | Pointer to **string** | The date when the server was ordered. | [optional] 
**ServerInvoice** | Pointer to **string** | The invoice number for the server. | [optional] 
**ServerCoupon** | Pointer to **string** | The coupon associated with the server. | [optional] 
**ServerStatus** | Pointer to **string** | The status of the server. | [optional] 
**ServerRoot** | Pointer to **string** | The root of the server. | [optional] 
**ServerDedicatedTag** | Pointer to **string** | The dedicated tag of the server. | [optional] 
**ServerCustomTag** | Pointer to **string** | The custom tag of the server. | [optional] 
**ServerComment** | Pointer to **string** | Comments related to the server. | [optional] 
**ServerInitialBill** | Pointer to **string** | The initial billing amount for the server. | [optional] 
**ServerHardware** | Pointer to **string** | The hardware information of the server. | [optional] 
**ServerIps** | Pointer to **string** | The number of IPs associated with the server. | [optional] 
**ServerMonthlyBill** | Pointer to **string** | The monthly billing amount for the server. | [optional] 
**ServerSetup** | Pointer to **string** | The setup status of the server. | [optional] 
**ServerDiscount** | Pointer to **interface{}** | Discount information for the server. | [optional] 
**ServerRep** | Pointer to **string** | The reputation of the server. | [optional] 
**ServerDate** | Pointer to **string** | The date related to the server. | [optional] 
**ServerTotalCost** | Pointer to **string** | The total cost of the server. | [optional] 
**ServerLocation** | Pointer to **interface{}** | The location of the server. | [optional] 
**ServerHardwareOrdered** | Pointer to **string** | The ordered hardware for the server. | [optional] 
**ServerBilled** | Pointer to **string** | The billed amount for the server. | [optional] 
**ServerWelcomeEmail** | Pointer to **string** | Indicates whether a welcome email was sent. | [optional] 
**ServerDedicatedCpu** | Pointer to **string** | The number of dedicated CPUs for the server. | [optional] 
**ServerDedicatedMemory** | Pointer to **string** | The amount of dedicated memory for the server. | [optional] 
**ServerDedicatedHd1** | Pointer to **string** | The size of the first dedicated hard drive. | [optional] 
**ServerDedicatedHd2** | Pointer to **interface{}** | The size of the second dedicated hard drive. | [optional] 
**ServerDedicatedBandwidth** | Pointer to **string** | The bandwidth of the server. | [optional] 
**ServerDedicatedIps** | Pointer to **string** | The number of dedicated IPs for the server. | [optional] 
**ServerDedicatedOs** | Pointer to **string** | The operating system of the server. | [optional] 
**ServerDedicatedCp** | Pointer to **interface{}** | The control panel of the server. | [optional] 
**ServerDedicatedRaid** | Pointer to **string** | The RAID configuration of the server. | [optional] 
**ServerExtra** | Pointer to **string** | Additional information about the server. | [optional] 

## Methods

### NewServerServiceInfo

`func NewServerServiceInfo() *ServerServiceInfo`

NewServerServiceInfo instantiates a new ServerServiceInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServerServiceInfoWithDefaults

`func NewServerServiceInfoWithDefaults() *ServerServiceInfo`

NewServerServiceInfoWithDefaults instantiates a new ServerServiceInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServerId

`func (o *ServerServiceInfo) GetServerId() string`

GetServerId returns the ServerId field if non-nil, zero value otherwise.

### GetServerIdOk

`func (o *ServerServiceInfo) GetServerIdOk() (*string, bool)`

GetServerIdOk returns a tuple with the ServerId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerId

`func (o *ServerServiceInfo) SetServerId(v string)`

SetServerId sets ServerId field to given value.

### HasServerId

`func (o *ServerServiceInfo) HasServerId() bool`

HasServerId returns a boolean if a field has been set.

### GetServerHostname

`func (o *ServerServiceInfo) GetServerHostname() string`

GetServerHostname returns the ServerHostname field if non-nil, zero value otherwise.

### GetServerHostnameOk

`func (o *ServerServiceInfo) GetServerHostnameOk() (*string, bool)`

GetServerHostnameOk returns a tuple with the ServerHostname field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerHostname

`func (o *ServerServiceInfo) SetServerHostname(v string)`

SetServerHostname sets ServerHostname field to given value.

### HasServerHostname

`func (o *ServerServiceInfo) HasServerHostname() bool`

HasServerHostname returns a boolean if a field has been set.

### GetServerCustid

`func (o *ServerServiceInfo) GetServerCustid() string`

GetServerCustid returns the ServerCustid field if non-nil, zero value otherwise.

### GetServerCustidOk

`func (o *ServerServiceInfo) GetServerCustidOk() (*string, bool)`

GetServerCustidOk returns a tuple with the ServerCustid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerCustid

`func (o *ServerServiceInfo) SetServerCustid(v string)`

SetServerCustid sets ServerCustid field to given value.

### HasServerCustid

`func (o *ServerServiceInfo) HasServerCustid() bool`

HasServerCustid returns a boolean if a field has been set.

### GetServerType

`func (o *ServerServiceInfo) GetServerType() string`

GetServerType returns the ServerType field if non-nil, zero value otherwise.

### GetServerTypeOk

`func (o *ServerServiceInfo) GetServerTypeOk() (*string, bool)`

GetServerTypeOk returns a tuple with the ServerType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerType

`func (o *ServerServiceInfo) SetServerType(v string)`

SetServerType sets ServerType field to given value.

### HasServerType

`func (o *ServerServiceInfo) HasServerType() bool`

HasServerType returns a boolean if a field has been set.

### GetServerCurrency

`func (o *ServerServiceInfo) GetServerCurrency() string`

GetServerCurrency returns the ServerCurrency field if non-nil, zero value otherwise.

### GetServerCurrencyOk

`func (o *ServerServiceInfo) GetServerCurrencyOk() (*string, bool)`

GetServerCurrencyOk returns a tuple with the ServerCurrency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerCurrency

`func (o *ServerServiceInfo) SetServerCurrency(v string)`

SetServerCurrency sets ServerCurrency field to given value.

### HasServerCurrency

`func (o *ServerServiceInfo) HasServerCurrency() bool`

HasServerCurrency returns a boolean if a field has been set.

### GetServerOrderDate

`func (o *ServerServiceInfo) GetServerOrderDate() string`

GetServerOrderDate returns the ServerOrderDate field if non-nil, zero value otherwise.

### GetServerOrderDateOk

`func (o *ServerServiceInfo) GetServerOrderDateOk() (*string, bool)`

GetServerOrderDateOk returns a tuple with the ServerOrderDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerOrderDate

`func (o *ServerServiceInfo) SetServerOrderDate(v string)`

SetServerOrderDate sets ServerOrderDate field to given value.

### HasServerOrderDate

`func (o *ServerServiceInfo) HasServerOrderDate() bool`

HasServerOrderDate returns a boolean if a field has been set.

### GetServerInvoice

`func (o *ServerServiceInfo) GetServerInvoice() string`

GetServerInvoice returns the ServerInvoice field if non-nil, zero value otherwise.

### GetServerInvoiceOk

`func (o *ServerServiceInfo) GetServerInvoiceOk() (*string, bool)`

GetServerInvoiceOk returns a tuple with the ServerInvoice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerInvoice

`func (o *ServerServiceInfo) SetServerInvoice(v string)`

SetServerInvoice sets ServerInvoice field to given value.

### HasServerInvoice

`func (o *ServerServiceInfo) HasServerInvoice() bool`

HasServerInvoice returns a boolean if a field has been set.

### GetServerCoupon

`func (o *ServerServiceInfo) GetServerCoupon() string`

GetServerCoupon returns the ServerCoupon field if non-nil, zero value otherwise.

### GetServerCouponOk

`func (o *ServerServiceInfo) GetServerCouponOk() (*string, bool)`

GetServerCouponOk returns a tuple with the ServerCoupon field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerCoupon

`func (o *ServerServiceInfo) SetServerCoupon(v string)`

SetServerCoupon sets ServerCoupon field to given value.

### HasServerCoupon

`func (o *ServerServiceInfo) HasServerCoupon() bool`

HasServerCoupon returns a boolean if a field has been set.

### GetServerStatus

`func (o *ServerServiceInfo) GetServerStatus() string`

GetServerStatus returns the ServerStatus field if non-nil, zero value otherwise.

### GetServerStatusOk

`func (o *ServerServiceInfo) GetServerStatusOk() (*string, bool)`

GetServerStatusOk returns a tuple with the ServerStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerStatus

`func (o *ServerServiceInfo) SetServerStatus(v string)`

SetServerStatus sets ServerStatus field to given value.

### HasServerStatus

`func (o *ServerServiceInfo) HasServerStatus() bool`

HasServerStatus returns a boolean if a field has been set.

### GetServerRoot

`func (o *ServerServiceInfo) GetServerRoot() string`

GetServerRoot returns the ServerRoot field if non-nil, zero value otherwise.

### GetServerRootOk

`func (o *ServerServiceInfo) GetServerRootOk() (*string, bool)`

GetServerRootOk returns a tuple with the ServerRoot field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerRoot

`func (o *ServerServiceInfo) SetServerRoot(v string)`

SetServerRoot sets ServerRoot field to given value.

### HasServerRoot

`func (o *ServerServiceInfo) HasServerRoot() bool`

HasServerRoot returns a boolean if a field has been set.

### GetServerDedicatedTag

`func (o *ServerServiceInfo) GetServerDedicatedTag() string`

GetServerDedicatedTag returns the ServerDedicatedTag field if non-nil, zero value otherwise.

### GetServerDedicatedTagOk

`func (o *ServerServiceInfo) GetServerDedicatedTagOk() (*string, bool)`

GetServerDedicatedTagOk returns a tuple with the ServerDedicatedTag field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerDedicatedTag

`func (o *ServerServiceInfo) SetServerDedicatedTag(v string)`

SetServerDedicatedTag sets ServerDedicatedTag field to given value.

### HasServerDedicatedTag

`func (o *ServerServiceInfo) HasServerDedicatedTag() bool`

HasServerDedicatedTag returns a boolean if a field has been set.

### GetServerCustomTag

`func (o *ServerServiceInfo) GetServerCustomTag() string`

GetServerCustomTag returns the ServerCustomTag field if non-nil, zero value otherwise.

### GetServerCustomTagOk

`func (o *ServerServiceInfo) GetServerCustomTagOk() (*string, bool)`

GetServerCustomTagOk returns a tuple with the ServerCustomTag field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerCustomTag

`func (o *ServerServiceInfo) SetServerCustomTag(v string)`

SetServerCustomTag sets ServerCustomTag field to given value.

### HasServerCustomTag

`func (o *ServerServiceInfo) HasServerCustomTag() bool`

HasServerCustomTag returns a boolean if a field has been set.

### GetServerComment

`func (o *ServerServiceInfo) GetServerComment() string`

GetServerComment returns the ServerComment field if non-nil, zero value otherwise.

### GetServerCommentOk

`func (o *ServerServiceInfo) GetServerCommentOk() (*string, bool)`

GetServerCommentOk returns a tuple with the ServerComment field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerComment

`func (o *ServerServiceInfo) SetServerComment(v string)`

SetServerComment sets ServerComment field to given value.

### HasServerComment

`func (o *ServerServiceInfo) HasServerComment() bool`

HasServerComment returns a boolean if a field has been set.

### GetServerInitialBill

`func (o *ServerServiceInfo) GetServerInitialBill() string`

GetServerInitialBill returns the ServerInitialBill field if non-nil, zero value otherwise.

### GetServerInitialBillOk

`func (o *ServerServiceInfo) GetServerInitialBillOk() (*string, bool)`

GetServerInitialBillOk returns a tuple with the ServerInitialBill field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerInitialBill

`func (o *ServerServiceInfo) SetServerInitialBill(v string)`

SetServerInitialBill sets ServerInitialBill field to given value.

### HasServerInitialBill

`func (o *ServerServiceInfo) HasServerInitialBill() bool`

HasServerInitialBill returns a boolean if a field has been set.

### GetServerHardware

`func (o *ServerServiceInfo) GetServerHardware() string`

GetServerHardware returns the ServerHardware field if non-nil, zero value otherwise.

### GetServerHardwareOk

`func (o *ServerServiceInfo) GetServerHardwareOk() (*string, bool)`

GetServerHardwareOk returns a tuple with the ServerHardware field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerHardware

`func (o *ServerServiceInfo) SetServerHardware(v string)`

SetServerHardware sets ServerHardware field to given value.

### HasServerHardware

`func (o *ServerServiceInfo) HasServerHardware() bool`

HasServerHardware returns a boolean if a field has been set.

### GetServerIps

`func (o *ServerServiceInfo) GetServerIps() string`

GetServerIps returns the ServerIps field if non-nil, zero value otherwise.

### GetServerIpsOk

`func (o *ServerServiceInfo) GetServerIpsOk() (*string, bool)`

GetServerIpsOk returns a tuple with the ServerIps field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerIps

`func (o *ServerServiceInfo) SetServerIps(v string)`

SetServerIps sets ServerIps field to given value.

### HasServerIps

`func (o *ServerServiceInfo) HasServerIps() bool`

HasServerIps returns a boolean if a field has been set.

### GetServerMonthlyBill

`func (o *ServerServiceInfo) GetServerMonthlyBill() string`

GetServerMonthlyBill returns the ServerMonthlyBill field if non-nil, zero value otherwise.

### GetServerMonthlyBillOk

`func (o *ServerServiceInfo) GetServerMonthlyBillOk() (*string, bool)`

GetServerMonthlyBillOk returns a tuple with the ServerMonthlyBill field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerMonthlyBill

`func (o *ServerServiceInfo) SetServerMonthlyBill(v string)`

SetServerMonthlyBill sets ServerMonthlyBill field to given value.

### HasServerMonthlyBill

`func (o *ServerServiceInfo) HasServerMonthlyBill() bool`

HasServerMonthlyBill returns a boolean if a field has been set.

### GetServerSetup

`func (o *ServerServiceInfo) GetServerSetup() string`

GetServerSetup returns the ServerSetup field if non-nil, zero value otherwise.

### GetServerSetupOk

`func (o *ServerServiceInfo) GetServerSetupOk() (*string, bool)`

GetServerSetupOk returns a tuple with the ServerSetup field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerSetup

`func (o *ServerServiceInfo) SetServerSetup(v string)`

SetServerSetup sets ServerSetup field to given value.

### HasServerSetup

`func (o *ServerServiceInfo) HasServerSetup() bool`

HasServerSetup returns a boolean if a field has been set.

### GetServerDiscount

`func (o *ServerServiceInfo) GetServerDiscount() interface{}`

GetServerDiscount returns the ServerDiscount field if non-nil, zero value otherwise.

### GetServerDiscountOk

`func (o *ServerServiceInfo) GetServerDiscountOk() (*interface{}, bool)`

GetServerDiscountOk returns a tuple with the ServerDiscount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerDiscount

`func (o *ServerServiceInfo) SetServerDiscount(v interface{})`

SetServerDiscount sets ServerDiscount field to given value.

### HasServerDiscount

`func (o *ServerServiceInfo) HasServerDiscount() bool`

HasServerDiscount returns a boolean if a field has been set.

### SetServerDiscountNil

`func (o *ServerServiceInfo) SetServerDiscountNil(b bool)`

 SetServerDiscountNil sets the value for ServerDiscount to be an explicit nil

### UnsetServerDiscount
`func (o *ServerServiceInfo) UnsetServerDiscount()`

UnsetServerDiscount ensures that no value is present for ServerDiscount, not even an explicit nil
### GetServerRep

`func (o *ServerServiceInfo) GetServerRep() string`

GetServerRep returns the ServerRep field if non-nil, zero value otherwise.

### GetServerRepOk

`func (o *ServerServiceInfo) GetServerRepOk() (*string, bool)`

GetServerRepOk returns a tuple with the ServerRep field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerRep

`func (o *ServerServiceInfo) SetServerRep(v string)`

SetServerRep sets ServerRep field to given value.

### HasServerRep

`func (o *ServerServiceInfo) HasServerRep() bool`

HasServerRep returns a boolean if a field has been set.

### GetServerDate

`func (o *ServerServiceInfo) GetServerDate() string`

GetServerDate returns the ServerDate field if non-nil, zero value otherwise.

### GetServerDateOk

`func (o *ServerServiceInfo) GetServerDateOk() (*string, bool)`

GetServerDateOk returns a tuple with the ServerDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerDate

`func (o *ServerServiceInfo) SetServerDate(v string)`

SetServerDate sets ServerDate field to given value.

### HasServerDate

`func (o *ServerServiceInfo) HasServerDate() bool`

HasServerDate returns a boolean if a field has been set.

### GetServerTotalCost

`func (o *ServerServiceInfo) GetServerTotalCost() string`

GetServerTotalCost returns the ServerTotalCost field if non-nil, zero value otherwise.

### GetServerTotalCostOk

`func (o *ServerServiceInfo) GetServerTotalCostOk() (*string, bool)`

GetServerTotalCostOk returns a tuple with the ServerTotalCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerTotalCost

`func (o *ServerServiceInfo) SetServerTotalCost(v string)`

SetServerTotalCost sets ServerTotalCost field to given value.

### HasServerTotalCost

`func (o *ServerServiceInfo) HasServerTotalCost() bool`

HasServerTotalCost returns a boolean if a field has been set.

### GetServerLocation

`func (o *ServerServiceInfo) GetServerLocation() interface{}`

GetServerLocation returns the ServerLocation field if non-nil, zero value otherwise.

### GetServerLocationOk

`func (o *ServerServiceInfo) GetServerLocationOk() (*interface{}, bool)`

GetServerLocationOk returns a tuple with the ServerLocation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerLocation

`func (o *ServerServiceInfo) SetServerLocation(v interface{})`

SetServerLocation sets ServerLocation field to given value.

### HasServerLocation

`func (o *ServerServiceInfo) HasServerLocation() bool`

HasServerLocation returns a boolean if a field has been set.

### SetServerLocationNil

`func (o *ServerServiceInfo) SetServerLocationNil(b bool)`

 SetServerLocationNil sets the value for ServerLocation to be an explicit nil

### UnsetServerLocation
`func (o *ServerServiceInfo) UnsetServerLocation()`

UnsetServerLocation ensures that no value is present for ServerLocation, not even an explicit nil
### GetServerHardwareOrdered

`func (o *ServerServiceInfo) GetServerHardwareOrdered() string`

GetServerHardwareOrdered returns the ServerHardwareOrdered field if non-nil, zero value otherwise.

### GetServerHardwareOrderedOk

`func (o *ServerServiceInfo) GetServerHardwareOrderedOk() (*string, bool)`

GetServerHardwareOrderedOk returns a tuple with the ServerHardwareOrdered field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerHardwareOrdered

`func (o *ServerServiceInfo) SetServerHardwareOrdered(v string)`

SetServerHardwareOrdered sets ServerHardwareOrdered field to given value.

### HasServerHardwareOrdered

`func (o *ServerServiceInfo) HasServerHardwareOrdered() bool`

HasServerHardwareOrdered returns a boolean if a field has been set.

### GetServerBilled

`func (o *ServerServiceInfo) GetServerBilled() string`

GetServerBilled returns the ServerBilled field if non-nil, zero value otherwise.

### GetServerBilledOk

`func (o *ServerServiceInfo) GetServerBilledOk() (*string, bool)`

GetServerBilledOk returns a tuple with the ServerBilled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerBilled

`func (o *ServerServiceInfo) SetServerBilled(v string)`

SetServerBilled sets ServerBilled field to given value.

### HasServerBilled

`func (o *ServerServiceInfo) HasServerBilled() bool`

HasServerBilled returns a boolean if a field has been set.

### GetServerWelcomeEmail

`func (o *ServerServiceInfo) GetServerWelcomeEmail() string`

GetServerWelcomeEmail returns the ServerWelcomeEmail field if non-nil, zero value otherwise.

### GetServerWelcomeEmailOk

`func (o *ServerServiceInfo) GetServerWelcomeEmailOk() (*string, bool)`

GetServerWelcomeEmailOk returns a tuple with the ServerWelcomeEmail field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerWelcomeEmail

`func (o *ServerServiceInfo) SetServerWelcomeEmail(v string)`

SetServerWelcomeEmail sets ServerWelcomeEmail field to given value.

### HasServerWelcomeEmail

`func (o *ServerServiceInfo) HasServerWelcomeEmail() bool`

HasServerWelcomeEmail returns a boolean if a field has been set.

### GetServerDedicatedCpu

`func (o *ServerServiceInfo) GetServerDedicatedCpu() string`

GetServerDedicatedCpu returns the ServerDedicatedCpu field if non-nil, zero value otherwise.

### GetServerDedicatedCpuOk

`func (o *ServerServiceInfo) GetServerDedicatedCpuOk() (*string, bool)`

GetServerDedicatedCpuOk returns a tuple with the ServerDedicatedCpu field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerDedicatedCpu

`func (o *ServerServiceInfo) SetServerDedicatedCpu(v string)`

SetServerDedicatedCpu sets ServerDedicatedCpu field to given value.

### HasServerDedicatedCpu

`func (o *ServerServiceInfo) HasServerDedicatedCpu() bool`

HasServerDedicatedCpu returns a boolean if a field has been set.

### GetServerDedicatedMemory

`func (o *ServerServiceInfo) GetServerDedicatedMemory() string`

GetServerDedicatedMemory returns the ServerDedicatedMemory field if non-nil, zero value otherwise.

### GetServerDedicatedMemoryOk

`func (o *ServerServiceInfo) GetServerDedicatedMemoryOk() (*string, bool)`

GetServerDedicatedMemoryOk returns a tuple with the ServerDedicatedMemory field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerDedicatedMemory

`func (o *ServerServiceInfo) SetServerDedicatedMemory(v string)`

SetServerDedicatedMemory sets ServerDedicatedMemory field to given value.

### HasServerDedicatedMemory

`func (o *ServerServiceInfo) HasServerDedicatedMemory() bool`

HasServerDedicatedMemory returns a boolean if a field has been set.

### GetServerDedicatedHd1

`func (o *ServerServiceInfo) GetServerDedicatedHd1() string`

GetServerDedicatedHd1 returns the ServerDedicatedHd1 field if non-nil, zero value otherwise.

### GetServerDedicatedHd1Ok

`func (o *ServerServiceInfo) GetServerDedicatedHd1Ok() (*string, bool)`

GetServerDedicatedHd1Ok returns a tuple with the ServerDedicatedHd1 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerDedicatedHd1

`func (o *ServerServiceInfo) SetServerDedicatedHd1(v string)`

SetServerDedicatedHd1 sets ServerDedicatedHd1 field to given value.

### HasServerDedicatedHd1

`func (o *ServerServiceInfo) HasServerDedicatedHd1() bool`

HasServerDedicatedHd1 returns a boolean if a field has been set.

### GetServerDedicatedHd2

`func (o *ServerServiceInfo) GetServerDedicatedHd2() interface{}`

GetServerDedicatedHd2 returns the ServerDedicatedHd2 field if non-nil, zero value otherwise.

### GetServerDedicatedHd2Ok

`func (o *ServerServiceInfo) GetServerDedicatedHd2Ok() (*interface{}, bool)`

GetServerDedicatedHd2Ok returns a tuple with the ServerDedicatedHd2 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerDedicatedHd2

`func (o *ServerServiceInfo) SetServerDedicatedHd2(v interface{})`

SetServerDedicatedHd2 sets ServerDedicatedHd2 field to given value.

### HasServerDedicatedHd2

`func (o *ServerServiceInfo) HasServerDedicatedHd2() bool`

HasServerDedicatedHd2 returns a boolean if a field has been set.

### SetServerDedicatedHd2Nil

`func (o *ServerServiceInfo) SetServerDedicatedHd2Nil(b bool)`

 SetServerDedicatedHd2Nil sets the value for ServerDedicatedHd2 to be an explicit nil

### UnsetServerDedicatedHd2
`func (o *ServerServiceInfo) UnsetServerDedicatedHd2()`

UnsetServerDedicatedHd2 ensures that no value is present for ServerDedicatedHd2, not even an explicit nil
### GetServerDedicatedBandwidth

`func (o *ServerServiceInfo) GetServerDedicatedBandwidth() string`

GetServerDedicatedBandwidth returns the ServerDedicatedBandwidth field if non-nil, zero value otherwise.

### GetServerDedicatedBandwidthOk

`func (o *ServerServiceInfo) GetServerDedicatedBandwidthOk() (*string, bool)`

GetServerDedicatedBandwidthOk returns a tuple with the ServerDedicatedBandwidth field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerDedicatedBandwidth

`func (o *ServerServiceInfo) SetServerDedicatedBandwidth(v string)`

SetServerDedicatedBandwidth sets ServerDedicatedBandwidth field to given value.

### HasServerDedicatedBandwidth

`func (o *ServerServiceInfo) HasServerDedicatedBandwidth() bool`

HasServerDedicatedBandwidth returns a boolean if a field has been set.

### GetServerDedicatedIps

`func (o *ServerServiceInfo) GetServerDedicatedIps() string`

GetServerDedicatedIps returns the ServerDedicatedIps field if non-nil, zero value otherwise.

### GetServerDedicatedIpsOk

`func (o *ServerServiceInfo) GetServerDedicatedIpsOk() (*string, bool)`

GetServerDedicatedIpsOk returns a tuple with the ServerDedicatedIps field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerDedicatedIps

`func (o *ServerServiceInfo) SetServerDedicatedIps(v string)`

SetServerDedicatedIps sets ServerDedicatedIps field to given value.

### HasServerDedicatedIps

`func (o *ServerServiceInfo) HasServerDedicatedIps() bool`

HasServerDedicatedIps returns a boolean if a field has been set.

### GetServerDedicatedOs

`func (o *ServerServiceInfo) GetServerDedicatedOs() string`

GetServerDedicatedOs returns the ServerDedicatedOs field if non-nil, zero value otherwise.

### GetServerDedicatedOsOk

`func (o *ServerServiceInfo) GetServerDedicatedOsOk() (*string, bool)`

GetServerDedicatedOsOk returns a tuple with the ServerDedicatedOs field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerDedicatedOs

`func (o *ServerServiceInfo) SetServerDedicatedOs(v string)`

SetServerDedicatedOs sets ServerDedicatedOs field to given value.

### HasServerDedicatedOs

`func (o *ServerServiceInfo) HasServerDedicatedOs() bool`

HasServerDedicatedOs returns a boolean if a field has been set.

### GetServerDedicatedCp

`func (o *ServerServiceInfo) GetServerDedicatedCp() interface{}`

GetServerDedicatedCp returns the ServerDedicatedCp field if non-nil, zero value otherwise.

### GetServerDedicatedCpOk

`func (o *ServerServiceInfo) GetServerDedicatedCpOk() (*interface{}, bool)`

GetServerDedicatedCpOk returns a tuple with the ServerDedicatedCp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerDedicatedCp

`func (o *ServerServiceInfo) SetServerDedicatedCp(v interface{})`

SetServerDedicatedCp sets ServerDedicatedCp field to given value.

### HasServerDedicatedCp

`func (o *ServerServiceInfo) HasServerDedicatedCp() bool`

HasServerDedicatedCp returns a boolean if a field has been set.

### SetServerDedicatedCpNil

`func (o *ServerServiceInfo) SetServerDedicatedCpNil(b bool)`

 SetServerDedicatedCpNil sets the value for ServerDedicatedCp to be an explicit nil

### UnsetServerDedicatedCp
`func (o *ServerServiceInfo) UnsetServerDedicatedCp()`

UnsetServerDedicatedCp ensures that no value is present for ServerDedicatedCp, not even an explicit nil
### GetServerDedicatedRaid

`func (o *ServerServiceInfo) GetServerDedicatedRaid() string`

GetServerDedicatedRaid returns the ServerDedicatedRaid field if non-nil, zero value otherwise.

### GetServerDedicatedRaidOk

`func (o *ServerServiceInfo) GetServerDedicatedRaidOk() (*string, bool)`

GetServerDedicatedRaidOk returns a tuple with the ServerDedicatedRaid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerDedicatedRaid

`func (o *ServerServiceInfo) SetServerDedicatedRaid(v string)`

SetServerDedicatedRaid sets ServerDedicatedRaid field to given value.

### HasServerDedicatedRaid

`func (o *ServerServiceInfo) HasServerDedicatedRaid() bool`

HasServerDedicatedRaid returns a boolean if a field has been set.

### GetServerExtra

`func (o *ServerServiceInfo) GetServerExtra() string`

GetServerExtra returns the ServerExtra field if non-nil, zero value otherwise.

### GetServerExtraOk

`func (o *ServerServiceInfo) GetServerExtraOk() (*string, bool)`

GetServerExtraOk returns a tuple with the ServerExtra field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServerExtra

`func (o *ServerServiceInfo) SetServerExtra(v string)`

SetServerExtra sets ServerExtra field to given value.

### HasServerExtra

`func (o *ServerServiceInfo) HasServerExtra() bool`

HasServerExtra returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


