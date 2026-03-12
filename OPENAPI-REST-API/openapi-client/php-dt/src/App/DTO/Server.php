<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class Server
{
    #[DTA\Data(field: "ipmiAuth")]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $ipmi_auth = null;

    #[DTA\Data(field: "client_links")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection94::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection94::class])]
    public \App\DTO\Collection94|null $client_links = null;

    #[DTA\Data(field: "billingDetails")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerBillingDetails::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerBillingDetails::class])]
    public \App\DTO\ServerBillingDetails|null $billing_details = null;

    #[DTA\Data(field: "custCurrency")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_currency = null;

    #[DTA\Data(field: "custCurrencySymbol")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_currency_symbol = null;

    #[DTA\Data(field: "package")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $package = null;

    #[DTA\Data(field: "serviceExtra")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection96::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection96::class])]
    public \App\DTO\Collection96|null $service_extra = null;

    #[DTA\Data(field: "locations")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerLocations::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerLocations::class])]
    public \App\DTO\ServerLocations|null $locations = null;

    #[DTA\Data(field: "networkInfo")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerNetworkInfo::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerNetworkInfo::class])]
    public \App\DTO\ServerNetworkInfo|null $network_info = null;

    #[DTA\Data(field: "extraInfoTables")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerExtraInfoTables::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerExtraInfoTables::class])]
    public \App\DTO\ServerExtraInfoTables|null $extra_info_tables = null;

    #[DTA\Data(field: "serviceInfo")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServerServiceInfo::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServerServiceInfo::class])]
    public \App\DTO\ServerServiceInfo|null $service_info = null;

}
