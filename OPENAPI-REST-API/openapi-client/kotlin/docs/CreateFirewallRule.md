
# CreateFirewallRule

## Properties
| Name | Type | Description | Notes |
| ------------ | ------------- | ------------- | ------------- |
| **protocolId** | [**inline**](#ProtocolId) | 1 &#x3D; TCP, 2 &#x3D; UDP |  |
| **xdpAction** | [**inline**](#XdpAction) | 1 &#x3D; Block,  0 &#x3D; Whitelist |  |
| **destinationPort** | **kotlin.Int** |  |  [optional] |
| **sourceIp** | **kotlin.String** |  |  [optional] |
| **sourcePort** | **kotlin.Int** |  |  [optional] |


<a id="ProtocolId"></a>
## Enum: protocol_id
| Name | Value |
| ---- | ----- |
| protocolId | 1, 2 |


<a id="XdpAction"></a>
## Enum: xdp_action
| Name | Value |
| ---- | ----- |
| xdpAction | 0, 1 |



