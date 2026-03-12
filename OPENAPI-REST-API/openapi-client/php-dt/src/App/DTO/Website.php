<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Full detail view of a webhosting service including billing, service configuration, and panel access links.
 */
class Website
{
    #[DTA\Data(field: "serviceInfo", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\WebsiteServiceInfo::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\WebsiteServiceInfo::class])]
    public \App\DTO\WebsiteServiceInfo|null $service_info = null;

    #[DTA\Data(field: "client_links", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection133::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection133::class])]
    public \App\DTO\Collection133|null $client_links = null;

    #[DTA\Data(field: "billingDetails", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\WebsiteBillingDetails::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\WebsiteBillingDetails::class])]
    public \App\DTO\WebsiteBillingDetails|null $billing_details = null;

    /**
     * Customer&#39;s currency
     */
    #[DTA\Data(field: "custCurrency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_currency = null;

    /**
     * Customer currency symbol
     */
    #[DTA\Data(field: "custCurrencySymbol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_currency_symbol = null;

    #[DTA\Data(field: "serviceMaster", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\WebsiteServiceMaster::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\WebsiteServiceMaster::class])]
    public \App\DTO\WebsiteServiceMaster|null $service_master = null;

    /**
     * Package information
     */
    #[DTA\Data(field: "package", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $package = null;

    #[DTA\Data(field: "serviceExtra", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection134::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection134::class])]
    public \App\DTO\Collection134|null $service_extra = null;

    #[DTA\Data(field: "extraInfoTables", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\WebsiteExtraInfoTables::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\WebsiteExtraInfoTables::class])]
    public \App\DTO\WebsiteExtraInfoTables|null $extra_info_tables = null;

}
