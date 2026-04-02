# IO.Swagger.Model.CreateFirewallRule
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**DestinationPort** | **int?** |  | [optional] [default to 80]
**SourceIp** | **string** | Source IP address to match. Use &#x27;0.0.0.0&#x27; to match any source. | [optional] [default to "0.0.0.0"]
**SourcePort** | **int?** |  | [optional] [default to 0]
**ProtocolId** | **int?** | 1 &#x3D; TCP, 2 &#x3D; UDP | 
**XdpAction** | **int?** | 1 &#x3D; Block,  0 &#x3D; Whitelist | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

