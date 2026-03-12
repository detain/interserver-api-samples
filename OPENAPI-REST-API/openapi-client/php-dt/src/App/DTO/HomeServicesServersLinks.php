<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Map of dedicated server service IDs to their hostnames for the account dashboard.
 */
class HomeServicesServersLinks
{
    /**
     * Link to a server.
     */
    #[DTA\Data(field: "16058", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_16058 = null;

}
