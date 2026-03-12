# VpsOrderPostRequest

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**osDistro** | [**kotlin.String**](.md) | OS Distribution | 
**slices** | [**kotlin.Int**](.md) | Number of slices | 
**vpsPlatform** | [**inline**](#VpsPlatform) | VPS Platform | 
**controlpanel** | [**inline**](#Controlpanel) | Control Panel |  [optional]
**period** | [**kotlin.Int**](.md) | Billing Period or Frequency | 
**location** | [**kotlin.Int**](.md) | Location | 
**osVersion** | [**kotlin.String**](.md) | OS Version | 
**hostname** | [**kotlin.String**](.md) | The hostname to assign to the VPS | 
**coupon** | [**kotlin.String**](.md) | Coupon |  [optional]
**rootpass** | [**kotlin.String**](.md) | Root password to assign to the VVPS | 
**comment** | [**kotlin.String**](.md) | Order comments or notes |  [optional]

<a name="VpsPlatform"></a>
## Enum: vpsPlatform
Name | Value
---- | -----
vpsPlatform | kvm, hyperv, kvmstorage

<a name="Controlpanel"></a>
## Enum: controlpanel
Name | Value
---- | -----
controlpanel | none, cpanel, da
