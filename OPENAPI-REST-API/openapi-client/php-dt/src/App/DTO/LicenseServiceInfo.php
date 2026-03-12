<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class LicenseServiceInfo
{
    /**
     * License ID
     */
    #[DTA\Data(field: "license_id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $license_id = null;

    /**
     * License type
     */
    #[DTA\Data(field: "license_type")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $license_type = null;

    /**
     * License currency
     */
    #[DTA\Data(field: "license_currency")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $license_currency = null;

    /**
     * License order date
     */
    #[DTA\Data(field: "license_order_date")]
    #[DTA\Strategy("DateTime")]
    #[DTA\Validator("DateTime")]
    public \DateTimeInterface|null $license_order_date = null;

    /**
     * Customer ID
     */
    #[DTA\Data(field: "license_custid")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $license_custid = null;

    /**
     * License IP
     */
    #[DTA\Data(field: "license_ip")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $license_ip = null;

    /**
     * License status
     */
    #[DTA\Data(field: "license_status")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $license_status = null;

    /**
     * License invoice
     */
    #[DTA\Data(field: "license_invoice")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $license_invoice = null;

    /**
     * License coupon
     */
    #[DTA\Data(field: "license_coupon")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $license_coupon = null;

    /**
     * License hostname
     */
    #[DTA\Data(field: "license_hostname", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $license_hostname = null;

    /**
     * License key
     */
    #[DTA\Data(field: "license_key", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $license_key = null;

    /**
     * Additional license information
     */
    #[DTA\Data(field: "license_extra", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $license_extra = null;

}
