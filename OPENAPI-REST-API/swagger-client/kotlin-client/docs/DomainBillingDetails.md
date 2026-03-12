# DomainBillingDetails

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**serviceLastInvoiceDate** | [**kotlin.String**](.md) | Date of the last invoice for the domain. |  [optional]
**servicePaymentStatus** | [**kotlin.String**](.md) | Current payment status (e.g., Paid, Unpaid). |  [optional]
**serviceFrequency** | [**kotlin.String**](.md) | Billing frequency (e.g., Yearly, Monthly). |  [optional]
**nextDate** | [**kotlin.String**](.md) | Next billing date (ISO 8601). |  [optional]
**serviceNextInvoiceDate** | [**kotlin.String**](.md) | Human-readable next invoice date. |  [optional]
**serviceCurrency** | [**kotlin.String**](.md) | Billing currency code. |  [optional]
**serviceCurrencySymbol** | [**kotlin.String**](.md) | Billing currency symbol. |  [optional]
**serviceCostInfo** | [**kotlin.String**](.md) | Cost breakdown information. |  [optional]
**serviceExtra** | [**DomainBillingExtra**](DomainBillingExtra.md) |  |  [optional]
**serviceExtraJson** | [**kotlin.String**](.md) | Raw JSON string of extra billing data. |  [optional]
