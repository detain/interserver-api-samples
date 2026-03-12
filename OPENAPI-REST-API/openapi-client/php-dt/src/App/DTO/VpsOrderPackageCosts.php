<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Package Costs
 */
class VpsOrderPackageCosts
{
    #[DTA\Data(field: "57", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $_57 = null;

}
