<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class License
{
    #[DTA\Data(field: "serviceInfo")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\LicenseServiceInfo::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\LicenseServiceInfo::class])]
    public \App\DTO\LicenseServiceInfo|null $service_info = null;

    #[DTA\Data(field: "client_links")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection48::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection48::class])]
    public \App\DTO\Collection48|null $client_links = null;

    #[DTA\Data(field: "billingDetails")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\LicenseBillingDetails::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\LicenseBillingDetails::class])]
    public \App\DTO\LicenseBillingDetails|null $billing_details = null;

    /**
     * Customer&#39;s currency
     */
    #[DTA\Data(field: "custCurrency")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_currency = null;

    /**
     * Currency symbol for customer
     */
    #[DTA\Data(field: "custCurrencySymbol")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_currency_symbol = null;

    /**
     * Package name
     */
    #[DTA\Data(field: "package")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $package = null;

    /**
     * Extra service information
     */
    #[DTA\Data(field: "serviceExtra")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection50::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection50::class])]
    public \App\DTO\Collection50|null $service_extra = null;

    #[DTA\Data(field: "extraInfoTables")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\LicenseExtraInfoTables::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\LicenseExtraInfoTables::class])]
    public \App\DTO\LicenseExtraInfoTables|null $extra_info_tables = null;

    /**
     * Extra service overview information
     */
    #[DTA\Data(field: "service_overview_extra")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_overview_extra = null;

    #[DTA\Data(field: "serviceType")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\LicenseServiceType::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\LicenseServiceType::class])]
    public \App\DTO\LicenseServiceType|null $service_type = null;

    /**
     * License key
     */
    #[DTA\Data(field: "license_key")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $license_key = null;

}
