<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * IP address information table for a QuickServer service.
 */
class QuickserverIpInfo
{
    /**
     * Table title
     */
    #[DTA\Data(field: "title", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $title = null;

    #[DTA\Data(field: "rows", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection72::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection72::class])]
    public \App\DTO\Collection72|null $rows = null;

}
