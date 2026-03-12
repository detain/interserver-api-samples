<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class Vps
{
    #[DTA\Data(field: "serviceInfo")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsServiceInfo::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsServiceInfo::class])]
    public \App\DTO\VpsServiceInfo|null $service_info = null;

    #[DTA\Data(field: "client_links")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection111::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection111::class])]
    public \App\DTO\Collection111|null $client_links = null;

    #[DTA\Data(field: "billingDetails")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsBillingDetails::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsBillingDetails::class])]
    public \App\DTO\VpsBillingDetails|null $billing_details = null;

    #[DTA\Data(field: "custCurrency")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_currency = null;

    #[DTA\Data(field: "custCurrencySymbol")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_currency_symbol = null;

    #[DTA\Data(field: "serviceMaster")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsServiceMaster::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsServiceMaster::class])]
    public \App\DTO\VpsServiceMaster|null $service_master = null;

    #[DTA\Data(field: "package")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $package = null;

    #[DTA\Data(field: "serviceExtra")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsServiceExtra::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsServiceExtra::class])]
    public \App\DTO\VpsServiceExtra|null $service_extra = null;

    #[DTA\Data(field: "extraInfoTables")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsExtraInfoTables::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsExtraInfoTables::class])]
    public \App\DTO\VpsExtraInfoTables|null $extra_info_tables = null;

    #[DTA\Data(field: "module")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $module = null;

    #[DTA\Data(field: "token")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $token = null;

    #[DTA\Data(field: "da_link")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $da_link = null;

    #[DTA\Data(field: "sr_link")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $sr_link = null;

    #[DTA\Data(field: "cp_data")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsCPData::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsCPData::class])]
    public \App\DTO\VpsCPData|null $cp_data = null;

    #[DTA\Data(field: "da_data")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsDAData::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsDAData::class])]
    public \App\DTO\VpsDAData|null $da_data = null;

    #[DTA\Data(field: "plesk12_data")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsPlesk12Data::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsPlesk12Data::class])]
    public \App\DTO\VpsPlesk12Data|null $plesk12_data = null;

    #[DTA\Data(field: "serviceAddons")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsServiceAddons::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsServiceAddons::class])]
    public \App\DTO\VpsServiceAddons|null $service_addons = null;

    #[DTA\Data(field: "os_template", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $os_template = null;

    #[DTA\Data(field: "cpu_graph_data", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $cpu_graph_data = null;

}
