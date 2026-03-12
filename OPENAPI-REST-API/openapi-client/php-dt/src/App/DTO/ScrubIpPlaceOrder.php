<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Place ScrubIP Order
 */
class ScrubIpPlaceOrder
{
    #[DTA\Data(field: "service_type")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $service_type = null;

    #[DTA\Data(field: "ip")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip = null;

}
