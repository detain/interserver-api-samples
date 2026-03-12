<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Map of webhosting service IDs to their hostnames for the account dashboard.
 */
class HomeServicesWebhostingLinks
{
    /**
     * Link to a website.
     */
    #[DTA\Data(field: "376359", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_376359 = null;

    /**
     * Link to a website.
     */
    #[DTA\Data(field: "376473", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_376473 = null;

    /**
     * Link to a website.
     */
    #[DTA\Data(field: "386218", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_386218 = null;

}
