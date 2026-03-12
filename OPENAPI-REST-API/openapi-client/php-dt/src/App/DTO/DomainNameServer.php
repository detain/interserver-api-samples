<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A single registered nameserver entry with glue IPs.
 */
class DomainNameServer
{
    #[DTA\Data(field: "sortorder", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $sortorder = null;

    #[DTA\Data(field: "name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    #[DTA\Data(field: "ipaddress", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ipaddress = null;

}
