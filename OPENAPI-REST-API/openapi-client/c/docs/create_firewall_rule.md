# create_firewall_rule_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**protocol_id** | **int** | 1 &#x3D; TCP, 2 &#x3D; UDP | 
**xdp_action** | **int** | 1 &#x3D; Block,  0 &#x3D; Whitelist | 
**destination_port** | **int** |  | [optional] [default to 80]
**source_ip** | **char \*** |  | [optional] [default to '0']
**source_port** | **int** |  | [optional] [default to 0]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


