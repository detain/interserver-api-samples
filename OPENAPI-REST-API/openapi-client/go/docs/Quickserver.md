# Quickserver

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ServiceInfo** | [**QuickserverServiceInfo**](QuickserverServiceInfo.md) |  | 
**ClientLinks** | [**[]QuickserverClientLink**](QuickserverClientLink.md) |  | 
**BillingDetails** | [**QuickserverBillingDetails**](QuickserverBillingDetails.md) |  | 
**CustCurrency** | **string** | Currency of the customer | 
**CustCurrencySymbol** | **string** | Currency symbol of the customer | 
**ServiceMaster** | [**QuickserverServiceMaster**](QuickserverServiceMaster.md) |  | 
**Package** | **string** | Package name | 
**OsTemplate** | **string** | Operating system template | 
**ServiceExtra** | [**QuickserverServiceExtra**](QuickserverServiceExtra.md) |  | 
**ExtraInfoTables** | [**QuickserverExtraInfoTables**](QuickserverExtraInfoTables.md) |  | 
**CpuGraphData** | **string** | CPU graph data | 
**BandwidthXaxis** | **string** | Bandwidth x-axis data | 
**BandwidthYaxis** | **string** | Bandwidth y-axis data | 
**Module** | **string** | Module information | 
**Token** | **string** | Authentication token | 
**ServiceDiskUsed** | **string** | Used disk space | 
**ServiceDiskTotal** | **string** | Total disk space | 
**DiskPercentage** | **float32** | Disk usage percentage | 
**Memory** | **string** | Memory information | 
**Hdd** | **string** | HDD information | 
**ServiceOverviewExtra** | **[]string** |  | 

## Methods

### NewQuickserver

`func NewQuickserver(serviceInfo QuickserverServiceInfo, clientLinks []QuickserverClientLink, billingDetails QuickserverBillingDetails, custCurrency string, custCurrencySymbol string, serviceMaster QuickserverServiceMaster, package_ string, osTemplate string, serviceExtra QuickserverServiceExtra, extraInfoTables QuickserverExtraInfoTables, cpuGraphData string, bandwidthXaxis string, bandwidthYaxis string, module string, token string, serviceDiskUsed string, serviceDiskTotal string, diskPercentage float32, memory string, hdd string, serviceOverviewExtra []string, ) *Quickserver`

NewQuickserver instantiates a new Quickserver object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewQuickserverWithDefaults

`func NewQuickserverWithDefaults() *Quickserver`

NewQuickserverWithDefaults instantiates a new Quickserver object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetServiceInfo

`func (o *Quickserver) GetServiceInfo() QuickserverServiceInfo`

GetServiceInfo returns the ServiceInfo field if non-nil, zero value otherwise.

### GetServiceInfoOk

`func (o *Quickserver) GetServiceInfoOk() (*QuickserverServiceInfo, bool)`

GetServiceInfoOk returns a tuple with the ServiceInfo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceInfo

`func (o *Quickserver) SetServiceInfo(v QuickserverServiceInfo)`

SetServiceInfo sets ServiceInfo field to given value.


### GetClientLinks

`func (o *Quickserver) GetClientLinks() []QuickserverClientLink`

GetClientLinks returns the ClientLinks field if non-nil, zero value otherwise.

### GetClientLinksOk

`func (o *Quickserver) GetClientLinksOk() (*[]QuickserverClientLink, bool)`

GetClientLinksOk returns a tuple with the ClientLinks field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetClientLinks

`func (o *Quickserver) SetClientLinks(v []QuickserverClientLink)`

SetClientLinks sets ClientLinks field to given value.


### GetBillingDetails

`func (o *Quickserver) GetBillingDetails() QuickserverBillingDetails`

GetBillingDetails returns the BillingDetails field if non-nil, zero value otherwise.

### GetBillingDetailsOk

`func (o *Quickserver) GetBillingDetailsOk() (*QuickserverBillingDetails, bool)`

GetBillingDetailsOk returns a tuple with the BillingDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBillingDetails

`func (o *Quickserver) SetBillingDetails(v QuickserverBillingDetails)`

SetBillingDetails sets BillingDetails field to given value.


### GetCustCurrency

`func (o *Quickserver) GetCustCurrency() string`

GetCustCurrency returns the CustCurrency field if non-nil, zero value otherwise.

### GetCustCurrencyOk

`func (o *Quickserver) GetCustCurrencyOk() (*string, bool)`

GetCustCurrencyOk returns a tuple with the CustCurrency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustCurrency

`func (o *Quickserver) SetCustCurrency(v string)`

SetCustCurrency sets CustCurrency field to given value.


### GetCustCurrencySymbol

`func (o *Quickserver) GetCustCurrencySymbol() string`

GetCustCurrencySymbol returns the CustCurrencySymbol field if non-nil, zero value otherwise.

### GetCustCurrencySymbolOk

`func (o *Quickserver) GetCustCurrencySymbolOk() (*string, bool)`

GetCustCurrencySymbolOk returns a tuple with the CustCurrencySymbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustCurrencySymbol

`func (o *Quickserver) SetCustCurrencySymbol(v string)`

SetCustCurrencySymbol sets CustCurrencySymbol field to given value.


### GetServiceMaster

`func (o *Quickserver) GetServiceMaster() QuickserverServiceMaster`

GetServiceMaster returns the ServiceMaster field if non-nil, zero value otherwise.

### GetServiceMasterOk

`func (o *Quickserver) GetServiceMasterOk() (*QuickserverServiceMaster, bool)`

GetServiceMasterOk returns a tuple with the ServiceMaster field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceMaster

`func (o *Quickserver) SetServiceMaster(v QuickserverServiceMaster)`

SetServiceMaster sets ServiceMaster field to given value.


### GetPackage

`func (o *Quickserver) GetPackage() string`

GetPackage returns the Package field if non-nil, zero value otherwise.

### GetPackageOk

`func (o *Quickserver) GetPackageOk() (*string, bool)`

GetPackageOk returns a tuple with the Package field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPackage

`func (o *Quickserver) SetPackage(v string)`

SetPackage sets Package field to given value.


### GetOsTemplate

`func (o *Quickserver) GetOsTemplate() string`

GetOsTemplate returns the OsTemplate field if non-nil, zero value otherwise.

### GetOsTemplateOk

`func (o *Quickserver) GetOsTemplateOk() (*string, bool)`

GetOsTemplateOk returns a tuple with the OsTemplate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOsTemplate

`func (o *Quickserver) SetOsTemplate(v string)`

SetOsTemplate sets OsTemplate field to given value.


### GetServiceExtra

`func (o *Quickserver) GetServiceExtra() QuickserverServiceExtra`

GetServiceExtra returns the ServiceExtra field if non-nil, zero value otherwise.

### GetServiceExtraOk

`func (o *Quickserver) GetServiceExtraOk() (*QuickserverServiceExtra, bool)`

GetServiceExtraOk returns a tuple with the ServiceExtra field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceExtra

`func (o *Quickserver) SetServiceExtra(v QuickserverServiceExtra)`

SetServiceExtra sets ServiceExtra field to given value.


### GetExtraInfoTables

`func (o *Quickserver) GetExtraInfoTables() QuickserverExtraInfoTables`

GetExtraInfoTables returns the ExtraInfoTables field if non-nil, zero value otherwise.

### GetExtraInfoTablesOk

`func (o *Quickserver) GetExtraInfoTablesOk() (*QuickserverExtraInfoTables, bool)`

GetExtraInfoTablesOk returns a tuple with the ExtraInfoTables field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtraInfoTables

`func (o *Quickserver) SetExtraInfoTables(v QuickserverExtraInfoTables)`

SetExtraInfoTables sets ExtraInfoTables field to given value.


### GetCpuGraphData

`func (o *Quickserver) GetCpuGraphData() string`

GetCpuGraphData returns the CpuGraphData field if non-nil, zero value otherwise.

### GetCpuGraphDataOk

`func (o *Quickserver) GetCpuGraphDataOk() (*string, bool)`

GetCpuGraphDataOk returns a tuple with the CpuGraphData field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCpuGraphData

`func (o *Quickserver) SetCpuGraphData(v string)`

SetCpuGraphData sets CpuGraphData field to given value.


### GetBandwidthXaxis

`func (o *Quickserver) GetBandwidthXaxis() string`

GetBandwidthXaxis returns the BandwidthXaxis field if non-nil, zero value otherwise.

### GetBandwidthXaxisOk

`func (o *Quickserver) GetBandwidthXaxisOk() (*string, bool)`

GetBandwidthXaxisOk returns a tuple with the BandwidthXaxis field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBandwidthXaxis

`func (o *Quickserver) SetBandwidthXaxis(v string)`

SetBandwidthXaxis sets BandwidthXaxis field to given value.


### GetBandwidthYaxis

`func (o *Quickserver) GetBandwidthYaxis() string`

GetBandwidthYaxis returns the BandwidthYaxis field if non-nil, zero value otherwise.

### GetBandwidthYaxisOk

`func (o *Quickserver) GetBandwidthYaxisOk() (*string, bool)`

GetBandwidthYaxisOk returns a tuple with the BandwidthYaxis field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBandwidthYaxis

`func (o *Quickserver) SetBandwidthYaxis(v string)`

SetBandwidthYaxis sets BandwidthYaxis field to given value.


### GetModule

`func (o *Quickserver) GetModule() string`

GetModule returns the Module field if non-nil, zero value otherwise.

### GetModuleOk

`func (o *Quickserver) GetModuleOk() (*string, bool)`

GetModuleOk returns a tuple with the Module field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetModule

`func (o *Quickserver) SetModule(v string)`

SetModule sets Module field to given value.


### GetToken

`func (o *Quickserver) GetToken() string`

GetToken returns the Token field if non-nil, zero value otherwise.

### GetTokenOk

`func (o *Quickserver) GetTokenOk() (*string, bool)`

GetTokenOk returns a tuple with the Token field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetToken

`func (o *Quickserver) SetToken(v string)`

SetToken sets Token field to given value.


### GetServiceDiskUsed

`func (o *Quickserver) GetServiceDiskUsed() string`

GetServiceDiskUsed returns the ServiceDiskUsed field if non-nil, zero value otherwise.

### GetServiceDiskUsedOk

`func (o *Quickserver) GetServiceDiskUsedOk() (*string, bool)`

GetServiceDiskUsedOk returns a tuple with the ServiceDiskUsed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceDiskUsed

`func (o *Quickserver) SetServiceDiskUsed(v string)`

SetServiceDiskUsed sets ServiceDiskUsed field to given value.


### GetServiceDiskTotal

`func (o *Quickserver) GetServiceDiskTotal() string`

GetServiceDiskTotal returns the ServiceDiskTotal field if non-nil, zero value otherwise.

### GetServiceDiskTotalOk

`func (o *Quickserver) GetServiceDiskTotalOk() (*string, bool)`

GetServiceDiskTotalOk returns a tuple with the ServiceDiskTotal field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceDiskTotal

`func (o *Quickserver) SetServiceDiskTotal(v string)`

SetServiceDiskTotal sets ServiceDiskTotal field to given value.


### GetDiskPercentage

`func (o *Quickserver) GetDiskPercentage() float32`

GetDiskPercentage returns the DiskPercentage field if non-nil, zero value otherwise.

### GetDiskPercentageOk

`func (o *Quickserver) GetDiskPercentageOk() (*float32, bool)`

GetDiskPercentageOk returns a tuple with the DiskPercentage field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDiskPercentage

`func (o *Quickserver) SetDiskPercentage(v float32)`

SetDiskPercentage sets DiskPercentage field to given value.


### GetMemory

`func (o *Quickserver) GetMemory() string`

GetMemory returns the Memory field if non-nil, zero value otherwise.

### GetMemoryOk

`func (o *Quickserver) GetMemoryOk() (*string, bool)`

GetMemoryOk returns a tuple with the Memory field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMemory

`func (o *Quickserver) SetMemory(v string)`

SetMemory sets Memory field to given value.


### GetHdd

`func (o *Quickserver) GetHdd() string`

GetHdd returns the Hdd field if non-nil, zero value otherwise.

### GetHddOk

`func (o *Quickserver) GetHddOk() (*string, bool)`

GetHddOk returns a tuple with the Hdd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHdd

`func (o *Quickserver) SetHdd(v string)`

SetHdd sets Hdd field to given value.


### GetServiceOverviewExtra

`func (o *Quickserver) GetServiceOverviewExtra() []string`

GetServiceOverviewExtra returns the ServiceOverviewExtra field if non-nil, zero value otherwise.

### GetServiceOverviewExtraOk

`func (o *Quickserver) GetServiceOverviewExtraOk() (*[]string, bool)`

GetServiceOverviewExtraOk returns a tuple with the ServiceOverviewExtra field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceOverviewExtra

`func (o *Quickserver) SetServiceOverviewExtra(v []string)`

SetServiceOverviewExtra sets ServiceOverviewExtra field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


