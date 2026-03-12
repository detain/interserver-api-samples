<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class ServerLease
{
    /**
     * MAC address associated with the lease.
     */
    #[DTA\Data(field: "mac")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mac = null;

    /**
     * Indicates if the lease is authenticated.
     */
    #[DTA\Data(field: "authenticated")]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $authenticated = null;

    /**
     * Group identifier for the lease.
     */
    #[DTA\Data(field: "group")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $group = null;

}
