<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A single DNS Record row for a Domain
 */
class DnsRecord
{
    /**
     * The ID of the DNS Record.
     */
    #[DTA\Data(field: "id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $id = null;

    /**
     * The ID of the Domain this is a record of.
     */
    #[DTA\Data(field: "domain_id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_id = null;

    #[DTA\Data(field: "name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    #[DTA\Data(field: "type")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DnsRecordType::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DnsRecordType::class])]
    public \App\DTO\DnsRecordType|null $type = null;

    /**
     * The content of the record, such as the IP address or hsotname.
     */
    #[DTA\Data(field: "content")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $content = null;

    /**
     * Time To Live (seconds)
     */
    #[DTA\Data(field: "ttl")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ttl = null;

    /**
     * Priority
     */
    #[DTA\Data(field: "prio")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $prio = null;

    #[DTA\Data(field: "disabled")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $disabled = null;

    /**
     * Alternate name to use for sorting
     */
    #[DTA\Data(field: "ordername")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ordername = null;

    #[DTA\Data(field: "auth")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $auth = null;

}
