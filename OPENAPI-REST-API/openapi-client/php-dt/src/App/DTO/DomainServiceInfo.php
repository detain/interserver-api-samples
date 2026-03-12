<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Detailed domain service record for a domain order.
 */
class DomainServiceInfo
{
    #[DTA\Data(field: "domain_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_id = null;

    #[DTA\Data(field: "domain_hostname", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_hostname = null;

    #[DTA\Data(field: "domain_username", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_username = null;

    #[DTA\Data(field: "domain_password", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_password = null;

    #[DTA\Data(field: "domain_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_type = null;

    #[DTA\Data(field: "domain_currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_currency = null;

    #[DTA\Data(field: "domain_expire_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_expire_date = null;

    #[DTA\Data(field: "domain_order_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_order_date = null;

    #[DTA\Data(field: "domain_custid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_custid = null;

    #[DTA\Data(field: "domain_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_status = null;

    #[DTA\Data(field: "domain_invoice", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_invoice = null;

    #[DTA\Data(field: "domain_coupon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_coupon = null;

}
