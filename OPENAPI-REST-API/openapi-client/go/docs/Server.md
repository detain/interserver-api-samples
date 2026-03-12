# Server

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**IpmiAuth** | **bool** |  | 
**ClientLinks** | [**[]ServerClientLink**](ServerClientLink.md) |  | 
**BillingDetails** | [**ServerBillingDetails**](ServerBillingDetails.md) |  | 
**CustCurrency** | **string** |  | 
**CustCurrencySymbol** | **string** |  | 
**Package** | **string** |  | 
**ServiceExtra** | **[]string** |  | 
**Locations** | [**ServerLocations**](ServerLocations.md) |  | 
**NetworkInfo** | [**ServerNetworkInfo**](ServerNetworkInfo.md) |  | 
**ExtraInfoTables** | [**ServerExtraInfoTables**](ServerExtraInfoTables.md) |  | 
**ServiceInfo** | [**ServerServiceInfo**](ServerServiceInfo.md) |  | 

## Methods

### NewServer

`func NewServer(ipmiAuth bool, clientLinks []ServerClientLink, billingDetails ServerBillingDetails, custCurrency string, custCurrencySymbol string, package_ string, serviceExtra []string, locations ServerLocations, networkInfo ServerNetworkInfo, extraInfoTables ServerExtraInfoTables, serviceInfo ServerServiceInfo, ) *Server`

NewServer instantiates a new Server object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewServerWithDefaults

`func NewServerWithDefaults() *Server`

NewServerWithDefaults instantiates a new Server object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetIpmiAuth

`func (o *Server) GetIpmiAuth() bool`

GetIpmiAuth returns the IpmiAuth field if non-nil, zero value otherwise.

### GetIpmiAuthOk

`func (o *Server) GetIpmiAuthOk() (*bool, bool)`

GetIpmiAuthOk returns a tuple with the IpmiAuth field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIpmiAuth

`func (o *Server) SetIpmiAuth(v bool)`

SetIpmiAuth sets IpmiAuth field to given value.


### GetClientLinks

`func (o *Server) GetClientLinks() []ServerClientLink`

GetClientLinks returns the ClientLinks field if non-nil, zero value otherwise.

### GetClientLinksOk

`func (o *Server) GetClientLinksOk() (*[]ServerClientLink, bool)`

GetClientLinksOk returns a tuple with the ClientLinks field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetClientLinks

`func (o *Server) SetClientLinks(v []ServerClientLink)`

SetClientLinks sets ClientLinks field to given value.


### GetBillingDetails

`func (o *Server) GetBillingDetails() ServerBillingDetails`

GetBillingDetails returns the BillingDetails field if non-nil, zero value otherwise.

### GetBillingDetailsOk

`func (o *Server) GetBillingDetailsOk() (*ServerBillingDetails, bool)`

GetBillingDetailsOk returns a tuple with the BillingDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBillingDetails

`func (o *Server) SetBillingDetails(v ServerBillingDetails)`

SetBillingDetails sets BillingDetails field to given value.


### GetCustCurrency

`func (o *Server) GetCustCurrency() string`

GetCustCurrency returns the CustCurrency field if non-nil, zero value otherwise.

### GetCustCurrencyOk

`func (o *Server) GetCustCurrencyOk() (*string, bool)`

GetCustCurrencyOk returns a tuple with the CustCurrency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustCurrency

`func (o *Server) SetCustCurrency(v string)`

SetCustCurrency sets CustCurrency field to given value.


### GetCustCurrencySymbol

`func (o *Server) GetCustCurrencySymbol() string`

GetCustCurrencySymbol returns the CustCurrencySymbol field if non-nil, zero value otherwise.

### GetCustCurrencySymbolOk

`func (o *Server) GetCustCurrencySymbolOk() (*string, bool)`

GetCustCurrencySymbolOk returns a tuple with the CustCurrencySymbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustCurrencySymbol

`func (o *Server) SetCustCurrencySymbol(v string)`

SetCustCurrencySymbol sets CustCurrencySymbol field to given value.


### GetPackage

`func (o *Server) GetPackage() string`

GetPackage returns the Package field if non-nil, zero value otherwise.

### GetPackageOk

`func (o *Server) GetPackageOk() (*string, bool)`

GetPackageOk returns a tuple with the Package field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPackage

`func (o *Server) SetPackage(v string)`

SetPackage sets Package field to given value.


### GetServiceExtra

`func (o *Server) GetServiceExtra() []string`

GetServiceExtra returns the ServiceExtra field if non-nil, zero value otherwise.

### GetServiceExtraOk

`func (o *Server) GetServiceExtraOk() (*[]string, bool)`

GetServiceExtraOk returns a tuple with the ServiceExtra field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceExtra

`func (o *Server) SetServiceExtra(v []string)`

SetServiceExtra sets ServiceExtra field to given value.


### GetLocations

`func (o *Server) GetLocations() ServerLocations`

GetLocations returns the Locations field if non-nil, zero value otherwise.

### GetLocationsOk

`func (o *Server) GetLocationsOk() (*ServerLocations, bool)`

GetLocationsOk returns a tuple with the Locations field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocations

`func (o *Server) SetLocations(v ServerLocations)`

SetLocations sets Locations field to given value.


### GetNetworkInfo

`func (o *Server) GetNetworkInfo() ServerNetworkInfo`

GetNetworkInfo returns the NetworkInfo field if non-nil, zero value otherwise.

### GetNetworkInfoOk

`func (o *Server) GetNetworkInfoOk() (*ServerNetworkInfo, bool)`

GetNetworkInfoOk returns a tuple with the NetworkInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNetworkInfo

`func (o *Server) SetNetworkInfo(v ServerNetworkInfo)`

SetNetworkInfo sets NetworkInfo field to given value.


### GetExtraInfoTables

`func (o *Server) GetExtraInfoTables() ServerExtraInfoTables`

GetExtraInfoTables returns the ExtraInfoTables field if non-nil, zero value otherwise.

### GetExtraInfoTablesOk

`func (o *Server) GetExtraInfoTablesOk() (*ServerExtraInfoTables, bool)`

GetExtraInfoTablesOk returns a tuple with the ExtraInfoTables field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtraInfoTables

`func (o *Server) SetExtraInfoTables(v ServerExtraInfoTables)`

SetExtraInfoTables sets ExtraInfoTables field to given value.


### GetServiceInfo

`func (o *Server) GetServiceInfo() ServerServiceInfo`

GetServiceInfo returns the ServiceInfo field if non-nil, zero value otherwise.

### GetServiceInfoOk

`func (o *Server) GetServiceInfoOk() (*ServerServiceInfo, bool)`

GetServiceInfoOk returns a tuple with the ServiceInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceInfo

`func (o *Server) SetServiceInfo(v ServerServiceInfo)`

SetServiceInfo sets ServiceInfo field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


