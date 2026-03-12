<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Available scrub filter types for building firewall rules.
 */
class ScrubIpFilterTypes
{
    #[DTA\Data(field: "success", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $success = null;

    #[DTA\Data(field: "filters", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection84::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection84::class])]
    public \App\DTO\Collection84|null $filters = null;

}
