
# VpsOrderPutRequest

## Properties
| Name | Type | Description | Notes |
| ------------ | ------------- | ------------- | ------------- |
| **osDistro** | **kotlin.String** | OS Distribution |  |
| **slices** | **kotlin.Int** | Number of slices |  |
| **vpsPlatform** | [**inline**](#VpsPlatform) | VPS Platform |  |
| **period** | **kotlin.Int** | Billing Period or Frequency |  |
| **location** | **kotlin.Int** | Location |  |
| **osVersion** | **kotlin.String** | OS Version |  |
| **hostname** | **kotlin.String** | The hostname to assign to the VPS |  |
| **rootpass** | **kotlin.String** | Root password to assign to the VVPS |  |
| **controlpanel** | [**inline**](#Controlpanel) | Control Panel |  [optional] |
| **coupon** | **kotlin.String** | Coupon |  [optional] |
| **comment** | **kotlin.String** | Order comments or notes |  [optional] |


<a id="VpsPlatform"></a>
## Enum: vpsPlatform
| Name | Value |
| ---- | ----- |
| vpsPlatform | kvm, hyperv, kvmstorage |


<a id="Controlpanel"></a>
## Enum: controlpanel
| Name | Value |
| ---- | ----- |
| controlpanel | none, cpanel, da |



