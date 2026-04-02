# CreateFirewallRule

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**DestinationPort** | **int32** |  | [optional] [default to 80]
**SourceIp** | **string** | Source IP address to match. Use &#x27;0.0.0.0&#x27; to match any source. | [optional] [default to 0.0.0.0]
**SourcePort** | **int32** |  | [optional] [default to 0]
**ProtocolId** | **int32** | 1 &#x3D; TCP, 2 &#x3D; UDP | [default to null]
**XdpAction** | **int32** | 1 &#x3D; Block,  0 &#x3D; Whitelist | [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

