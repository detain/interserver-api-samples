<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class GetScrubIpDetails200ResponseExtraInfoTablesScrubIps
{
    #[DTA\Data(field: "title", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $title = null;

    #[DTA\Data(field: "rows", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection81::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection81::class])]
    public \App\DTO\Collection81|null $rows = null;

}
