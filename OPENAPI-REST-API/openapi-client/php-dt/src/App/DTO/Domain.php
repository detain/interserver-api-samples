<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Full detail view of a domain service including billing, contacts, DNS, and configuration.
 */
class Domain
{
    #[DTA\Data(field: "serviceInfo", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DomainServiceInfo::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DomainServiceInfo::class])]
    public \App\DTO\DomainServiceInfo|null $service_info = null;

    #[DTA\Data(field: "serviceTypes", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection30::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection30::class])]
    public \App\DTO\Collection30|null $service_types = null;

    #[DTA\Data(field: "client_links", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection31::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection31::class])]
    public \App\DTO\Collection31|null $client_links = null;

    #[DTA\Data(field: "billingDetails", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DomainBillingDetails::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DomainBillingDetails::class])]
    public \App\DTO\DomainBillingDetails|null $billing_details = null;

    #[DTA\Data(field: "custCurrency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_currency = null;

    #[DTA\Data(field: "custCurrencySymbol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_currency_symbol = null;

    #[DTA\Data(field: "serviceExtra", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DomainBillingExtra::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DomainBillingExtra::class])]
    public \App\DTO\DomainBillingExtra|null $service_extra = null;

    #[DTA\Data(field: "extraInfoTables", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\BackupExtraInfoTables::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\BackupExtraInfoTables::class])]
    public \App\DTO\BackupExtraInfoTables|null $extra_info_tables = null;

    #[DTA\Data(field: "serviceType", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DomainServiceType::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DomainServiceType::class])]
    public \App\DTO\DomainServiceType|null $service_type = null;

    #[DTA\Data(field: "contact_details", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DomainContactDetails::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DomainContactDetails::class])]
    public \App\DTO\DomainContactDetails|null $contact_details = null;

    #[DTA\Data(field: "pwarning", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $pwarning = null;

    #[DTA\Data(field: "transfer_info", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $transfer_info = null;

    #[DTA\Data(field: "errors", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $errors = null;

    #[DTA\Data(field: "domain_logs", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection32::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection32::class])]
    public \App\DTO\Collection32|null $domain_logs = null;

    #[DTA\Data(field: "allInfo", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DomainAllInfo::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DomainAllInfo::class])]
    public \App\DTO\DomainAllInfo|null $all_info = null;

    #[DTA\Data(field: "registrarStatus", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $registrar_status = null;

    #[DTA\Data(field: "locked", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $locked = null;

    #[DTA\Data(field: "whoisPrivacy", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $whois_privacy = null;

    #[DTA\Data(field: "autoRenew", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $auto_renew = null;

}
