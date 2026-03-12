<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Billing information for a VPS service including payment status, billing cycle, and cost.
 */
class VpsBillingDetails
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
     * Billing frequency
     */
    #[DTA\Data(field: "service_frequency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_frequency = null;

    /**
     * Next billing date
     */
    #[DTA\Data(field: "next_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $next_date = null;

    /**
     * Next invoice date
     */
    #[DTA\Data(field: "service_next_invoice_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_next_invoice_date = null;

    /**
     * Currency used for billing
     */
    #[DTA\Data(field: "service_currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_currency = null;

    /**
     * Currency symbol
     */
    #[DTA\Data(field: "service_currency_symbol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_currency_symbol = null;

    /**
     * Billing coupon code
     */
    #[DTA\Data(field: "service_coupon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_coupon = null;

    /**
     * Cost information
     */
    #[DTA\Data(field: "service_cost_info", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_cost_info = null;

    #[DTA\Data(field: "service_extra", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsServiceExtra::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsServiceExtra::class])]
    public \App\DTO\VpsServiceExtra|null $service_extra = null;

    /**
     * Additional information in JSON format
     */
    #[DTA\Data(field: "service_extra_json", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_extra_json = null;

}
