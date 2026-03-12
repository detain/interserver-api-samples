<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * The request to update the time zone of a vps.
 */
class TimezoneUpdate
{
    /**
     * The time zone
     */
    #[DTA\Data(field: "timezone")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $timezone = null;

}
