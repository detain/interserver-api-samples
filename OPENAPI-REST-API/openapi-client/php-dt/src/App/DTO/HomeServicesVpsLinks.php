<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Map of VPS service IDs to their hostnames for the account dashboard.
 */
class HomeServicesVpsLinks
{
    /**
     * Link to a VPS.
     */
    #[DTA\Data(field: "465503", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_465503 = null;

    /**
     * Link to a VPS.
     */
    #[DTA\Data(field: "2500081", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_2500081 = null;

    /**
     * Link to a VPS.
     */
    #[DTA\Data(field: "2578866", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_2578866 = null;

}
