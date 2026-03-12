<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * IP Address
 */
class IpObject
{
    /**
     * IP Address
     */
    #[DTA\Data(field: "ip")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip = null;

}
