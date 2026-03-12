<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Map of license service IDs to their IP addresses for the account dashboard.
 */
class HomeServicesLicensesLinks
{
    /**
     * Link to a license.
     */
    #[DTA\Data(field: "386522", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_386522 = null;

}
