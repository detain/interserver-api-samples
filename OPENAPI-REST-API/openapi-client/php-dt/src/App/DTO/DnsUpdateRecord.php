<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * The request data to update a dns record.
 */
class DnsUpdateRecord
{
    #[DTA\Data(field: "name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    #[DTA\Data(field: "type", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DnsRecordType::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DnsRecordType::class])]
    public \App\DTO\DnsRecordType|null $type = null;

    #[DTA\Data(field: "content", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $content = null;

    #[DTA\Data(field: "ttl", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ttl = null;

    #[DTA\Data(field: "prio", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $prio = null;

    #[DTA\Data(field: "disabled", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $disabled = null;

    #[DTA\Data(field: "ordername", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ordername = null;

    #[DTA\Data(field: "auth", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $auth = null;

}
