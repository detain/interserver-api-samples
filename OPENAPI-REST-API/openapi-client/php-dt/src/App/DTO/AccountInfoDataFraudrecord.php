<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class AccountInfoDataFraudrecord
{
    #[DTA\Data(field: "score", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $score = null;

    #[DTA\Data(field: "count", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $count = null;

    #[DTA\Data(field: "reliability", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $reliability = null;

    #[DTA\Data(field: "code", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $code = null;

}
