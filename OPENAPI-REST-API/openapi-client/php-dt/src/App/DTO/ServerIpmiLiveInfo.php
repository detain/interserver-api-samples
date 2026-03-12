<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Information about the IPMI connectioj.
 */
class ServerIpmiLiveInfo
{
    #[DTA\Data(field: "text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $text = null;

    #[DTA\Data(field: "public_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $public_ip = null;

    #[DTA\Data(field: "allowed_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $allowed_ip = null;

    #[DTA\Data(field: "client_username", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $client_username = null;

    #[DTA\Data(field: "client_password", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $client_password = null;

}
