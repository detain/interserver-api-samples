<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Create firewall rule for your ip
 */
class CreateFirewallRule
{
    /**
     * 1 &#x3D; TCP, 2 &#x3D; UDP
     */
    #[DTA\Data(field: "protocol_id")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $protocol_id = null;

    /**
     * 1 &#x3D; Block,  0 &#x3D; Whitelist
     */
    #[DTA\Data(field: "xdp_action")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $xdp_action = null;

    #[DTA\Data(field: "destination_port", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $destination_port = null;

    #[DTA\Data(field: "source_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $source_ip = null;

    #[DTA\Data(field: "source_port", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $source_port = null;

}
