<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * OS Names
 */
class VpsOrderOsNames
{
    #[DTA\Data(field: "opensuse", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $opensuse = null;

    #[DTA\Data(field: "ubuntu", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ubuntu = null;

}
