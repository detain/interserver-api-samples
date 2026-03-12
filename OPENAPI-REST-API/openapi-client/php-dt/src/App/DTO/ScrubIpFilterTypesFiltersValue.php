<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class ScrubIpFilterTypesFiltersValue
{
    #[DTA\Data(field: "name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    #[DTA\Data(field: "desc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $desc = null;

}
