# License

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServiceInfo** | [**LicenseServiceInfo**](LicenseServiceInfo.md) |  | 
**ClientLinks** | [**[]LicenseClientLink**](LicenseClientLink.md) |  | 
**BillingDetails** | [**LicenseBillingDetails**](LicenseBillingDetails.md) |  | 
**CustCurrency** | **string** | Customer&#39;s currency | 
**CustCurrencySymbol** | **string** | Currency symbol for customer | 
**Package** | **string** | Package name | 
**ServiceExtra** | **[]string** | Extra service information | 
**ExtraInfoTables** | [**LicenseExtraInfoTables**](LicenseExtraInfoTables.md) |  | 
**ServiceOverviewExtra** | **string** | Extra service overview information | 
**ServiceType** | [**LicenseServiceType**](LicenseServiceType.md) |  | 
**LicenseKey** | **string** | License key | 

## Methods

### NewLicense

`func NewLicense(serviceInfo LicenseServiceInfo, clientLinks []LicenseClientLink, billingDetails LicenseBillingDetails, custCurrency string, custCurrencySymbol string, package_ string, serviceExtra []string, extraInfoTables LicenseExtraInfoTables, serviceOverviewExtra string, serviceType LicenseServiceType, licenseKey string, ) *License`

NewLicense instantiates a new License object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewLicenseWithDefaults

`func NewLicenseWithDefaults() *License`

NewLicenseWithDefaults instantiates a new License object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServiceInfo

`func (o *License) GetServiceInfo() LicenseServiceInfo`

GetServiceInfo returns the ServiceInfo field if non-nil, zero value otherwise.

### GetServiceInfoOk

`func (o *License) GetServiceInfoOk() (*LicenseServiceInfo, bool)`

GetServiceInfoOk returns a tuple with the ServiceInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceInfo

`func (o *License) SetServiceInfo(v LicenseServiceInfo)`

SetServiceInfo sets ServiceInfo field to given value.


### GetClientLinks

`func (o *License) GetClientLinks() []LicenseClientLink`

GetClientLinks returns the ClientLinks field if non-nil, zero value otherwise.

### GetClientLinksOk

`func (o *License) GetClientLinksOk() (*[]LicenseClientLink, bool)`

GetClientLinksOk returns a tuple with the ClientLinks field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetClientLinks

`func (o *License) SetClientLinks(v []LicenseClientLink)`

SetClientLinks sets ClientLinks field to given value.


### GetBillingDetails

`func (o *License) GetBillingDetails() LicenseBillingDetails`

GetBillingDetails returns the BillingDetails field if non-nil, zero value otherwise.

### GetBillingDetailsOk

`func (o *License) GetBillingDetailsOk() (*LicenseBillingDetails, bool)`

GetBillingDetailsOk returns a tuple with the BillingDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBillingDetails

`func (o *License) SetBillingDetails(v LicenseBillingDetails)`

SetBillingDetails sets BillingDetails field to given value.


### GetCustCurrency

`func (o *License) GetCustCurrency() string`

GetCustCurrency returns the CustCurrency field if non-nil, zero value otherwise.

### GetCustCurrencyOk

`func (o *License) GetCustCurrencyOk() (*string, bool)`

GetCustCurrencyOk returns a tuple with the CustCurrency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustCurrency

`func (o *License) SetCustCurrency(v string)`

SetCustCurrency sets CustCurrency field to given value.


### GetCustCurrencySymbol

`func (o *License) GetCustCurrencySymbol() string`

GetCustCurrencySymbol returns the CustCurrencySymbol field if non-nil, zero value otherwise.

### GetCustCurrencySymbolOk

`func (o *License) GetCustCurrencySymbolOk() (*string, bool)`

GetCustCurrencySymbolOk returns a tuple with the CustCurrencySymbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustCurrencySymbol

`func (o *License) SetCustCurrencySymbol(v string)`

SetCustCurrencySymbol sets CustCurrencySymbol field to given value.


### GetPackage

`func (o *License) GetPackage() string`

GetPackage returns the Package field if non-nil, zero value otherwise.

### GetPackageOk

`func (o *License) GetPackageOk() (*string, bool)`

GetPackageOk returns a tuple with the Package field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPackage

`func (o *License) SetPackage(v string)`

SetPackage sets Package field to given value.


### GetServiceExtra

`func (o *License) GetServiceExtra() []string`

GetServiceExtra returns the ServiceExtra field if non-nil, zero value otherwise.

### GetServiceExtraOk

`func (o *License) GetServiceExtraOk() (*[]string, bool)`

GetServiceExtraOk returns a tuple with the ServiceExtra field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceExtra

`func (o *License) SetServiceExtra(v []string)`

SetServiceExtra sets ServiceExtra field to given value.


### GetExtraInfoTables

`func (o *License) GetExtraInfoTables() LicenseExtraInfoTables`

GetExtraInfoTables returns the ExtraInfoTables field if non-nil, zero value otherwise.

### GetExtraInfoTablesOk

`func (o *License) GetExtraInfoTablesOk() (*LicenseExtraInfoTables, bool)`

GetExtraInfoTablesOk returns a tuple with the ExtraInfoTables field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtraInfoTables

`func (o *License) SetExtraInfoTables(v LicenseExtraInfoTables)`

SetExtraInfoTables sets ExtraInfoTables field to given value.


### GetServiceOverviewExtra

`func (o *License) GetServiceOverviewExtra() string`

GetServiceOverviewExtra returns the ServiceOverviewExtra field if non-nil, zero value otherwise.

### GetServiceOverviewExtraOk

`func (o *License) GetServiceOverviewExtraOk() (*string, bool)`

GetServiceOverviewExtraOk returns a tuple with the ServiceOverviewExtra field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceOverviewExtra

`func (o *License) SetServiceOverviewExtra(v string)`

SetServiceOverviewExtra sets ServiceOverviewExtra field to given value.


### GetServiceType

`func (o *License) GetServiceType() LicenseServiceType`

GetServiceType returns the ServiceType field if non-nil, zero value otherwise.

### GetServiceTypeOk

`func (o *License) GetServiceTypeOk() (*LicenseServiceType, bool)`

GetServiceTypeOk returns a tuple with the ServiceType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceType

`func (o *License) SetServiceType(v LicenseServiceType)`

SetServiceType sets ServiceType field to given value.


### GetLicenseKey

`func (o *License) GetLicenseKey() string`

GetLicenseKey returns the LicenseKey field if non-nil, zero value otherwise.

### GetLicenseKeyOk

`func (o *License) GetLicenseKeyOk() (*string, bool)`

GetLicenseKeyOk returns a tuple with the LicenseKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLicenseKey

`func (o *License) SetLicenseKey(v string)`

SetLicenseKey sets LicenseKey field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


