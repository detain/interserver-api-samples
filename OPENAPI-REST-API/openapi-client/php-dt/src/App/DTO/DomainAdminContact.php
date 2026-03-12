<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Administrative contact information for a domain registration.
 */
class DomainAdminContact
{
    #[DTA\Data(field: "status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $status = null;

    #[DTA\Data(field: "state", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $state = null;

    #[DTA\Data(field: "org_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $org_name = null;

    #[DTA\Data(field: "country", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $country = null;

    #[DTA\Data(field: "postal_code", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $postal_code = null;

    #[DTA\Data(field: "email", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $email = null;

    #[DTA\Data(field: "fax", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $fax = null;

    #[DTA\Data(field: "address2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $address2 = null;

    #[DTA\Data(field: "address3", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $address3 = null;

    #[DTA\Data(field: "address1", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $address1 = null;

    #[DTA\Data(field: "city", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $city = null;

    #[DTA\Data(field: "phone", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $phone = null;

    #[DTA\Data(field: "first_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $first_name = null;

    #[DTA\Data(field: "last_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $last_name = null;

}
