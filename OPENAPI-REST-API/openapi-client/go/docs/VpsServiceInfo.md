# VpsServiceInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**VpsId** | Pointer to **string** | VPS ID | [optional] 
**VpsCustid** | Pointer to **string** | Customer ID | [optional] 
**VpsServer** | Pointer to **string** | Server ID | [optional] 
**VpsIp** | Pointer to **string** | IP address of the VPS | [optional] 
**VpsIpv6** | Pointer to **string** | IPv6 address of the VPS | [optional] 
**VpsVzid** | Pointer to **string** | VPS Virtuozzo ID | [optional] 
**VpsCurrency** | Pointer to **string** | Currency used for billing | [optional] 
**VpsType** | Pointer to **string** | VPS type | [optional] 
**VpsOrderDate** | Pointer to **string** | Date of VPS order | [optional] 
**VpsStatus** | Pointer to **string** | VPS status | [optional] 
**VpsInvoice** | Pointer to **string** | VPS invoice number | [optional] 
**VpsCoupon** | Pointer to **string** | VPS coupon code | [optional] 
**VpsExtra** | Pointer to **string** | Additional information about the VPS | [optional] 
**VpsHostname** | Pointer to **string** | VPS hostname | [optional] 
**VpsServerStatus** | Pointer to **string** | Status of the VPS server | [optional] 
**VpsComment** | Pointer to **string** | Comment associated with the VPS | [optional] 
**VpsSlices** | Pointer to **string** | Number of VPS slices | [optional] 
**VpsVnc** | Pointer to **string** | VNC address | [optional] 
**VpsVncPort** | Pointer to **string** | VNC port | [optional] 
**VpsRootpass** | Pointer to **string** | Root password of the VPS | [optional] 
**VpsMac** | Pointer to **string** | MAC address of the VPS | [optional] 
**VpsOs** | Pointer to **string** | Operating system of the VPS | [optional] 
**VpsVersion** | Pointer to **string** | Version of the operating system | [optional] 
**VpsLocation** | Pointer to **string** | Location of the VPS | [optional] 
**VpsPlatform** | Pointer to **string** | Virtualization platform | [optional] 
**VpsDiskused** | Pointer to **string** | Amount of disk space used | [optional] 
**VpsDiskmax** | Pointer to **string** | Maximum disk space available | [optional] 

## Methods

### NewVpsServiceInfo

`func NewVpsServiceInfo() *VpsServiceInfo`

NewVpsServiceInfo instantiates a new VpsServiceInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewVpsServiceInfoWithDefaults

`func NewVpsServiceInfoWithDefaults() *VpsServiceInfo`

NewVpsServiceInfoWithDefaults instantiates a new VpsServiceInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetVpsId

`func (o *VpsServiceInfo) GetVpsId() string`

GetVpsId returns the VpsId field if non-nil, zero value otherwise.

### GetVpsIdOk

`func (o *VpsServiceInfo) GetVpsIdOk() (*string, bool)`

GetVpsIdOk returns a tuple with the VpsId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsId

`func (o *VpsServiceInfo) SetVpsId(v string)`

SetVpsId sets VpsId field to given value.

### HasVpsId

`func (o *VpsServiceInfo) HasVpsId() bool`

HasVpsId returns a boolean if a field has been set.

### GetVpsCustid

`func (o *VpsServiceInfo) GetVpsCustid() string`

GetVpsCustid returns the VpsCustid field if non-nil, zero value otherwise.

### GetVpsCustidOk

`func (o *VpsServiceInfo) GetVpsCustidOk() (*string, bool)`

GetVpsCustidOk returns a tuple with the VpsCustid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsCustid

`func (o *VpsServiceInfo) SetVpsCustid(v string)`

SetVpsCustid sets VpsCustid field to given value.

### HasVpsCustid

`func (o *VpsServiceInfo) HasVpsCustid() bool`

HasVpsCustid returns a boolean if a field has been set.

### GetVpsServer

`func (o *VpsServiceInfo) GetVpsServer() string`

GetVpsServer returns the VpsServer field if non-nil, zero value otherwise.

### GetVpsServerOk

`func (o *VpsServiceInfo) GetVpsServerOk() (*string, bool)`

GetVpsServerOk returns a tuple with the VpsServer field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsServer

`func (o *VpsServiceInfo) SetVpsServer(v string)`

SetVpsServer sets VpsServer field to given value.

### HasVpsServer

`func (o *VpsServiceInfo) HasVpsServer() bool`

HasVpsServer returns a boolean if a field has been set.

### GetVpsIp

`func (o *VpsServiceInfo) GetVpsIp() string`

GetVpsIp returns the VpsIp field if non-nil, zero value otherwise.

### GetVpsIpOk

`func (o *VpsServiceInfo) GetVpsIpOk() (*string, bool)`

GetVpsIpOk returns a tuple with the VpsIp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsIp

`func (o *VpsServiceInfo) SetVpsIp(v string)`

SetVpsIp sets VpsIp field to given value.

### HasVpsIp

`func (o *VpsServiceInfo) HasVpsIp() bool`

HasVpsIp returns a boolean if a field has been set.

### GetVpsIpv6

`func (o *VpsServiceInfo) GetVpsIpv6() string`

GetVpsIpv6 returns the VpsIpv6 field if non-nil, zero value otherwise.

### GetVpsIpv6Ok

`func (o *VpsServiceInfo) GetVpsIpv6Ok() (*string, bool)`

GetVpsIpv6Ok returns a tuple with the VpsIpv6 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsIpv6

`func (o *VpsServiceInfo) SetVpsIpv6(v string)`

SetVpsIpv6 sets VpsIpv6 field to given value.

### HasVpsIpv6

`func (o *VpsServiceInfo) HasVpsIpv6() bool`

HasVpsIpv6 returns a boolean if a field has been set.

### GetVpsVzid

`func (o *VpsServiceInfo) GetVpsVzid() string`

GetVpsVzid returns the VpsVzid field if non-nil, zero value otherwise.

### GetVpsVzidOk

`func (o *VpsServiceInfo) GetVpsVzidOk() (*string, bool)`

GetVpsVzidOk returns a tuple with the VpsVzid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsVzid

`func (o *VpsServiceInfo) SetVpsVzid(v string)`

SetVpsVzid sets VpsVzid field to given value.

### HasVpsVzid

`func (o *VpsServiceInfo) HasVpsVzid() bool`

HasVpsVzid returns a boolean if a field has been set.

### GetVpsCurrency

`func (o *VpsServiceInfo) GetVpsCurrency() string`

GetVpsCurrency returns the VpsCurrency field if non-nil, zero value otherwise.

### GetVpsCurrencyOk

`func (o *VpsServiceInfo) GetVpsCurrencyOk() (*string, bool)`

GetVpsCurrencyOk returns a tuple with the VpsCurrency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsCurrency

`func (o *VpsServiceInfo) SetVpsCurrency(v string)`

SetVpsCurrency sets VpsCurrency field to given value.

### HasVpsCurrency

`func (o *VpsServiceInfo) HasVpsCurrency() bool`

HasVpsCurrency returns a boolean if a field has been set.

### GetVpsType

`func (o *VpsServiceInfo) GetVpsType() string`

GetVpsType returns the VpsType field if non-nil, zero value otherwise.

### GetVpsTypeOk

`func (o *VpsServiceInfo) GetVpsTypeOk() (*string, bool)`

GetVpsTypeOk returns a tuple with the VpsType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsType

`func (o *VpsServiceInfo) SetVpsType(v string)`

SetVpsType sets VpsType field to given value.

### HasVpsType

`func (o *VpsServiceInfo) HasVpsType() bool`

HasVpsType returns a boolean if a field has been set.

### GetVpsOrderDate

`func (o *VpsServiceInfo) GetVpsOrderDate() string`

GetVpsOrderDate returns the VpsOrderDate field if non-nil, zero value otherwise.

### GetVpsOrderDateOk

`func (o *VpsServiceInfo) GetVpsOrderDateOk() (*string, bool)`

GetVpsOrderDateOk returns a tuple with the VpsOrderDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsOrderDate

`func (o *VpsServiceInfo) SetVpsOrderDate(v string)`

SetVpsOrderDate sets VpsOrderDate field to given value.

### HasVpsOrderDate

`func (o *VpsServiceInfo) HasVpsOrderDate() bool`

HasVpsOrderDate returns a boolean if a field has been set.

### GetVpsStatus

`func (o *VpsServiceInfo) GetVpsStatus() string`

GetVpsStatus returns the VpsStatus field if non-nil, zero value otherwise.

### GetVpsStatusOk

`func (o *VpsServiceInfo) GetVpsStatusOk() (*string, bool)`

GetVpsStatusOk returns a tuple with the VpsStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsStatus

`func (o *VpsServiceInfo) SetVpsStatus(v string)`

SetVpsStatus sets VpsStatus field to given value.

### HasVpsStatus

`func (o *VpsServiceInfo) HasVpsStatus() bool`

HasVpsStatus returns a boolean if a field has been set.

### GetVpsInvoice

`func (o *VpsServiceInfo) GetVpsInvoice() string`

GetVpsInvoice returns the VpsInvoice field if non-nil, zero value otherwise.

### GetVpsInvoiceOk

`func (o *VpsServiceInfo) GetVpsInvoiceOk() (*string, bool)`

GetVpsInvoiceOk returns a tuple with the VpsInvoice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsInvoice

`func (o *VpsServiceInfo) SetVpsInvoice(v string)`

SetVpsInvoice sets VpsInvoice field to given value.

### HasVpsInvoice

`func (o *VpsServiceInfo) HasVpsInvoice() bool`

HasVpsInvoice returns a boolean if a field has been set.

### GetVpsCoupon

`func (o *VpsServiceInfo) GetVpsCoupon() string`

GetVpsCoupon returns the VpsCoupon field if non-nil, zero value otherwise.

### GetVpsCouponOk

`func (o *VpsServiceInfo) GetVpsCouponOk() (*string, bool)`

GetVpsCouponOk returns a tuple with the VpsCoupon field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsCoupon

`func (o *VpsServiceInfo) SetVpsCoupon(v string)`

SetVpsCoupon sets VpsCoupon field to given value.

### HasVpsCoupon

`func (o *VpsServiceInfo) HasVpsCoupon() bool`

HasVpsCoupon returns a boolean if a field has been set.

### GetVpsExtra

`func (o *VpsServiceInfo) GetVpsExtra() string`

GetVpsExtra returns the VpsExtra field if non-nil, zero value otherwise.

### GetVpsExtraOk

`func (o *VpsServiceInfo) GetVpsExtraOk() (*string, bool)`

GetVpsExtraOk returns a tuple with the VpsExtra field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsExtra

`func (o *VpsServiceInfo) SetVpsExtra(v string)`

SetVpsExtra sets VpsExtra field to given value.

### HasVpsExtra

`func (o *VpsServiceInfo) HasVpsExtra() bool`

HasVpsExtra returns a boolean if a field has been set.

### GetVpsHostname

`func (o *VpsServiceInfo) GetVpsHostname() string`

GetVpsHostname returns the VpsHostname field if non-nil, zero value otherwise.

### GetVpsHostnameOk

`func (o *VpsServiceInfo) GetVpsHostnameOk() (*string, bool)`

GetVpsHostnameOk returns a tuple with the VpsHostname field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsHostname

`func (o *VpsServiceInfo) SetVpsHostname(v string)`

SetVpsHostname sets VpsHostname field to given value.

### HasVpsHostname

`func (o *VpsServiceInfo) HasVpsHostname() bool`

HasVpsHostname returns a boolean if a field has been set.

### GetVpsServerStatus

`func (o *VpsServiceInfo) GetVpsServerStatus() string`

GetVpsServerStatus returns the VpsServerStatus field if non-nil, zero value otherwise.

### GetVpsServerStatusOk

`func (o *VpsServiceInfo) GetVpsServerStatusOk() (*string, bool)`

GetVpsServerStatusOk returns a tuple with the VpsServerStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsServerStatus

`func (o *VpsServiceInfo) SetVpsServerStatus(v string)`

SetVpsServerStatus sets VpsServerStatus field to given value.

### HasVpsServerStatus

`func (o *VpsServiceInfo) HasVpsServerStatus() bool`

HasVpsServerStatus returns a boolean if a field has been set.

### GetVpsComment

`func (o *VpsServiceInfo) GetVpsComment() string`

GetVpsComment returns the VpsComment field if non-nil, zero value otherwise.

### GetVpsCommentOk

`func (o *VpsServiceInfo) GetVpsCommentOk() (*string, bool)`

GetVpsCommentOk returns a tuple with the VpsComment field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsComment

`func (o *VpsServiceInfo) SetVpsComment(v string)`

SetVpsComment sets VpsComment field to given value.

### HasVpsComment

`func (o *VpsServiceInfo) HasVpsComment() bool`

HasVpsComment returns a boolean if a field has been set.

### GetVpsSlices

`func (o *VpsServiceInfo) GetVpsSlices() string`

GetVpsSlices returns the VpsSlices field if non-nil, zero value otherwise.

### GetVpsSlicesOk

`func (o *VpsServiceInfo) GetVpsSlicesOk() (*string, bool)`

GetVpsSlicesOk returns a tuple with the VpsSlices field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsSlices

`func (o *VpsServiceInfo) SetVpsSlices(v string)`

SetVpsSlices sets VpsSlices field to given value.

### HasVpsSlices

`func (o *VpsServiceInfo) HasVpsSlices() bool`

HasVpsSlices returns a boolean if a field has been set.

### GetVpsVnc

`func (o *VpsServiceInfo) GetVpsVnc() string`

GetVpsVnc returns the VpsVnc field if non-nil, zero value otherwise.

### GetVpsVncOk

`func (o *VpsServiceInfo) GetVpsVncOk() (*string, bool)`

GetVpsVncOk returns a tuple with the VpsVnc field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsVnc

`func (o *VpsServiceInfo) SetVpsVnc(v string)`

SetVpsVnc sets VpsVnc field to given value.

### HasVpsVnc

`func (o *VpsServiceInfo) HasVpsVnc() bool`

HasVpsVnc returns a boolean if a field has been set.

### GetVpsVncPort

`func (o *VpsServiceInfo) GetVpsVncPort() string`

GetVpsVncPort returns the VpsVncPort field if non-nil, zero value otherwise.

### GetVpsVncPortOk

`func (o *VpsServiceInfo) GetVpsVncPortOk() (*string, bool)`

GetVpsVncPortOk returns a tuple with the VpsVncPort field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsVncPort

`func (o *VpsServiceInfo) SetVpsVncPort(v string)`

SetVpsVncPort sets VpsVncPort field to given value.

### HasVpsVncPort

`func (o *VpsServiceInfo) HasVpsVncPort() bool`

HasVpsVncPort returns a boolean if a field has been set.

### GetVpsRootpass

`func (o *VpsServiceInfo) GetVpsRootpass() string`

GetVpsRootpass returns the VpsRootpass field if non-nil, zero value otherwise.

### GetVpsRootpassOk

`func (o *VpsServiceInfo) GetVpsRootpassOk() (*string, bool)`

GetVpsRootpassOk returns a tuple with the VpsRootpass field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsRootpass

`func (o *VpsServiceInfo) SetVpsRootpass(v string)`

SetVpsRootpass sets VpsRootpass field to given value.

### HasVpsRootpass

`func (o *VpsServiceInfo) HasVpsRootpass() bool`

HasVpsRootpass returns a boolean if a field has been set.

### GetVpsMac

`func (o *VpsServiceInfo) GetVpsMac() string`

GetVpsMac returns the VpsMac field if non-nil, zero value otherwise.

### GetVpsMacOk

`func (o *VpsServiceInfo) GetVpsMacOk() (*string, bool)`

GetVpsMacOk returns a tuple with the VpsMac field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsMac

`func (o *VpsServiceInfo) SetVpsMac(v string)`

SetVpsMac sets VpsMac field to given value.

### HasVpsMac

`func (o *VpsServiceInfo) HasVpsMac() bool`

HasVpsMac returns a boolean if a field has been set.

### GetVpsOs

`func (o *VpsServiceInfo) GetVpsOs() string`

GetVpsOs returns the VpsOs field if non-nil, zero value otherwise.

### GetVpsOsOk

`func (o *VpsServiceInfo) GetVpsOsOk() (*string, bool)`

GetVpsOsOk returns a tuple with the VpsOs field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsOs

`func (o *VpsServiceInfo) SetVpsOs(v string)`

SetVpsOs sets VpsOs field to given value.

### HasVpsOs

`func (o *VpsServiceInfo) HasVpsOs() bool`

HasVpsOs returns a boolean if a field has been set.

### GetVpsVersion

`func (o *VpsServiceInfo) GetVpsVersion() string`

GetVpsVersion returns the VpsVersion field if non-nil, zero value otherwise.

### GetVpsVersionOk

`func (o *VpsServiceInfo) GetVpsVersionOk() (*string, bool)`

GetVpsVersionOk returns a tuple with the VpsVersion field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsVersion

`func (o *VpsServiceInfo) SetVpsVersion(v string)`

SetVpsVersion sets VpsVersion field to given value.

### HasVpsVersion

`func (o *VpsServiceInfo) HasVpsVersion() bool`

HasVpsVersion returns a boolean if a field has been set.

### GetVpsLocation

`func (o *VpsServiceInfo) GetVpsLocation() string`

GetVpsLocation returns the VpsLocation field if non-nil, zero value otherwise.

### GetVpsLocationOk

`func (o *VpsServiceInfo) GetVpsLocationOk() (*string, bool)`

GetVpsLocationOk returns a tuple with the VpsLocation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsLocation

`func (o *VpsServiceInfo) SetVpsLocation(v string)`

SetVpsLocation sets VpsLocation field to given value.

### HasVpsLocation

`func (o *VpsServiceInfo) HasVpsLocation() bool`

HasVpsLocation returns a boolean if a field has been set.

### GetVpsPlatform

`func (o *VpsServiceInfo) GetVpsPlatform() string`

GetVpsPlatform returns the VpsPlatform field if non-nil, zero value otherwise.

### GetVpsPlatformOk

`func (o *VpsServiceInfo) GetVpsPlatformOk() (*string, bool)`

GetVpsPlatformOk returns a tuple with the VpsPlatform field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsPlatform

`func (o *VpsServiceInfo) SetVpsPlatform(v string)`

SetVpsPlatform sets VpsPlatform field to given value.

### HasVpsPlatform

`func (o *VpsServiceInfo) HasVpsPlatform() bool`

HasVpsPlatform returns a boolean if a field has been set.

### GetVpsDiskused

`func (o *VpsServiceInfo) GetVpsDiskused() string`

GetVpsDiskused returns the VpsDiskused field if non-nil, zero value otherwise.

### GetVpsDiskusedOk

`func (o *VpsServiceInfo) GetVpsDiskusedOk() (*string, bool)`

GetVpsDiskusedOk returns a tuple with the VpsDiskused field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsDiskused

`func (o *VpsServiceInfo) SetVpsDiskused(v string)`

SetVpsDiskused sets VpsDiskused field to given value.

### HasVpsDiskused

`func (o *VpsServiceInfo) HasVpsDiskused() bool`

HasVpsDiskused returns a boolean if a field has been set.

### GetVpsDiskmax

`func (o *VpsServiceInfo) GetVpsDiskmax() string`

GetVpsDiskmax returns the VpsDiskmax field if non-nil, zero value otherwise.

### GetVpsDiskmaxOk

`func (o *VpsServiceInfo) GetVpsDiskmaxOk() (*string, bool)`

GetVpsDiskmaxOk returns a tuple with the VpsDiskmax field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsDiskmax

`func (o *VpsServiceInfo) SetVpsDiskmax(v string)`

SetVpsDiskmax sets VpsDiskmax field to given value.

### HasVpsDiskmax

`func (o *VpsServiceInfo) HasVpsDiskmax() bool`

HasVpsDiskmax returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


