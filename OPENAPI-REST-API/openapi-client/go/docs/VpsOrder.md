# VpsOrder

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**VpsSliceSsdOvzCost** | **float32** | Cost of VPS Slice SSD OVZ | 
**VpsSliceOvzCost** | **float32** | Cost of VPS Slice OVZ | 
**VpsSliceSsdVirtuozzoCost** | **float32** | Cost of VPS Slice SSD Virtuozzo | 
**VpsSliceVirtuozzoCost** | **float32** | Cost of VPS Slice Virtuozzo | 
**VpsSliceHypervCost** | **float32** | Cost of VPS Slice HyperV | 
**VpsSliceVmwareCost** | **float32** | Cost of VPS Slice VMware | 
**VpsSliceLxcCost** | **float32** | Cost of VPS Slice LXC | 
**VpsSliceXenCost** | **float32** | Cost of VPS Slice Xen | 
**VpsSliceKvmLCost** | **float32** | Cost of VPS Slice KVM L | 
**VpsSliceKvmStorageCost** | **float32** | Cost of VPS Slice KVM Storage | 
**VpsNyCost** | **float32** | Cost of VPS in NY | 
**VpsSliceKvmWCost** | **float32** | Cost of VPS Slice KVM Windows | 
**CpanelCost** | **float32** | Cost of cPanel | 
**DaCost** | **float32** | Cost of DirectAdmin (DA) | 
**RamSlice** | **string** | RAM for VPS Slice | 
**HdSlice** | **string** | Hard Disk for VPS Slice | 
**HdStorageSlice** | **string** | Storage Hard Disk for VPS Slice | 
**BwSlice** | **string** | Bandwidth for VPS Slice | 
**BwType** | **string** | Bandwidth Type | 
**BwTotal** | **float32** | Total Bandwidth | 
**MaxSlices** | **string** | Maximum Slices | 
**PlatformPackages** | [**VpsOrderPlatformPackages**](VpsOrderPlatformPackages.md) |  | 
**PlatformNames** | [**VpsOrderPlatformNames**](VpsOrderPlatformNames.md) |  | 
**PackageCosts** | [**VpsOrderPackageCosts**](VpsOrderPackageCosts.md) |  | 
**LocationStock** | [**VpsOrderLocationStock**](VpsOrderLocationStock.md) |  | 
**LocationNames** | [**VpsOrderLocationNames**](VpsOrderLocationNames.md) |  | 
**OsNames** | [**VpsOrderOsNames**](VpsOrderOsNames.md) |  | 
**Templates** | [**VpsOrderTemplates**](VpsOrderTemplates.md) |  | 
**ServiceTypes** | [**VpsOrderServiceTypes**](VpsOrderServiceTypes.md) |  | 
**Currency** | **string** | Currency | 
**CurrencySymbol** | **string** | Currency Symbol | 

## Methods

### NewVpsOrder

`func NewVpsOrder(vpsSliceSsdOvzCost float32, vpsSliceOvzCost float32, vpsSliceSsdVirtuozzoCost float32, vpsSliceVirtuozzoCost float32, vpsSliceHypervCost float32, vpsSliceVmwareCost float32, vpsSliceLxcCost float32, vpsSliceXenCost float32, vpsSliceKvmLCost float32, vpsSliceKvmStorageCost float32, vpsNyCost float32, vpsSliceKvmWCost float32, cpanelCost float32, daCost float32, ramSlice string, hdSlice string, hdStorageSlice string, bwSlice string, bwType string, bwTotal float32, maxSlices string, platformPackages VpsOrderPlatformPackages, platformNames VpsOrderPlatformNames, packageCosts VpsOrderPackageCosts, locationStock VpsOrderLocationStock, locationNames VpsOrderLocationNames, osNames VpsOrderOsNames, templates VpsOrderTemplates, serviceTypes VpsOrderServiceTypes, currency string, currencySymbol string, ) *VpsOrder`

NewVpsOrder instantiates a new VpsOrder object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewVpsOrderWithDefaults

`func NewVpsOrderWithDefaults() *VpsOrder`

NewVpsOrderWithDefaults instantiates a new VpsOrder object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetVpsSliceSsdOvzCost

`func (o *VpsOrder) GetVpsSliceSsdOvzCost() float32`

GetVpsSliceSsdOvzCost returns the VpsSliceSsdOvzCost field if non-nil, zero value otherwise.

### GetVpsSliceSsdOvzCostOk

`func (o *VpsOrder) GetVpsSliceSsdOvzCostOk() (*float32, bool)`

GetVpsSliceSsdOvzCostOk returns a tuple with the VpsSliceSsdOvzCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsSliceSsdOvzCost

`func (o *VpsOrder) SetVpsSliceSsdOvzCost(v float32)`

SetVpsSliceSsdOvzCost sets VpsSliceSsdOvzCost field to given value.


### GetVpsSliceOvzCost

`func (o *VpsOrder) GetVpsSliceOvzCost() float32`

GetVpsSliceOvzCost returns the VpsSliceOvzCost field if non-nil, zero value otherwise.

### GetVpsSliceOvzCostOk

`func (o *VpsOrder) GetVpsSliceOvzCostOk() (*float32, bool)`

GetVpsSliceOvzCostOk returns a tuple with the VpsSliceOvzCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsSliceOvzCost

`func (o *VpsOrder) SetVpsSliceOvzCost(v float32)`

SetVpsSliceOvzCost sets VpsSliceOvzCost field to given value.


### GetVpsSliceSsdVirtuozzoCost

`func (o *VpsOrder) GetVpsSliceSsdVirtuozzoCost() float32`

GetVpsSliceSsdVirtuozzoCost returns the VpsSliceSsdVirtuozzoCost field if non-nil, zero value otherwise.

### GetVpsSliceSsdVirtuozzoCostOk

`func (o *VpsOrder) GetVpsSliceSsdVirtuozzoCostOk() (*float32, bool)`

GetVpsSliceSsdVirtuozzoCostOk returns a tuple with the VpsSliceSsdVirtuozzoCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsSliceSsdVirtuozzoCost

`func (o *VpsOrder) SetVpsSliceSsdVirtuozzoCost(v float32)`

SetVpsSliceSsdVirtuozzoCost sets VpsSliceSsdVirtuozzoCost field to given value.


### GetVpsSliceVirtuozzoCost

`func (o *VpsOrder) GetVpsSliceVirtuozzoCost() float32`

GetVpsSliceVirtuozzoCost returns the VpsSliceVirtuozzoCost field if non-nil, zero value otherwise.

### GetVpsSliceVirtuozzoCostOk

`func (o *VpsOrder) GetVpsSliceVirtuozzoCostOk() (*float32, bool)`

GetVpsSliceVirtuozzoCostOk returns a tuple with the VpsSliceVirtuozzoCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsSliceVirtuozzoCost

`func (o *VpsOrder) SetVpsSliceVirtuozzoCost(v float32)`

SetVpsSliceVirtuozzoCost sets VpsSliceVirtuozzoCost field to given value.


### GetVpsSliceHypervCost

`func (o *VpsOrder) GetVpsSliceHypervCost() float32`

GetVpsSliceHypervCost returns the VpsSliceHypervCost field if non-nil, zero value otherwise.

### GetVpsSliceHypervCostOk

`func (o *VpsOrder) GetVpsSliceHypervCostOk() (*float32, bool)`

GetVpsSliceHypervCostOk returns a tuple with the VpsSliceHypervCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsSliceHypervCost

`func (o *VpsOrder) SetVpsSliceHypervCost(v float32)`

SetVpsSliceHypervCost sets VpsSliceHypervCost field to given value.


### GetVpsSliceVmwareCost

`func (o *VpsOrder) GetVpsSliceVmwareCost() float32`

GetVpsSliceVmwareCost returns the VpsSliceVmwareCost field if non-nil, zero value otherwise.

### GetVpsSliceVmwareCostOk

`func (o *VpsOrder) GetVpsSliceVmwareCostOk() (*float32, bool)`

GetVpsSliceVmwareCostOk returns a tuple with the VpsSliceVmwareCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsSliceVmwareCost

`func (o *VpsOrder) SetVpsSliceVmwareCost(v float32)`

SetVpsSliceVmwareCost sets VpsSliceVmwareCost field to given value.


### GetVpsSliceLxcCost

`func (o *VpsOrder) GetVpsSliceLxcCost() float32`

GetVpsSliceLxcCost returns the VpsSliceLxcCost field if non-nil, zero value otherwise.

### GetVpsSliceLxcCostOk

`func (o *VpsOrder) GetVpsSliceLxcCostOk() (*float32, bool)`

GetVpsSliceLxcCostOk returns a tuple with the VpsSliceLxcCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsSliceLxcCost

`func (o *VpsOrder) SetVpsSliceLxcCost(v float32)`

SetVpsSliceLxcCost sets VpsSliceLxcCost field to given value.


### GetVpsSliceXenCost

`func (o *VpsOrder) GetVpsSliceXenCost() float32`

GetVpsSliceXenCost returns the VpsSliceXenCost field if non-nil, zero value otherwise.

### GetVpsSliceXenCostOk

`func (o *VpsOrder) GetVpsSliceXenCostOk() (*float32, bool)`

GetVpsSliceXenCostOk returns a tuple with the VpsSliceXenCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsSliceXenCost

`func (o *VpsOrder) SetVpsSliceXenCost(v float32)`

SetVpsSliceXenCost sets VpsSliceXenCost field to given value.


### GetVpsSliceKvmLCost

`func (o *VpsOrder) GetVpsSliceKvmLCost() float32`

GetVpsSliceKvmLCost returns the VpsSliceKvmLCost field if non-nil, zero value otherwise.

### GetVpsSliceKvmLCostOk

`func (o *VpsOrder) GetVpsSliceKvmLCostOk() (*float32, bool)`

GetVpsSliceKvmLCostOk returns a tuple with the VpsSliceKvmLCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsSliceKvmLCost

`func (o *VpsOrder) SetVpsSliceKvmLCost(v float32)`

SetVpsSliceKvmLCost sets VpsSliceKvmLCost field to given value.


### GetVpsSliceKvmStorageCost

`func (o *VpsOrder) GetVpsSliceKvmStorageCost() float32`

GetVpsSliceKvmStorageCost returns the VpsSliceKvmStorageCost field if non-nil, zero value otherwise.

### GetVpsSliceKvmStorageCostOk

`func (o *VpsOrder) GetVpsSliceKvmStorageCostOk() (*float32, bool)`

GetVpsSliceKvmStorageCostOk returns a tuple with the VpsSliceKvmStorageCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsSliceKvmStorageCost

`func (o *VpsOrder) SetVpsSliceKvmStorageCost(v float32)`

SetVpsSliceKvmStorageCost sets VpsSliceKvmStorageCost field to given value.


### GetVpsNyCost

`func (o *VpsOrder) GetVpsNyCost() float32`

GetVpsNyCost returns the VpsNyCost field if non-nil, zero value otherwise.

### GetVpsNyCostOk

`func (o *VpsOrder) GetVpsNyCostOk() (*float32, bool)`

GetVpsNyCostOk returns a tuple with the VpsNyCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsNyCost

`func (o *VpsOrder) SetVpsNyCost(v float32)`

SetVpsNyCost sets VpsNyCost field to given value.


### GetVpsSliceKvmWCost

`func (o *VpsOrder) GetVpsSliceKvmWCost() float32`

GetVpsSliceKvmWCost returns the VpsSliceKvmWCost field if non-nil, zero value otherwise.

### GetVpsSliceKvmWCostOk

`func (o *VpsOrder) GetVpsSliceKvmWCostOk() (*float32, bool)`

GetVpsSliceKvmWCostOk returns a tuple with the VpsSliceKvmWCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVpsSliceKvmWCost

`func (o *VpsOrder) SetVpsSliceKvmWCost(v float32)`

SetVpsSliceKvmWCost sets VpsSliceKvmWCost field to given value.


### GetCpanelCost

`func (o *VpsOrder) GetCpanelCost() float32`

GetCpanelCost returns the CpanelCost field if non-nil, zero value otherwise.

### GetCpanelCostOk

`func (o *VpsOrder) GetCpanelCostOk() (*float32, bool)`

GetCpanelCostOk returns a tuple with the CpanelCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCpanelCost

`func (o *VpsOrder) SetCpanelCost(v float32)`

SetCpanelCost sets CpanelCost field to given value.


### GetDaCost

`func (o *VpsOrder) GetDaCost() float32`

GetDaCost returns the DaCost field if non-nil, zero value otherwise.

### GetDaCostOk

`func (o *VpsOrder) GetDaCostOk() (*float32, bool)`

GetDaCostOk returns a tuple with the DaCost field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDaCost

`func (o *VpsOrder) SetDaCost(v float32)`

SetDaCost sets DaCost field to given value.


### GetRamSlice

`func (o *VpsOrder) GetRamSlice() string`

GetRamSlice returns the RamSlice field if non-nil, zero value otherwise.

### GetRamSliceOk

`func (o *VpsOrder) GetRamSliceOk() (*string, bool)`

GetRamSliceOk returns a tuple with the RamSlice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRamSlice

`func (o *VpsOrder) SetRamSlice(v string)`

SetRamSlice sets RamSlice field to given value.


### GetHdSlice

`func (o *VpsOrder) GetHdSlice() string`

GetHdSlice returns the HdSlice field if non-nil, zero value otherwise.

### GetHdSliceOk

`func (o *VpsOrder) GetHdSliceOk() (*string, bool)`

GetHdSliceOk returns a tuple with the HdSlice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHdSlice

`func (o *VpsOrder) SetHdSlice(v string)`

SetHdSlice sets HdSlice field to given value.


### GetHdStorageSlice

`func (o *VpsOrder) GetHdStorageSlice() string`

GetHdStorageSlice returns the HdStorageSlice field if non-nil, zero value otherwise.

### GetHdStorageSliceOk

`func (o *VpsOrder) GetHdStorageSliceOk() (*string, bool)`

GetHdStorageSliceOk returns a tuple with the HdStorageSlice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHdStorageSlice

`func (o *VpsOrder) SetHdStorageSlice(v string)`

SetHdStorageSlice sets HdStorageSlice field to given value.


### GetBwSlice

`func (o *VpsOrder) GetBwSlice() string`

GetBwSlice returns the BwSlice field if non-nil, zero value otherwise.

### GetBwSliceOk

`func (o *VpsOrder) GetBwSliceOk() (*string, bool)`

GetBwSliceOk returns a tuple with the BwSlice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBwSlice

`func (o *VpsOrder) SetBwSlice(v string)`

SetBwSlice sets BwSlice field to given value.


### GetBwType

`func (o *VpsOrder) GetBwType() string`

GetBwType returns the BwType field if non-nil, zero value otherwise.

### GetBwTypeOk

`func (o *VpsOrder) GetBwTypeOk() (*string, bool)`

GetBwTypeOk returns a tuple with the BwType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBwType

`func (o *VpsOrder) SetBwType(v string)`

SetBwType sets BwType field to given value.


### GetBwTotal

`func (o *VpsOrder) GetBwTotal() float32`

GetBwTotal returns the BwTotal field if non-nil, zero value otherwise.

### GetBwTotalOk

`func (o *VpsOrder) GetBwTotalOk() (*float32, bool)`

GetBwTotalOk returns a tuple with the BwTotal field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBwTotal

`func (o *VpsOrder) SetBwTotal(v float32)`

SetBwTotal sets BwTotal field to given value.


### GetMaxSlices

`func (o *VpsOrder) GetMaxSlices() string`

GetMaxSlices returns the MaxSlices field if non-nil, zero value otherwise.

### GetMaxSlicesOk

`func (o *VpsOrder) GetMaxSlicesOk() (*string, bool)`

GetMaxSlicesOk returns a tuple with the MaxSlices field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMaxSlices

`func (o *VpsOrder) SetMaxSlices(v string)`

SetMaxSlices sets MaxSlices field to given value.


### GetPlatformPackages

`func (o *VpsOrder) GetPlatformPackages() VpsOrderPlatformPackages`

GetPlatformPackages returns the PlatformPackages field if non-nil, zero value otherwise.

### GetPlatformPackagesOk

`func (o *VpsOrder) GetPlatformPackagesOk() (*VpsOrderPlatformPackages, bool)`

GetPlatformPackagesOk returns a tuple with the PlatformPackages field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPlatformPackages

`func (o *VpsOrder) SetPlatformPackages(v VpsOrderPlatformPackages)`

SetPlatformPackages sets PlatformPackages field to given value.


### GetPlatformNames

`func (o *VpsOrder) GetPlatformNames() VpsOrderPlatformNames`

GetPlatformNames returns the PlatformNames field if non-nil, zero value otherwise.

### GetPlatformNamesOk

`func (o *VpsOrder) GetPlatformNamesOk() (*VpsOrderPlatformNames, bool)`

GetPlatformNamesOk returns a tuple with the PlatformNames field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPlatformNames

`func (o *VpsOrder) SetPlatformNames(v VpsOrderPlatformNames)`

SetPlatformNames sets PlatformNames field to given value.


### GetPackageCosts

`func (o *VpsOrder) GetPackageCosts() VpsOrderPackageCosts`

GetPackageCosts returns the PackageCosts field if non-nil, zero value otherwise.

### GetPackageCostsOk

`func (o *VpsOrder) GetPackageCostsOk() (*VpsOrderPackageCosts, bool)`

GetPackageCostsOk returns a tuple with the PackageCosts field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPackageCosts

`func (o *VpsOrder) SetPackageCosts(v VpsOrderPackageCosts)`

SetPackageCosts sets PackageCosts field to given value.


### GetLocationStock

`func (o *VpsOrder) GetLocationStock() VpsOrderLocationStock`

GetLocationStock returns the LocationStock field if non-nil, zero value otherwise.

### GetLocationStockOk

`func (o *VpsOrder) GetLocationStockOk() (*VpsOrderLocationStock, bool)`

GetLocationStockOk returns a tuple with the LocationStock field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocationStock

`func (o *VpsOrder) SetLocationStock(v VpsOrderLocationStock)`

SetLocationStock sets LocationStock field to given value.


### GetLocationNames

`func (o *VpsOrder) GetLocationNames() VpsOrderLocationNames`

GetLocationNames returns the LocationNames field if non-nil, zero value otherwise.

### GetLocationNamesOk

`func (o *VpsOrder) GetLocationNamesOk() (*VpsOrderLocationNames, bool)`

GetLocationNamesOk returns a tuple with the LocationNames field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocationNames

`func (o *VpsOrder) SetLocationNames(v VpsOrderLocationNames)`

SetLocationNames sets LocationNames field to given value.


### GetOsNames

`func (o *VpsOrder) GetOsNames() VpsOrderOsNames`

GetOsNames returns the OsNames field if non-nil, zero value otherwise.

### GetOsNamesOk

`func (o *VpsOrder) GetOsNamesOk() (*VpsOrderOsNames, bool)`

GetOsNamesOk returns a tuple with the OsNames field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOsNames

`func (o *VpsOrder) SetOsNames(v VpsOrderOsNames)`

SetOsNames sets OsNames field to given value.


### GetTemplates

`func (o *VpsOrder) GetTemplates() VpsOrderTemplates`

GetTemplates returns the Templates field if non-nil, zero value otherwise.

### GetTemplatesOk

`func (o *VpsOrder) GetTemplatesOk() (*VpsOrderTemplates, bool)`

GetTemplatesOk returns a tuple with the Templates field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTemplates

`func (o *VpsOrder) SetTemplates(v VpsOrderTemplates)`

SetTemplates sets Templates field to given value.


### GetServiceTypes

`func (o *VpsOrder) GetServiceTypes() VpsOrderServiceTypes`

GetServiceTypes returns the ServiceTypes field if non-nil, zero value otherwise.

### GetServiceTypesOk

`func (o *VpsOrder) GetServiceTypesOk() (*VpsOrderServiceTypes, bool)`

GetServiceTypesOk returns a tuple with the ServiceTypes field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetServiceTypes

`func (o *VpsOrder) SetServiceTypes(v VpsOrderServiceTypes)`

SetServiceTypes sets ServiceTypes field to given value.


### GetCurrency

`func (o *VpsOrder) GetCurrency() string`

GetCurrency returns the Currency field if non-nil, zero value otherwise.

### GetCurrencyOk

`func (o *VpsOrder) GetCurrencyOk() (*string, bool)`

GetCurrencyOk returns a tuple with the Currency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCurrency

`func (o *VpsOrder) SetCurrency(v string)`

SetCurrency sets Currency field to given value.


### GetCurrencySymbol

`func (o *VpsOrder) GetCurrencySymbol() string`

GetCurrencySymbol returns the CurrencySymbol field if non-nil, zero value otherwise.

### GetCurrencySymbolOk

`func (o *VpsOrder) GetCurrencySymbolOk() (*string, bool)`

GetCurrencySymbolOk returns a tuple with the CurrencySymbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCurrencySymbol

`func (o *VpsOrder) SetCurrencySymbol(v string)`

SetCurrencySymbol sets CurrencySymbol field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


