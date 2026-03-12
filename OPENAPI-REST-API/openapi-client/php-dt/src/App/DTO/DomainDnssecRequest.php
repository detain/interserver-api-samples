<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Request payload for adding DNSSEC DS records to a domain.
 */
class DomainDnssecRequest
{
    /**
     * List of DNSSEC algorithm IDs for each record.
     */
    #[DTA\Data(field: "algorithm", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection35::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection35::class])]
    public \App\DTO\Collection35|null $algorithm = null;

    /**
     * List of digest type IDs for each record.
     */
    #[DTA\Data(field: "digest_type", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection36::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection36::class])]
    public \App\DTO\Collection36|null $digest_type = null;

    /**
     * List of hex digests for each record.
     */
    #[DTA\Data(field: "digest", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection37::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection37::class])]
    public \App\DTO\Collection37|null $digest = null;

    /**
     * List of key tag values corresponding to each record.
     */
    #[DTA\Data(field: "key_tag", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection38::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection38::class])]
    public \App\DTO\Collection38|null $key_tag = null;

}
