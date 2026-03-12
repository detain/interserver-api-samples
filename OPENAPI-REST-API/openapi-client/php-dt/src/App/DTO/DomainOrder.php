<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Ordering metadata for domain registration and transfers.
 */
class DomainOrder
{
    /**
     * Cost of Whois Privacy
     */
    #[DTA\Data(field: "whoisPrivacyCost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $whois_privacy_cost = null;

    #[DTA\Data(field: "services", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DomainOrderServices::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DomainOrderServices::class])]
    public \App\DTO\DomainOrderServices|null $services = null;

    /**
     * Map of TLDs to domain service IDs.
     */
    #[DTA\Data(field: "tldServices", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "object"])]
    public object|null $tld_services = null;

}
