<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * OAuth integration configuration including callback URL and available providers.
 */
class AccountInfoOauthConfig
{
    #[DTA\Data(field: "callback")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $callback = null;

    #[DTA\Data(field: "providers")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\AccountInfoOauthConfigProviders::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\AccountInfoOauthConfigProviders::class])]
    public \App\DTO\AccountInfoOauthConfigProviders|null $providers = null;

}
