<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Full detail view of a backup service including billing, service info, and configuration.
 */
class Backup
{
    #[DTA\Data(field: "serviceInfo", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\BackupServiceInfo::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\BackupServiceInfo::class])]
    public \App\DTO\BackupServiceInfo|null $service_info = null;

    #[DTA\Data(field: "client_links", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection14::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection14::class])]
    public \App\DTO\Collection14|null $client_links = null;

    #[DTA\Data(field: "billingDetails", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\BackupBillingDetails::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\BackupBillingDetails::class])]
    public \App\DTO\BackupBillingDetails|null $billing_details = null;

    /**
     * Customer&#39;s currency.
     */
    #[DTA\Data(field: "custCurrency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_currency = null;

    /**
     * Customer&#39;s currency symbol.
     */
    #[DTA\Data(field: "custCurrencySymbol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_currency_symbol = null;

    #[DTA\Data(field: "serviceMaster", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\BackupServiceMaster::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\BackupServiceMaster::class])]
    public \App\DTO\BackupServiceMaster|null $service_master = null;

    /**
     * Package information.
     */
    #[DTA\Data(field: "package", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $package = null;

    #[DTA\Data(field: "serviceExtra", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_extra = null;

    #[DTA\Data(field: "extraInfoTables", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\BackupExtraInfoTables::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\BackupExtraInfoTables::class])]
    public \App\DTO\BackupExtraInfoTables|null $extra_info_tables = null;

}
