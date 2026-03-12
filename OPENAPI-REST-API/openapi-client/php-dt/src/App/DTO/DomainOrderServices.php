<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Available domain service catalog entries keyed by service ID.
 */
class DomainOrderServices
{
    #[DTA\Data(field: "DomainOrderServices10001", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DomainOrderServices10001::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DomainOrderServices10001::class])]
    public \App\DTO\DomainOrderServices10001|null $domain_order_services10001 = null;

}
