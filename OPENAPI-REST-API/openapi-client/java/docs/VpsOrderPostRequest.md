

# VpsOrderPostRequest

request to validate a vps order

## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**osDistro** | **String** | OS Distribution |  |
|**slices** | **Integer** | Number of slices |  |
|**vpsPlatform** | [**VpsPlatformEnum**](#VpsPlatformEnum) | VPS Platform |  |
|**period** | **Integer** | Billing Period or Frequency |  |
|**location** | **Integer** | Location |  |
|**osVersion** | **String** | OS Version |  |
|**hostname** | **String** | The hostname to assign to the VPS |  |
|**rootpass** | **String** | Root password to assign to the VVPS |  |
|**controlpanel** | [**ControlpanelEnum**](#ControlpanelEnum) | Control Panel |  [optional] |
|**coupon** | **String** | Coupon |  [optional] |
|**comment** | **String** | Order comments or notes |  [optional] |



## Enum: VpsPlatformEnum

| Name | Value |
|---- | -----|
| KVM | &quot;kvm&quot; |
| HYPERV | &quot;hyperv&quot; |
| KVMSTORAGE | &quot;kvmstorage&quot; |



## Enum: ControlpanelEnum

| Name | Value |
|---- | -----|
| NONE | &quot;none&quot; |
| CPANEL | &quot;cpanel&quot; |
| DA | &quot;da&quot; |



