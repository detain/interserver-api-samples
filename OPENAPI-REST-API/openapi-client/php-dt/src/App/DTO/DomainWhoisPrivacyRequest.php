<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Request payload for enabling or disabling Whois privacy.
 */
class DomainWhoisPrivacyRequest
{
    /**
     * Action to perform (enable or disableCancel).
     */
    #[DTA\Data(field: "func", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $func = null;

    /**
     * CSRF token if the API requires it for the account.
     */
    #[DTA\Data(field: "csrf_token", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $csrf_token = null;

    #[DTA\Data(field: "domain_firstname", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_firstname = null;

    #[DTA\Data(field: "domain_lastname", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_lastname = null;

    #[DTA\Data(field: "domain_email", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_email = null;

    #[DTA\Data(field: "domain_address", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_address = null;

    #[DTA\Data(field: "domain_address2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_address2 = null;

    #[DTA\Data(field: "domain_address3", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_address3 = null;

    #[DTA\Data(field: "domain_city", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_city = null;

    #[DTA\Data(field: "domain_state", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_state = null;

    #[DTA\Data(field: "domain_zip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_zip = null;

    #[DTA\Data(field: "domain_country", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_country = null;

    #[DTA\Data(field: "domain_phone", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_phone = null;

    #[DTA\Data(field: "domain_fax", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_fax = null;

    #[DTA\Data(field: "domain_company", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_company = null;

    #[DTA\Data(field: "domain_extra", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_extra = null;

}
