# CreateFirewallRule
## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
| **protocol\_id** | **Integer** | 1 &#x3D; TCP, 2 &#x3D; UDP | [default to null] |
| **xdp\_action** | **Integer** | 1 &#x3D; Block,  0 &#x3D; Whitelist | [default to null] |
| **destination\_port** | **Integer** |  | [optional] [default to 80] |
| **source\_ip** | **String** | Source IP address to match. Use &#39;0.0.0.0&#39; to match any source. | [optional] [default to 0.0.0.0] |
| **source\_port** | **Integer** |  | [optional] [default to 0] |

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

