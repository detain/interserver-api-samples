<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Control panel license options available for a VPS.
 */
class VpsCPData
{
    /**
     * Control panel name (e.g., cPanel).
     */
    #[DTA\Data(field: "name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    /**
     * Monthly cost in cents for the control panel license.
     */
    #[DTA\Data(field: "cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $cost = null;

}
