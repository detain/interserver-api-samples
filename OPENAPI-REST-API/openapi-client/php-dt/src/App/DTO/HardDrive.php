<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A hard drive option available for a dedicated server configuration.
 */
class HardDrive
{
    #[DTA\Data(field: "id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $id = null;

    #[DTA\Data(field: "short_desc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $short_desc = null;

    #[DTA\Data(field: "size", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $size = null;

    #[DTA\Data(field: "drive_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $drive_type = null;

    #[DTA\Data(field: "monthly_price", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $monthly_price = null;

    #[DTA\Data(field: "monthly_price_display", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $monthly_price_display = null;

}
