<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * IP address information table for a VPS service.
 */
class VpsIPInfo
{
    /**
     * Title of the table
     */
    #[DTA\Data(field: "title", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $title = null;

    #[DTA\Data(field: "rows", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection113::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection113::class])]
    public \App\DTO\Collection113|null $rows = null;

}
