<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Payload for adding a registered nameserver (glue record).
 */
class DomainNameserverPostRequest
{
    #[DTA\Data(field: "name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    #[DTA\Data(field: "ipAddress")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_address = null;

}
