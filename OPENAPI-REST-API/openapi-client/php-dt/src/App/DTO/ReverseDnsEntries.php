<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * The Reverse DNS entries.
 */
class ReverseDnsEntries
{
    /**
     * The IPs you have access to and their current reverse dns mapping.
     */
    #[DTA\Data(field: "ips", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection78::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection78::class])]
    public \App\DTO\Collection78|null $ips = null;

}
