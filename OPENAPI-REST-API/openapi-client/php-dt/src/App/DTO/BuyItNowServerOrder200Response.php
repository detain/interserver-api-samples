<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class BuyItNowServerOrder200Response
{
    #[DTA\Data(field: "bandwidth", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection149::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection149::class])]
    public \App\DTO\Collection149|null $bandwidth = null;

    #[DTA\Data(field: "ips", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection150::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection150::class])]
    public \App\DTO\Collection150|null $ips = null;

    #[DTA\Data(field: "os", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection151::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection151::class])]
    public \App\DTO\Collection151|null $os = null;

    #[DTA\Data(field: "cp", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection152::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection152::class])]
    public \App\DTO\Collection152|null $cp = null;

    #[DTA\Data(field: "raid", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection153::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection153::class])]
    public \App\DTO\Collection153|null $raid = null;

}
