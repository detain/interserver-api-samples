

# VpsOrderPutRequest

request to validate a vps order

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**osDistro** | **String** | OS Distribution | 
**slices** | **Int** | Number of slices | 
**vpsPlatform** | [**VpsPlatform**](#VpsPlatform) | VPS Platform | 
**period** | **Int** | Billing Period or Frequency | 
**location** | **Int** | Location | 
**osVersion** | **String** | OS Version | 
**hostname** | **String** | The hostname to assign to the VPS | 
**rootpass** | **String** | Root password to assign to the VVPS | 
**controlpanel** | [**Controlpanel**](#Controlpanel) | Control Panel |  [optional]
**coupon** | **String** | Coupon |  [optional]
**comment** | **String** | Order comments or notes |  [optional]


## Enum: VpsPlatform
Allowed values: [kvm, hyperv, kvmstorage]



## Enum: Controlpanel
Allowed values: [none, cpanel, da]




