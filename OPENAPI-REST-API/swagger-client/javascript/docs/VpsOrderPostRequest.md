# InterServerManagementApi.VpsOrderPostRequest

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**osDistro** | **String** | OS Distribution | 
**slices** | **Number** | Number of slices | [default to 1]
**vpsPlatform** | **String** | VPS Platform | 
**controlpanel** | **String** | Control Panel | [optional] 
**period** | **Number** | Billing Period or Frequency | [default to 1]
**location** | **Number** | Location | [default to 1]
**osVersion** | **String** | OS Version | 
**hostname** | **String** | The hostname to assign to the VPS | [default to &#x27;&#x27;]
**coupon** | **String** | Coupon | [optional] [default to &#x27;&#x27;]
**rootpass** | **String** | Root password to assign to the VVPS | 
**comment** | **String** | Order comments or notes | [optional] [default to &#x27;&#x27;]

<a name="VpsPlatformEnum"></a>
## Enum: VpsPlatformEnum

* `kvm` (value: `"kvm"`)
* `hyperv` (value: `"hyperv"`)
* `kvmstorage` (value: `"kvmstorage"`)


<a name="ControlpanelEnum"></a>
## Enum: ControlpanelEnum

* `none` (value: `"none"`)
* `cpanel` (value: `"cpanel"`)
* `da` (value: `"da"`)

