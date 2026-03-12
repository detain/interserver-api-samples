# # CreateFirewallRule

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**protocol_id** | **int** | 1 &#x3D; TCP, 2 &#x3D; UDP |
**xdp_action** | **int** | 1 &#x3D; Block,  0 &#x3D; Whitelist |
**destination_port** | **int** |  | [optional] [default to 80]
**source_ip** | **string** |  | [optional] [default to '0']
**source_port** | **int** |  | [optional] [default to 0]

[[Back to Model list]](../../README.md#models) [[Back to API list]](../../README.md#endpoints) [[Back to README]](../../README.md)
