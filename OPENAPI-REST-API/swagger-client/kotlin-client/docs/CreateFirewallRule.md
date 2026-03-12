# CreateFirewallRule

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**destinationPort** | [**kotlin.Int**](.md) |  |  [optional]
**sourceIp** | [**kotlin.String**](.md) |  |  [optional]
**sourcePort** | [**kotlin.Int**](.md) |  |  [optional]
**protocolId** | [**inline**](#ProtocolId) | 1 &#x3D; TCP, 2 &#x3D; UDP | 
**xdpAction** | [**inline**](#XdpAction) | 1 &#x3D; Block,  0 &#x3D; Whitelist | 

<a name="ProtocolId"></a>
## Enum: protocol_id
Name | Value
---- | -----
protocolId | 1, 2

<a name="XdpAction"></a>
## Enum: xdp_action
Name | Value
---- | -----
xdpAction | 0, 1
