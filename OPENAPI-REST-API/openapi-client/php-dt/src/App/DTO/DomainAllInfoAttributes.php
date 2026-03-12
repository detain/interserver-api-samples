<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class DomainAllInfoAttributes
{
    #[DTA\Data(field: "contact_set", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DomainAllInfoAttributesContactSet::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DomainAllInfoAttributesContactSet::class])]
    public \App\DTO\DomainAllInfoAttributesContactSet|null $contact_set = null;

    #[DTA\Data(field: "registry_createdate", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $registry_createdate = null;

    #[DTA\Data(field: "registry_expiredate", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $registry_expiredate = null;

    #[DTA\Data(field: "tld_data", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $tld_data = null;

    #[DTA\Data(field: "let_expire", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $let_expire = null;

    #[DTA\Data(field: "auto_renew", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $auto_renew = null;

    #[DTA\Data(field: "sponsoring_rsp", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $sponsoring_rsp = null;

    #[DTA\Data(field: "gdpr_consent_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $gdpr_consent_status = null;

    #[DTA\Data(field: "nameserver_list", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection33::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection33::class])]
    public \App\DTO\Collection33|null $nameserver_list = null;

    #[DTA\Data(field: "registry_updatedate", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $registry_updatedate = null;

    #[DTA\Data(field: "affiliate_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $affiliate_id = null;

    #[DTA\Data(field: "expiredate", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $expiredate = null;

}
