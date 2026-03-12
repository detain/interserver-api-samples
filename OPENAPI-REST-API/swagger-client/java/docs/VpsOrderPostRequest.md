# VpsOrderPostRequest

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**osDistro** | **String** | OS Distribution | 
**slices** | **Integer** | Number of slices | 
**vpsPlatform** | [**VpsPlatformEnum**](#VpsPlatformEnum) | VPS Platform | 
**controlpanel** | [**ControlpanelEnum**](#ControlpanelEnum) | Control Panel |  [optional]
**period** | **Integer** | Billing Period or Frequency | 
**location** | **Integer** | Location | 
**osVersion** | **String** | OS Version | 
**hostname** | **String** | The hostname to assign to the VPS | 
**coupon** | **String** | Coupon |  [optional]
**rootpass** | **String** | Root password to assign to the VVPS | 
**comment** | **String** | Order comments or notes |  [optional]

<a name="VpsPlatformEnum"></a>
## Enum: VpsPlatformEnum
Name | Value
---- | -----
KVM | &quot;kvm&quot;
HYPERV | &quot;hyperv&quot;
KVMSTORAGE | &quot;kvmstorage&quot;

<a name="ControlpanelEnum"></a>
## Enum: ControlpanelEnum
Name | Value
---- | -----
NONE | &quot;none&quot;
CPANEL | &quot;cpanel&quot;
DA | &quot;da&quot;
