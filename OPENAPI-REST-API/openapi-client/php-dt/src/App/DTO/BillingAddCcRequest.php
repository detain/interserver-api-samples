<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Request to add a new creditcard into the system.
 */
class BillingAddCcRequest
{
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

    #[DTA\Data(field: "country", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $country = null;

    #[DTA\Data(field: "zip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $zip = null;

    #[DTA\Data(field: "cc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cc = null;

    #[DTA\Data(field: "cc_exp", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cc_exp = null;

    #[DTA\Data(field: "cc_ccv2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cc_ccv2 = null;

}
