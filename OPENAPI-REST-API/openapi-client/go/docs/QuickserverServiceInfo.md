# QuickserverServiceInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**QsId** | Pointer to **string** | Quickserver ID | [optional] 
**QsCustid** | Pointer to **string** | Customer ID | [optional] 
**QsServer** | Pointer to **string** | Server information | [optional] 
**QsIp** | Pointer to **string** | IP address | [optional] 
**QsIpv6** | Pointer to **NullableString** | IPv6 address (null) | [optional] 
**QsVzid** | Pointer to **string** | VZ ID | [optional] 
**QsCurrency** | Pointer to **string** | Currency | [optional] 
**QsType** | Pointer to **string** | Type | [optional] 
**QsOrderDate** | Pointer to **string** | Order date | [optional] 
**QsStatus** | Pointer to **string** | Status | [optional] 
**QsInvoice** | Pointer to **string** | Invoice number | [optional] 
**QsCoupon** | Pointer to **string** | Coupon information | [optional] 
**QsExtra** | Pointer to **string** | Extra information | [optional] 
**QsHostname** | Pointer to **string** | Hostname | [optional] 
**QsServerStatus** | Pointer to **string** | Server status | [optional] 
**QsComment** | Pointer to **string** | Comment | [optional] 
**QsSlices** | Pointer to **string** | Slices information | [optional] 
**QsVnc** | Pointer to **string** | VNC information | [optional] 
**QsVncPort** | Pointer to **NullableInt32** | VNC port (null) | [optional] 
**QsRootpass** | Pointer to **string** | Root password | [optional] 
**QsMac** | Pointer to **string** | MAC address | [optional] 
**QsOs** | Pointer to **string** | Operating system | [optional] 
**QsVersion** | Pointer to **string** | OS version | [optional] 
**QsLocation** | Pointer to **string** | Location | [optional] 
**QsPlatform** | Pointer to **NullableString** | Platform (null) | [optional] 

## Methods

### NewQuickserverServiceInfo

`func NewQuickserverServiceInfo() *QuickserverServiceInfo`

NewQuickserverServiceInfo instantiates a new QuickserverServiceInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewQuickserverServiceInfoWithDefaults

`func NewQuickserverServiceInfoWithDefaults() *QuickserverServiceInfo`

NewQuickserverServiceInfoWithDefaults instantiates a new QuickserverServiceInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetQsId

`func (o *QuickserverServiceInfo) GetQsId() string`

GetQsId returns the QsId field if non-nil, zero value otherwise.

### GetQsIdOk

`func (o *QuickserverServiceInfo) GetQsIdOk() (*string, bool)`

GetQsIdOk returns a tuple with the QsId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsId

`func (o *QuickserverServiceInfo) SetQsId(v string)`

SetQsId sets QsId field to given value.

### HasQsId

`func (o *QuickserverServiceInfo) HasQsId() bool`

HasQsId returns a boolean if a field has been set.

### GetQsCustid

`func (o *QuickserverServiceInfo) GetQsCustid() string`

GetQsCustid returns the QsCustid field if non-nil, zero value otherwise.

### GetQsCustidOk

`func (o *QuickserverServiceInfo) GetQsCustidOk() (*string, bool)`

GetQsCustidOk returns a tuple with the QsCustid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsCustid

`func (o *QuickserverServiceInfo) SetQsCustid(v string)`

SetQsCustid sets QsCustid field to given value.

### HasQsCustid

`func (o *QuickserverServiceInfo) HasQsCustid() bool`

HasQsCustid returns a boolean if a field has been set.

### GetQsServer

`func (o *QuickserverServiceInfo) GetQsServer() string`

GetQsServer returns the QsServer field if non-nil, zero value otherwise.

### GetQsServerOk

`func (o *QuickserverServiceInfo) GetQsServerOk() (*string, bool)`

GetQsServerOk returns a tuple with the QsServer field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsServer

`func (o *QuickserverServiceInfo) SetQsServer(v string)`

SetQsServer sets QsServer field to given value.

### HasQsServer

`func (o *QuickserverServiceInfo) HasQsServer() bool`

HasQsServer returns a boolean if a field has been set.

### GetQsIp

`func (o *QuickserverServiceInfo) GetQsIp() string`

GetQsIp returns the QsIp field if non-nil, zero value otherwise.

### GetQsIpOk

`func (o *QuickserverServiceInfo) GetQsIpOk() (*string, bool)`

GetQsIpOk returns a tuple with the QsIp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsIp

`func (o *QuickserverServiceInfo) SetQsIp(v string)`

SetQsIp sets QsIp field to given value.

### HasQsIp

`func (o *QuickserverServiceInfo) HasQsIp() bool`

HasQsIp returns a boolean if a field has been set.

### GetQsIpv6

`func (o *QuickserverServiceInfo) GetQsIpv6() string`

GetQsIpv6 returns the QsIpv6 field if non-nil, zero value otherwise.

### GetQsIpv6Ok

`func (o *QuickserverServiceInfo) GetQsIpv6Ok() (*string, bool)`

GetQsIpv6Ok returns a tuple with the QsIpv6 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsIpv6

`func (o *QuickserverServiceInfo) SetQsIpv6(v string)`

SetQsIpv6 sets QsIpv6 field to given value.

### HasQsIpv6

`func (o *QuickserverServiceInfo) HasQsIpv6() bool`

HasQsIpv6 returns a boolean if a field has been set.

### SetQsIpv6Nil

`func (o *QuickserverServiceInfo) SetQsIpv6Nil(b bool)`

 SetQsIpv6Nil sets the value for QsIpv6 to be an explicit nil

### UnsetQsIpv6
`func (o *QuickserverServiceInfo) UnsetQsIpv6()`

UnsetQsIpv6 ensures that no value is present for QsIpv6, not even an explicit nil
### GetQsVzid

`func (o *QuickserverServiceInfo) GetQsVzid() string`

GetQsVzid returns the QsVzid field if non-nil, zero value otherwise.

### GetQsVzidOk

`func (o *QuickserverServiceInfo) GetQsVzidOk() (*string, bool)`

GetQsVzidOk returns a tuple with the QsVzid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsVzid

`func (o *QuickserverServiceInfo) SetQsVzid(v string)`

SetQsVzid sets QsVzid field to given value.

### HasQsVzid

`func (o *QuickserverServiceInfo) HasQsVzid() bool`

HasQsVzid returns a boolean if a field has been set.

### GetQsCurrency

`func (o *QuickserverServiceInfo) GetQsCurrency() string`

GetQsCurrency returns the QsCurrency field if non-nil, zero value otherwise.

### GetQsCurrencyOk

`func (o *QuickserverServiceInfo) GetQsCurrencyOk() (*string, bool)`

GetQsCurrencyOk returns a tuple with the QsCurrency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsCurrency

`func (o *QuickserverServiceInfo) SetQsCurrency(v string)`

SetQsCurrency sets QsCurrency field to given value.

### HasQsCurrency

`func (o *QuickserverServiceInfo) HasQsCurrency() bool`

HasQsCurrency returns a boolean if a field has been set.

### GetQsType

`func (o *QuickserverServiceInfo) GetQsType() string`

GetQsType returns the QsType field if non-nil, zero value otherwise.

### GetQsTypeOk

`func (o *QuickserverServiceInfo) GetQsTypeOk() (*string, bool)`

GetQsTypeOk returns a tuple with the QsType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsType

`func (o *QuickserverServiceInfo) SetQsType(v string)`

SetQsType sets QsType field to given value.

### HasQsType

`func (o *QuickserverServiceInfo) HasQsType() bool`

HasQsType returns a boolean if a field has been set.

### GetQsOrderDate

`func (o *QuickserverServiceInfo) GetQsOrderDate() string`

GetQsOrderDate returns the QsOrderDate field if non-nil, zero value otherwise.

### GetQsOrderDateOk

`func (o *QuickserverServiceInfo) GetQsOrderDateOk() (*string, bool)`

GetQsOrderDateOk returns a tuple with the QsOrderDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsOrderDate

`func (o *QuickserverServiceInfo) SetQsOrderDate(v string)`

SetQsOrderDate sets QsOrderDate field to given value.

### HasQsOrderDate

`func (o *QuickserverServiceInfo) HasQsOrderDate() bool`

HasQsOrderDate returns a boolean if a field has been set.

### GetQsStatus

`func (o *QuickserverServiceInfo) GetQsStatus() string`

GetQsStatus returns the QsStatus field if non-nil, zero value otherwise.

### GetQsStatusOk

`func (o *QuickserverServiceInfo) GetQsStatusOk() (*string, bool)`

GetQsStatusOk returns a tuple with the QsStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsStatus

`func (o *QuickserverServiceInfo) SetQsStatus(v string)`

SetQsStatus sets QsStatus field to given value.

### HasQsStatus

`func (o *QuickserverServiceInfo) HasQsStatus() bool`

HasQsStatus returns a boolean if a field has been set.

### GetQsInvoice

`func (o *QuickserverServiceInfo) GetQsInvoice() string`

GetQsInvoice returns the QsInvoice field if non-nil, zero value otherwise.

### GetQsInvoiceOk

`func (o *QuickserverServiceInfo) GetQsInvoiceOk() (*string, bool)`

GetQsInvoiceOk returns a tuple with the QsInvoice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsInvoice

`func (o *QuickserverServiceInfo) SetQsInvoice(v string)`

SetQsInvoice sets QsInvoice field to given value.

### HasQsInvoice

`func (o *QuickserverServiceInfo) HasQsInvoice() bool`

HasQsInvoice returns a boolean if a field has been set.

### GetQsCoupon

`func (o *QuickserverServiceInfo) GetQsCoupon() string`

GetQsCoupon returns the QsCoupon field if non-nil, zero value otherwise.

### GetQsCouponOk

`func (o *QuickserverServiceInfo) GetQsCouponOk() (*string, bool)`

GetQsCouponOk returns a tuple with the QsCoupon field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsCoupon

`func (o *QuickserverServiceInfo) SetQsCoupon(v string)`

SetQsCoupon sets QsCoupon field to given value.

### HasQsCoupon

`func (o *QuickserverServiceInfo) HasQsCoupon() bool`

HasQsCoupon returns a boolean if a field has been set.

### GetQsExtra

`func (o *QuickserverServiceInfo) GetQsExtra() string`

GetQsExtra returns the QsExtra field if non-nil, zero value otherwise.

### GetQsExtraOk

`func (o *QuickserverServiceInfo) GetQsExtraOk() (*string, bool)`

GetQsExtraOk returns a tuple with the QsExtra field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsExtra

`func (o *QuickserverServiceInfo) SetQsExtra(v string)`

SetQsExtra sets QsExtra field to given value.

### HasQsExtra

`func (o *QuickserverServiceInfo) HasQsExtra() bool`

HasQsExtra returns a boolean if a field has been set.

### GetQsHostname

`func (o *QuickserverServiceInfo) GetQsHostname() string`

GetQsHostname returns the QsHostname field if non-nil, zero value otherwise.

### GetQsHostnameOk

`func (o *QuickserverServiceInfo) GetQsHostnameOk() (*string, bool)`

GetQsHostnameOk returns a tuple with the QsHostname field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsHostname

`func (o *QuickserverServiceInfo) SetQsHostname(v string)`

SetQsHostname sets QsHostname field to given value.

### HasQsHostname

`func (o *QuickserverServiceInfo) HasQsHostname() bool`

HasQsHostname returns a boolean if a field has been set.

### GetQsServerStatus

`func (o *QuickserverServiceInfo) GetQsServerStatus() string`

GetQsServerStatus returns the QsServerStatus field if non-nil, zero value otherwise.

### GetQsServerStatusOk

`func (o *QuickserverServiceInfo) GetQsServerStatusOk() (*string, bool)`

GetQsServerStatusOk returns a tuple with the QsServerStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsServerStatus

`func (o *QuickserverServiceInfo) SetQsServerStatus(v string)`

SetQsServerStatus sets QsServerStatus field to given value.

### HasQsServerStatus

`func (o *QuickserverServiceInfo) HasQsServerStatus() bool`

HasQsServerStatus returns a boolean if a field has been set.

### GetQsComment

`func (o *QuickserverServiceInfo) GetQsComment() string`

GetQsComment returns the QsComment field if non-nil, zero value otherwise.

### GetQsCommentOk

`func (o *QuickserverServiceInfo) GetQsCommentOk() (*string, bool)`

GetQsCommentOk returns a tuple with the QsComment field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsComment

`func (o *QuickserverServiceInfo) SetQsComment(v string)`

SetQsComment sets QsComment field to given value.

### HasQsComment

`func (o *QuickserverServiceInfo) HasQsComment() bool`

HasQsComment returns a boolean if a field has been set.

### GetQsSlices

`func (o *QuickserverServiceInfo) GetQsSlices() string`

GetQsSlices returns the QsSlices field if non-nil, zero value otherwise.

### GetQsSlicesOk

`func (o *QuickserverServiceInfo) GetQsSlicesOk() (*string, bool)`

GetQsSlicesOk returns a tuple with the QsSlices field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsSlices

`func (o *QuickserverServiceInfo) SetQsSlices(v string)`

SetQsSlices sets QsSlices field to given value.

### HasQsSlices

`func (o *QuickserverServiceInfo) HasQsSlices() bool`

HasQsSlices returns a boolean if a field has been set.

### GetQsVnc

`func (o *QuickserverServiceInfo) GetQsVnc() string`

GetQsVnc returns the QsVnc field if non-nil, zero value otherwise.

### GetQsVncOk

`func (o *QuickserverServiceInfo) GetQsVncOk() (*string, bool)`

GetQsVncOk returns a tuple with the QsVnc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsVnc

`func (o *QuickserverServiceInfo) SetQsVnc(v string)`

SetQsVnc sets QsVnc field to given value.

### HasQsVnc

`func (o *QuickserverServiceInfo) HasQsVnc() bool`

HasQsVnc returns a boolean if a field has been set.

### GetQsVncPort

`func (o *QuickserverServiceInfo) GetQsVncPort() int32`

GetQsVncPort returns the QsVncPort field if non-nil, zero value otherwise.

### GetQsVncPortOk

`func (o *QuickserverServiceInfo) GetQsVncPortOk() (*int32, bool)`

GetQsVncPortOk returns a tuple with the QsVncPort field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsVncPort

`func (o *QuickserverServiceInfo) SetQsVncPort(v int32)`

SetQsVncPort sets QsVncPort field to given value.

### HasQsVncPort

`func (o *QuickserverServiceInfo) HasQsVncPort() bool`

HasQsVncPort returns a boolean if a field has been set.

### SetQsVncPortNil

`func (o *QuickserverServiceInfo) SetQsVncPortNil(b bool)`

 SetQsVncPortNil sets the value for QsVncPort to be an explicit nil

### UnsetQsVncPort
`func (o *QuickserverServiceInfo) UnsetQsVncPort()`

UnsetQsVncPort ensures that no value is present for QsVncPort, not even an explicit nil
### GetQsRootpass

`func (o *QuickserverServiceInfo) GetQsRootpass() string`

GetQsRootpass returns the QsRootpass field if non-nil, zero value otherwise.

### GetQsRootpassOk

`func (o *QuickserverServiceInfo) GetQsRootpassOk() (*string, bool)`

GetQsRootpassOk returns a tuple with the QsRootpass field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsRootpass

`func (o *QuickserverServiceInfo) SetQsRootpass(v string)`

SetQsRootpass sets QsRootpass field to given value.

### HasQsRootpass

`func (o *QuickserverServiceInfo) HasQsRootpass() bool`

HasQsRootpass returns a boolean if a field has been set.

### GetQsMac

`func (o *QuickserverServiceInfo) GetQsMac() string`

GetQsMac returns the QsMac field if non-nil, zero value otherwise.

### GetQsMacOk

`func (o *QuickserverServiceInfo) GetQsMacOk() (*string, bool)`

GetQsMacOk returns a tuple with the QsMac field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsMac

`func (o *QuickserverServiceInfo) SetQsMac(v string)`

SetQsMac sets QsMac field to given value.

### HasQsMac

`func (o *QuickserverServiceInfo) HasQsMac() bool`

HasQsMac returns a boolean if a field has been set.

### GetQsOs

`func (o *QuickserverServiceInfo) GetQsOs() string`

GetQsOs returns the QsOs field if non-nil, zero value otherwise.

### GetQsOsOk

`func (o *QuickserverServiceInfo) GetQsOsOk() (*string, bool)`

GetQsOsOk returns a tuple with the QsOs field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsOs

`func (o *QuickserverServiceInfo) SetQsOs(v string)`

SetQsOs sets QsOs field to given value.

### HasQsOs

`func (o *QuickserverServiceInfo) HasQsOs() bool`

HasQsOs returns a boolean if a field has been set.

### GetQsVersion

`func (o *QuickserverServiceInfo) GetQsVersion() string`

GetQsVersion returns the QsVersion field if non-nil, zero value otherwise.

### GetQsVersionOk

`func (o *QuickserverServiceInfo) GetQsVersionOk() (*string, bool)`

GetQsVersionOk returns a tuple with the QsVersion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsVersion

`func (o *QuickserverServiceInfo) SetQsVersion(v string)`

SetQsVersion sets QsVersion field to given value.

### HasQsVersion

`func (o *QuickserverServiceInfo) HasQsVersion() bool`

HasQsVersion returns a boolean if a field has been set.

### GetQsLocation

`func (o *QuickserverServiceInfo) GetQsLocation() string`

GetQsLocation returns the QsLocation field if non-nil, zero value otherwise.

### GetQsLocationOk

`func (o *QuickserverServiceInfo) GetQsLocationOk() (*string, bool)`

GetQsLocationOk returns a tuple with the QsLocation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsLocation

`func (o *QuickserverServiceInfo) SetQsLocation(v string)`

SetQsLocation sets QsLocation field to given value.

### HasQsLocation

`func (o *QuickserverServiceInfo) HasQsLocation() bool`

HasQsLocation returns a boolean if a field has been set.

### GetQsPlatform

`func (o *QuickserverServiceInfo) GetQsPlatform() string`

GetQsPlatform returns the QsPlatform field if non-nil, zero value otherwise.

### GetQsPlatformOk

`func (o *QuickserverServiceInfo) GetQsPlatformOk() (*string, bool)`

GetQsPlatformOk returns a tuple with the QsPlatform field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetQsPlatform

`func (o *QuickserverServiceInfo) SetQsPlatform(v string)`

SetQsPlatform sets QsPlatform field to given value.

### HasQsPlatform

`func (o *QuickserverServiceInfo) HasQsPlatform() bool`

HasQsPlatform returns a boolean if a field has been set.

### SetQsPlatformNil

`func (o *QuickserverServiceInfo) SetQsPlatformNil(b bool)`

 SetQsPlatformNil sets the value for QsPlatform to be an explicit nil

### UnsetQsPlatform
`func (o *QuickserverServiceInfo) UnsetQsPlatform()`

UnsetQsPlatform ensures that no value is present for QsPlatform, not even an explicit nil

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


