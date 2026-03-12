<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * The lower and upper bounds of an ip range.
 */
class IpLimitRange
{
    /**
     * The begining (or first) IP address in the range.
     */
    #[DTA\Data(field: "start")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $start = null;

    /**
     * The ending (or last) IP address in the range.
     */
    #[DTA\Data(field: "end")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $end = null;

}
