<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * IP address information table for a software license service.
 */
class LicenseIpInfo
{
    /**
     * Table title
     */
    #[DTA\Data(field: "title", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $title = null;

    #[DTA\Data(field: "rows", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection51::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection51::class])]
    public \App\DTO\Collection51|null $rows = null;

}
