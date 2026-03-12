<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class MailSchema
{
    #[DTA\Data(field: "serviceInfo")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\MailServiceInfo::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\MailServiceInfo::class])]
    public \App\DTO\MailServiceInfo|null $service_info = null;

    /**
     * Links related to the mail service for clients.
     */
    #[DTA\Data(field: "client_links")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection53::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection53::class])]
    public \App\DTO\Collection53|null $client_links = null;

    #[DTA\Data(field: "billingDetails")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\MailBillingDetails::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\MailBillingDetails::class])]
    public \App\DTO\MailBillingDetails|null $billing_details = null;

    /**
     * The customer&#39;s currency.
     */
    #[DTA\Data(field: "custCurrency")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_currency = null;

    /**
     * The currency symbol for the customer.
     */
    #[DTA\Data(field: "custCurrencySymbol")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_currency_symbol = null;

    /**
     * The package of the mail service.
     */
    #[DTA\Data(field: "package")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $package = null;

    #[DTA\Data(field: "extraInfoTables")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\MailSchemaExtraInfoTables::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\MailSchemaExtraInfoTables::class])]
    public \App\DTO\MailSchemaExtraInfoTables|null $extra_info_tables = null;

    #[DTA\Data(field: "serviceType")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\MailServiceType::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\MailServiceType::class])]
    public \App\DTO\MailServiceType|null $service_type = null;

    /**
     * The usage count of the mail service.
     */
    #[DTA\Data(field: "usage_count")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $usage_count = null;

    /**
     * Extra information for the mail service.
     */
    #[DTA\Data(field: "serviceExtra", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection55::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection55::class])]
    public \App\DTO\Collection55|null $service_extra = null;

}
