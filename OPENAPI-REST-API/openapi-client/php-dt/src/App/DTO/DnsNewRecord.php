<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Request data for a new DNS record.
 */
class DnsNewRecord
{
    /**
     * Name part of record
     */
    #[DTA\Data(field: "name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    #[DTA\Data(field: "type")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DnsRecordType::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DnsRecordType::class])]
    public \App\DTO\DnsRecordType|null $type = null;

    /**
     * Content of record
     */
    #[DTA\Data(field: "content")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $content = null;

    /**
     * Time-to-live
     */
    #[DTA\Data(field: "ttl", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $ttl = null;

    /**
     * Priority
     */
    #[DTA\Data(field: "prio", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $prio = null;

}
