# CreateFirewallRule

Create firewall rule for your ip

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**protocol_id** | **number** | 1 &#x3D; TCP, 2 &#x3D; UDP | [default to undefined]
**xdp_action** | **number** | 1 &#x3D; Block,  0 &#x3D; Whitelist | [default to undefined]
**destination_port** | **number** |  | [optional] [default to 80]
**source_ip** | **string** |  | [optional] [default to '0']
**source_port** | **number** |  | [optional] [default to 0]

## Example

```typescript
import { CreateFirewallRule } from './api';

const instance: CreateFirewallRule = {
    protocol_id,
    xdp_action,
    destination_port,
    source_ip,
    source_port,
};
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)
