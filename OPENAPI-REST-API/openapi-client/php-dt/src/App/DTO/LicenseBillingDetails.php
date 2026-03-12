<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Billing information for a software license including payment status, billing cycle, and cost.
 */
class LicenseBillingDetails
{
    /**
     * Last invoice date
     */
    #[DTA\Data(field: "service_last_invoice_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_last_invoice_date = null;

    /**
     * Payment status
     */
    #[DTA\Data(field: "service_payment_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_payment_status = null;

    /**
     * Service frequency
     */
    #[DTA\Data(field: "service_frequency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_frequency = null;

    /**
     * Next date
     */
    #[DTA\Data(field: "next_date", nullable: true)]
    #[DTA\Strategy("DateTime")]
    #[DTA\Validator("DateTime")]
    public \DateTimeInterface|null $next_date = null;

    /**
     * Next invoice date
     */
    #[DTA\Data(field: "service_next_invoice_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_next_invoice_date = null;

    /**
     * Service currency
     */
    #[DTA\Data(field: "service_currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_currency = null;

    /**
     * Service currency symbol
     */
    #[DTA\Data(field: "service_currency_symbol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_currency_symbol = null;

    /**
     * Service coupon
     */
    #[DTA\Data(field: "service_coupon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_coupon = null;

    /**
     * Service cost information
     */
    #[DTA\Data(field: "service_cost_info", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_cost_info = null;

    /**
     * Additional service information
     */
    #[DTA\Data(field: "service_extra", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection49::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection49::class])]
    public \App\DTO\Collection49|null $service_extra = null;

    /**
     * Additional service information in JSON format
     */
    #[DTA\Data(field: "service_extra_json", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_extra_json = null;

}
