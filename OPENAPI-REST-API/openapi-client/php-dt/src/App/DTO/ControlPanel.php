<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A hosting control panel option (e.g., cPanel, Plesk) available for server provisioning.
 */
class ControlPanel
{
    #[DTA\Data(field: "id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $id = null;

    #[DTA\Data(field: "short_desc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $short_desc = null;

    #[DTA\Data(field: "monthly_price", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $monthly_price = null;

}
