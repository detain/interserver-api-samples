<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class GetScrubIpDetails200ResponseServiceInfo
{
    #[DTA\Data(field: "scrub_ip_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $scrub_ip_id = null;

    #[DTA\Data(field: "scrub_ip_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $scrub_ip_type = null;

    #[DTA\Data(field: "scrub_ip_custid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $scrub_ip_custid = null;

    #[DTA\Data(field: "scrub_ip_order_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $scrub_ip_order_date = null;

    #[DTA\Data(field: "scrub_ip_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $scrub_ip_ip = null;

    #[DTA\Data(field: "scrub_ip_service_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $scrub_ip_service_id = null;

    #[DTA\Data(field: "scrub_ip_service_module", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $scrub_ip_service_module = null;

    #[DTA\Data(field: "scrub_ip_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $scrub_ip_status = null;

    #[DTA\Data(field: "scrub_ip_invoice", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $scrub_ip_invoice = null;

    #[DTA\Data(field: "scrub_ip_currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $scrub_ip_currency = null;

    #[DTA\Data(field: "scrub_ip_coupon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $scrub_ip_coupon = null;

    #[DTA\Data(field: "scrub_ip_comment", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $scrub_ip_comment = null;

}
