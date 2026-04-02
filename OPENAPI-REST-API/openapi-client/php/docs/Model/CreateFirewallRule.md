# CreateFirewallRule

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**protocolId** | **int** | 1 &#x3D; TCP, 2 &#x3D; UDP |
**xdpAction** | **int** | 1 &#x3D; Block,  0 &#x3D; Whitelist |
**destinationPort** | **int** |  | [optional] [default to 80]
**sourceIp** | **string** | Source IP address to match. Use &#39;0.0.0.0&#39; to match any source. | [optional] [default to '0.0.0.0']
**sourcePort** | **int** |  | [optional] [default to 0]

[[Back to Model list]](../../README.md#models) [[Back to API list]](../../README.md#endpoints) [[Back to README]](../../README.md)
