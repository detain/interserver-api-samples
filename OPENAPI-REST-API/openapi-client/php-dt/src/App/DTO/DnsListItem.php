<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A DNS zone entry with its ID, domain name, and record content.
 */
class DnsListItem
{
    #[DTA\Data(field: "id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $id = null;

    #[DTA\Data(field: "name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    #[DTA\Data(field: "content", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $content = null;

}
