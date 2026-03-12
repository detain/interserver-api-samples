<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner
{
    #[DTA\Data(field: "desc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $desc = null;

    #[DTA\Data(field: "value", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $value = null;

}
