<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class ScrubIpsRowSchema
{
    #[DTA\Data(field: "scrub_ip_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $scrub_ip_id = null;

    #[DTA\Data(field: "repeat_invoices_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $repeat_invoices_cost = null;

    #[DTA\Data(field: "scrub_ip_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $scrub_ip_ip = null;

    #[DTA\Data(field: "scrub_ip_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $scrub_ip_status = null;

    #[DTA\Data(field: "services_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_name = null;

}
