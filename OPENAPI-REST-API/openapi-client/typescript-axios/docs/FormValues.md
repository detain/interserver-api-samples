# FormValues

Currently selected configuration option IDs for a server order form.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**memory** | **number** | Selected memory option ID. | [optional] [default to undefined]
**bandwidth** | **number** | Selected bandwidth option ID. | [optional] [default to undefined]
**ips** | **number** | Selected IP block option ID. | [optional] [default to undefined]
**os** | **number** | Selected operating system option ID. | [optional] [default to undefined]
**cp** | **number** | Selected control panel option ID. | [optional] [default to undefined]
**raid** | **number** | Selected RAID option ID. | [optional] [default to undefined]
**hd** | **number** | Selected hard drive option ID. | [optional] [default to undefined]
**region** | **number** | Selected datacenter region ID. | [optional] [default to undefined]

## Example

```typescript
import { FormValues } from './api';

const instance: FormValues = {
    memory,
    bandwidth,
    ips,
    os,
    cp,
    raid,
    hd,
    region,
};
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)
