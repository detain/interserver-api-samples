# MailBlocks

The listing of blocked emails.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**local** | [**Array&lt;MailBlockClickHouse&gt;**](MailBlockClickHouse.md) |  | [default to undefined]
**mbtrap** | [**Array&lt;MailBlockClickHouse&gt;**](MailBlockClickHouse.md) |  | [default to undefined]
**subject** | [**Array&lt;MailBlockRspamd&gt;**](MailBlockRspamd.md) |  | [default to undefined]

## Example

```typescript
import { MailBlocks } from './api';

const instance: MailBlocks = {
    local,
    mbtrap,
    subject,
};
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)
