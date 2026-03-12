<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Map of domain service IDs to their hostnames for the account dashboard.
 */
class HomeServicesDomainsLinks
{
    /**
     * Link to a domain.
     */
    #[DTA\Data(field: "376114", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_376114 = null;

    /**
     * Link to a domain.
     */
    #[DTA\Data(field: "376503", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_376503 = null;

    /**
     * Link to a domain.
     */
    #[DTA\Data(field: "592337", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_592337 = null;

}
