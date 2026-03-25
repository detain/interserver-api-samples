# AssetServer

A pre-configured asset server available for immediate provisioning.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **number** |  | [optional] [default to undefined]
**Region** | **string** |  | [optional] [default to undefined]
**price** | **string** |  | [optional] [default to undefined]
**CPU** | [**Array&lt;AssetServerCPUInner&gt;**](AssetServerCPUInner.md) |  | [optional] [default to undefined]
**Memory** | [**Array&lt;AssetServerCPUInner&gt;**](AssetServerCPUInner.md) |  | [optional] [default to undefined]
**Bandwidth** | [**Array&lt;AssetServerCPUInner&gt;**](AssetServerCPUInner.md) |  | [optional] [default to undefined]
**IPs** | [**Array&lt;AssetServerCPUInner&gt;**](AssetServerCPUInner.md) |  | [optional] [default to undefined]
**HD** | **{ [key: string]: string; }** |  | [optional] [default to undefined]

## Example

```typescript
import { AssetServer } from './api';

const instance: AssetServer = {
    id,
    Region,
    price,
    CPU,
    Memory,
    Bandwidth,
    IPs,
    HD,
};
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)
