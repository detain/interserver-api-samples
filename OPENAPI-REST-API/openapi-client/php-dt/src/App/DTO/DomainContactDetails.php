<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Contact details used for domain registrant/admin/technical/billing records.
 */
class DomainContactDetails
{
    /**
     * Contact status reported by the registrar.
     */
    #[DTA\Data(field: "status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $status = null;

    /**
     * State or region for the contact address.
     */
    #[DTA\Data(field: "state", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $state = null;

    /**
     * Organization name for the contact.
     */
    #[DTA\Data(field: "org_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $org_name = null;

    /**
     * Two-letter country code for the contact.
     */
    #[DTA\Data(field: "country", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $country = null;

    /**
     * Postal or ZIP code for the contact address.
     */
    #[DTA\Data(field: "postal_code", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $postal_code = null;

    /**
     * Email address for the contact.
     */
    #[DTA\Data(field: "email", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $email = null;

    /**
     * Fax number for the contact, if available.
     */
    #[DTA\Data(field: "fax", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $fax = null;

    /**
     * Secondary street address line.
     */
    #[DTA\Data(field: "address2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $address2 = null;

    /**
     * Tertiary street address line.
     */
    #[DTA\Data(field: "address3", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $address3 = null;

    /**
     * Primary street address line.
     */
    #[DTA\Data(field: "address1", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $address1 = null;

    /**
     * City for the contact address.
     */
    #[DTA\Data(field: "city", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $city = null;

    /**
     * Phone number for the contact.
     */
    #[DTA\Data(field: "phone", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $phone = null;

    /**
     * First name for the contact.
     */
    #[DTA\Data(field: "first_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $first_name = null;

    /**
     * Last name for the contact.
     */
    #[DTA\Data(field: "last_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $last_name = null;

}
