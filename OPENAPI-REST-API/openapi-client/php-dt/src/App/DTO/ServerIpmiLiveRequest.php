<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Request body to setup an IPMI Live connection.
 */
class ServerIpmiLiveRequest
{
    /**
     * Your IP Address you wish to connect to the IPMI system from.
     */
    #[DTA\Data(field: "ip")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip = null;

    /**
     * Asset ID
     */
    #[DTA\Data(field: "asset", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $asset = null;

}
