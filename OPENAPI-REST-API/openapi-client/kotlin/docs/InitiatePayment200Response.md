
# InitiatePayment200Response

## Properties
| Name | Type | Description | Notes |
| ------------ | ------------- | ------------- | ------------- |
| **type** | [**inline**](#Type) | The response type indicating how to handle the payment. Possible values: &#x60;redirect&#x60; (redirect user to a URL), &#x60;submit&#x60; (submit a form to a URL), &#x60;single&#x60; (immediate result). |  [optional] |
| **redirect** | **kotlin.String** | URL to redirect the user to for payment (when type is &#x60;redirect&#x60;). |  [optional] |
| **action** | **kotlin.String** | Form action URL (when type is &#x60;submit&#x60;). |  [optional] |
| **method** | **kotlin.String** | HTTP method for the form submission (when type is &#x60;submit&#x60;). |  [optional] |
| **items** | [**kotlin.Any**](.md) | Form field name-value pairs to submit (when type is &#x60;submit&#x60;). |  [optional] |
| **text** | **kotlin.String** | Status or result text. |  [optional] |


<a id="Type"></a>
## Enum: type
| Name | Value |
| ---- | ----- |
| type | redirect, submit, single |



