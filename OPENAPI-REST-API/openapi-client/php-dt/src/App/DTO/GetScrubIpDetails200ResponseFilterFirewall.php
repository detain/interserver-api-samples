<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class GetScrubIpDetails200ResponseFilterFirewall
{
    #[DTA\Data(field: "rules", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection82::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection82::class])]
    public \App\DTO\Collection82|null $rules = null;

    #[DTA\Data(field: "filters", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection83::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection83::class])]
    public \App\DTO\Collection83|null $filters = null;

    #[DTA\Data(field: "scrub_enabled", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $scrub_enabled = null;

}
