# ConfigIds

Internal configuration IDs mapped from the selected form values for a server order.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**memory** | **number** | Configuration ID for the selected memory option. | [optional] [default to undefined]
**hd** | **number** | Configuration ID for the selected hard drive option. | [optional] [default to undefined]
**bandwidth** | **number** | Configuration ID for the selected bandwidth option. | [optional] [default to undefined]
**ips** | **number** | Configuration ID for the selected IP block option. | [optional] [default to undefined]
**os** | **number** | Configuration ID for the selected operating system. | [optional] [default to undefined]
**cp** | **number** | Configuration ID for the selected control panel. | [optional] [default to undefined]
**raid** | **number** | Configuration ID for the selected RAID option. | [optional] [default to undefined]

## Example

```typescript
import { ConfigIds } from './api';

const instance: ConfigIds = {
    memory,
    hd,
    bandwidth,
    ips,
    os,
    cp,
    raid,
};
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)
