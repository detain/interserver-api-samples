<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A datacenter region where a server can be provisioned.
 */
class Region
{
    #[DTA\Data(field: "region_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $region_id = null;

    #[DTA\Data(field: "region_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $region_name = null;

}
