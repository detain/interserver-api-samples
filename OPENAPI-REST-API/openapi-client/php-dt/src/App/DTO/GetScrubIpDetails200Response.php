<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class GetScrubIpDetails200Response
{
    #[DTA\Data(field: "serviceInfo", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\GetScrubIpDetails200ResponseServiceInfo::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\GetScrubIpDetails200ResponseServiceInfo::class])]
    public \App\DTO\GetScrubIpDetails200ResponseServiceInfo|null $service_info = null;

    #[DTA\Data(field: "client_links", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection80::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection80::class])]
    public \App\DTO\Collection80|null $client_links = null;

    #[DTA\Data(field: "billingDetails", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\GetScrubIpDetails200ResponseBillingDetails::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\GetScrubIpDetails200ResponseBillingDetails::class])]
    public \App\DTO\GetScrubIpDetails200ResponseBillingDetails|null $billing_details = null;

    #[DTA\Data(field: "custCurrency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_currency = null;

    #[DTA\Data(field: "custCurrencySymbol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_currency_symbol = null;

    #[DTA\Data(field: "package", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $package = null;

    #[DTA\Data(field: "extraInfoTables", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\GetScrubIpDetails200ResponseExtraInfoTables::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\GetScrubIpDetails200ResponseExtraInfoTables::class])]
    public \App\DTO\GetScrubIpDetails200ResponseExtraInfoTables|null $extra_info_tables = null;

    #[DTA\Data(field: "filter_firewall", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\GetScrubIpDetails200ResponseFilterFirewall::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\GetScrubIpDetails200ResponseFilterFirewall::class])]
    public \App\DTO\GetScrubIpDetails200ResponseFilterFirewall|null $filter_firewall = null;

}
