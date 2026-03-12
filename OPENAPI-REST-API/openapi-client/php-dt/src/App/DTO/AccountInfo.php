<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Contains the full account profile including personal info, billing details, OAuth connections, and security settings.
 */
class AccountInfo
{
    #[DTA\Data(field: "custid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $custid = null;

    #[DTA\Data(field: "ima", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ima = null;

    #[DTA\Data(field: "data", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\AccountInfoData::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\AccountInfoData::class])]
    public \App\DTO\AccountInfoData|null $data = null;

    #[DTA\Data(field: "ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip = null;

    #[DTA\Data(field: "oauthproviders", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\AccountInfoOauthproviders::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\AccountInfoOauthproviders::class])]
    public \App\DTO\AccountInfoOauthproviders|null $oauthproviders = null;

    #[DTA\Data(field: "oauthconfig", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\AccountInfoOauthConfig::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\AccountInfoOauthConfig::class])]
    public \App\DTO\AccountInfoOauthConfig|null $oauthconfig = null;

    #[DTA\Data(field: "oauthadapters", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection2::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection2::class])]
    public \App\DTO\Collection2|null $oauthadapters = null;

    #[DTA\Data(field: "limits", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\AccountInfoLimits::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\AccountInfoLimits::class])]
    public \App\DTO\AccountInfoLimits|null $limits = null;

    #[DTA\Data(field: "language", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $language = null;

    #[DTA\Data(field: "countryCurrencies", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\AccountInfoCountryCurrencies::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\AccountInfoCountryCurrencies::class])]
    public \App\DTO\AccountInfoCountryCurrencies|null $country_currencies = null;

    #[DTA\Data(field: "enableLocales", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $enable_locales = null;

    #[DTA\Data(field: "enableCurrencies", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $enable_currencies = null;

    #[DTA\Data(field: "gravatar", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $gravatar = null;

}
