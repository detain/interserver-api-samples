<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class GetScrubIpDetails200ResponseFilterFirewallRulesInner
{
    #[DTA\Data(field: "id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $id = null;

    #[DTA\Data(field: "source_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $source_ip = null;

    #[DTA\Data(field: "destination_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $destination_ip = null;

    #[DTA\Data(field: "protocol_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $protocol_id = null;

    #[DTA\Data(field: "source_port", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $source_port = null;

    #[DTA\Data(field: "destination_port", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $destination_port = null;

    #[DTA\Data(field: "xdp_action", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $xdp_action = null;

    #[DTA\Data(field: "global_drop", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $global_drop = null;

}
