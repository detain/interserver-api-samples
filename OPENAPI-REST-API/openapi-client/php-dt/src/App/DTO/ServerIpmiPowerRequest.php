<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * IPMI Power command for servers
 */
class ServerIpmiPowerRequest
{
    /**
     * The power action to send to the ipmi controller.
     */
    #[DTA\Data(field: "action")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $action = null;

    /**
     * The Asset ID
     */
    #[DTA\Data(field: "asset", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $asset = null;

}
