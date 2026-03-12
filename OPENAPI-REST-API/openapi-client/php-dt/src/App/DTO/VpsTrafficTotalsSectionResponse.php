<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * VPS Traffic Totals Secttions Data
 */
class VpsTrafficTotalsSectionResponse
{
    #[DTA\Data(field: "in")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $in = null;

    #[DTA\Data(field: "out")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $out = null;

}
