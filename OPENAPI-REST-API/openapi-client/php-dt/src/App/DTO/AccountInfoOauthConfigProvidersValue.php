<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class AccountInfoOauthConfigProvidersValue
{
    #[DTA\Data(field: "enabled", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $enabled = null;

    #[DTA\Data(field: "linked", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $linked = null;

    #[DTA\Data(field: "account", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $account = null;

    #[DTA\Data(field: "url", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $url = null;

}
