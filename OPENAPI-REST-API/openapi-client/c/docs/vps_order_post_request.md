# vps_order_post_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**os_distro** | **char \*** | OS Distribution | 
**slices** | **int** | Number of slices | [default to 1]
**vps_platform** | **interserver_management_api_vps_order_post_request_VPSPLATFORM_e** | VPS Platform | 
**period** | **int** | Billing Period or Frequency | [default to 1]
**location** | **int** | Location | [default to 1]
**os_version** | **char \*** | OS Version | 
**hostname** | **char \*** | The hostname to assign to the VPS | [default to '']
**rootpass** | **char \*** | Root password to assign to the VVPS | 
**controlpanel** | **interserver_management_api_vps_order_post_request_CONTROLPANEL_e** | Control Panel | [optional] 
**coupon** | **char \*** | Coupon | [optional] [default to '']
**comment** | **char \*** | Order comments or notes | [optional] [default to '']

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


