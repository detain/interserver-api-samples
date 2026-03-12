<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Payload for replacing the assigned nameserver list for a domain.
 */
class DomainNameserverPutRequest
{
    #[DTA\Data(field: "nameserver")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection148::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection148::class])]
    public \App\DTO\Collection148|null $nameserver = null;

}
