<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Credit card information stored on the account.
 */
class AccountInfoDataCc
{
    #[DTA\Data(field: "cc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cc = null;

    #[DTA\Data(field: "cc_exp", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cc_exp = null;

    #[DTA\Data(field: "name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    #[DTA\Data(field: "address", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $address = null;

    #[DTA\Data(field: "city", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $city = null;

    #[DTA\Data(field: "state", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $state = null;

    #[DTA\Data(field: "zip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $zip = null;

    #[DTA\Data(field: "country", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $country = null;

    #[DTA\Data(field: "maxmind_riskscore", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $maxmind_riskscore = null;

    #[DTA\Data(field: "maxmind", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\AccountInfoMaxMindResponse::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\AccountInfoMaxMindResponse::class])]
    public \App\DTO\AccountInfoMaxMindResponse|null $maxmind = null;

    #[DTA\Data(field: "verified", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $verified = null;

}
