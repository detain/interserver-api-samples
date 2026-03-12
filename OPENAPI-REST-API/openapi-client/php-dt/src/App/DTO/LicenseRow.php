<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A result row from the &#x60;Licenses&#x60; &#x60;GET&#x60; request.
 */
class LicenseRow
{
    /**
     * The id of the license.
     */
    #[DTA\Data(field: "license_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $license_id = null;

    /**
     * The hostname of the license.
     */
    #[DTA\Data(field: "license_hostname", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $license_hostname = null;

    /**
     * The ip of the license.
     */
    #[DTA\Data(field: "license_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $license_ip = null;

    /**
     * The services name of the license.
     */
    #[DTA\Data(field: "services_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_name = null;

    /**
     * The cost of the license.
     */
    #[DTA\Data(field: "cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cost = null;

    /**
     * The status of the license.
     */
    #[DTA\Data(field: "license_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $license_status = null;

    /**
     * The invoices paid of the license.
     */
    #[DTA\Data(field: "invoices_paid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $invoices_paid = null;

    /**
     * The invoices date of the license.
     */
    #[DTA\Data(field: "invoices_date", nullable: true)]
    #[DTA\Strategy("DateTime")]
    #[DTA\Validator("DateTime")]
    public \DateTimeInterface|null $invoices_date = null;

}
