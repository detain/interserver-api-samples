<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class AccountInfoLimitsInner
{
    #[DTA\Data(field: "start", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $start = null;

    #[DTA\Data(field: "end", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $end = null;

}
