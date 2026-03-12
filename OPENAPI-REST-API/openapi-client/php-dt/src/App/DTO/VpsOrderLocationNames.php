<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Location Names
 */
class VpsOrderLocationNames
{
    #[DTA\Data(field: "3", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_3 = null;

}
