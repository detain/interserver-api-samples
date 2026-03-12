<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class DomainNameserverGetResponseInner
{
    #[DTA\Data(field: "name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    #[DTA\Data(field: "ipaddress")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ipaddress = null;

    /**
     * Whether the registrar allows deletion of this nameserver entry.
     */
    #[DTA\Data(field: "can_delete")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $can_delete = null;

}
