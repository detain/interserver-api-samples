<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class AccountInfoDataExtra
{
    #[DTA\Data(field: "private_whois", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $private_whois = null;

}
