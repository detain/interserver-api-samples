<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class ScrubIpsLogRowSchema
{
    #[DTA\Data(field: "date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $date = null;

    #[DTA\Data(field: "filter", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $filter = null;

    #[DTA\Data(field: "blocked_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $blocked_ip = null;

    #[DTA\Data(field: "target_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $target_ip = null;

    #[DTA\Data(field: "target_port", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $target_port = null;

    #[DTA\Data(field: "protocol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $protocol = null;

    #[DTA\Data(field: "byte_count", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $byte_count = null;

    #[DTA\Data(field: "xdp_action", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $xdp_action = null;

}
