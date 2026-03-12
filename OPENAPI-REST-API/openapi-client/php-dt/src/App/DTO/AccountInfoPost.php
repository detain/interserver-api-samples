<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Request to update account information.
 */
class AccountInfoPost
{
    /**
     * Your name.
     */
    #[DTA\Data(field: "name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    /**
     * Your address.
     */
    #[DTA\Data(field: "address")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $address = null;

    /**
     * Your city.
     */
    #[DTA\Data(field: "city")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $city = null;

    /**
     * Your state.
     */
    #[DTA\Data(field: "state")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $state = null;

    /**
     * Your ZIP code.
     */
    #[DTA\Data(field: "zip")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $zip = null;

    /**
     * Your country.
     */
    #[DTA\Data(field: "country")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $country = null;

    /**
     * Your phone number.
     */
    #[DTA\Data(field: "phone")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $phone = null;

    /**
     * Your company name.
     */
    #[DTA\Data(field: "company", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $company = null;

    /**
     * Additional address information.
     */
    #[DTA\Data(field: "address2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $address2 = null;

    /**
     * Your preferred locale.
     */
    #[DTA\Data(field: "locale", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $locale = null;

    /**
     * Your email for invoice notifications.
     */
    #[DTA\Data(field: "email_invoices", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $email_invoices = null;

    /**
     * Your email for abuse notifications.
     */
    #[DTA\Data(field: "email_abuse", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $email_abuse = null;

    /**
     * Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them.
     */
    #[DTA\Data(field: "disable_reset", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $disable_reset = null;

    /**
     * Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them.
     */
    #[DTA\Data(field: "disable_reinstall", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $disable_reinstall = null;

    /**
     * Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them.
     */
    #[DTA\Data(field: "disable_server_notifications", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $disable_server_notifications = null;

    /**
     * Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them.
     */
    #[DTA\Data(field: "disable_email_notifications", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $disable_email_notifications = null;

    /**
     * Your GST identification number (if applicable).
     */
    #[DTA\Data(field: "gstin", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $gstin = null;

}
